#include <stdio.h>
#include <cassert>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

const int N = 10010;

map < pair<int, int>, int > mp;
map < int, int > f;
map < int, int >::iterator fi;
map < int, vector <int> > g;
map < int, vector <int> >::iterator gi;
int a[N], b[N], c[N], d[N], ans[N];

int main() {
  int tt;
  scanf("%d", &tt);
  assert(1 <= tt && tt <= 5);
  while (tt--) {
    int n, m, k, i, j;
    scanf("%d %d %d", &n, &m, &k);
    assert(1 <= k && k <= 70 && 1 <= m && m <= 1000000000 && 2*k <= n && n <= 10000);
    for (i=0;i<n;i++) {
      scanf("%d", &a[i]);
      assert(0 <= a[i] && a[i] <= 1000000000);
      b[i] = a[i] % m;
    }
    sort(b, b+n);
    int p = n / k, ok = 1, sum = 0, have = 0, t = 0;
    i = 0;
    while (i < n) {
      j = i;
      while (j < n && b[i] == b[j]) j++;
      int z = j-i;
      int lower = (z+p)/(p+1), upper = z/p;
      if (lower > upper) {
        ok = 0;
        break;
      }
      sum = (sum+(long long)lower*b[i]) % m;
      for (int w=0;w<lower;w++) d[have++] = b[i];
      for (int w=lower+1;w<=upper;w++) c[t++] = b[i];
      i = j;
    }
    if (!ok || have > k) {
      printf("%d\n", -1);
      continue;
    }
    int half = t/2;
    mp.clear();
    for (int mask=0;mask<(1 << half);mask++) {
      int v = 0, w = 0;
      for (i=0;i<half;i++)
        if (mask & (1 << i)) {
          v += c[i];
          if (v >= m) v -= m;
          w++;
        }
      mp[make_pair(v, w)] = mask;
    }
    ok = 0;
    for (int mask=0;mask<(1 << (t-half));mask++) {
      int v = (m-sum) % m, w = k-have;
      for (i=half;i<t;i++)
        if (mask & (1 << (i-half))) {
          v -= c[i];
          if (v < 0) v += m;
          w--;
        }
      if (w < 0 || w > half) continue;
      if (mp.find(make_pair(v, w)) != mp.end()) {
        long long u = ((long long)mask << half) + mp[make_pair(v, w)];
        for (i=0;i<t;i++)
          if (u & (1LL << i)) d[have++] = c[i];
        ok = 1;
        break;
      }
    }
    if (!ok) {
      printf("%d\n", -1);
      continue;
    }
    f.clear();
    for (i=0;i<k;i++) f[d[i]]++;
    g.clear();
    for (i=0;i<n;i++) g[a[i] % m].push_back(a[i]);
    fi = f.begin();
    gi = g.begin();
    int left = 0, right = k-1;
    while (fi != f.end()) {
      int cnt = (*fi).second, len = (*gi).second.size();
      int extra = len-cnt*p, w = 0;
      for (i=0;i<extra;i++) {
        for (j=0;j<=p;j++) ans[j*k+left] = (*gi).second[w++];
        left++;
      }
      for (i=extra;i<cnt;i++) {
        for (j=0;j<p;j++) ans[j*k+right] = (*gi).second[w++];
        right--;
      }
      fi++; gi++;
    }
    for (i=0;i<n-1;i++) printf("%d ", ans[i]);
    printf("%d\n", ans[n-1]);
  }
  return 0;
}

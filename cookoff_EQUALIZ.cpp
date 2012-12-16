#include <stdio.h>

int cnt;
int kg[999], g[999][99];

void go(int l, int r) {
  int len = r-l+1;
  for (int x=2;x<=len;x++)
    if (len % x == 0) {
      if (x < len)
        for (int y=0;y<x;y++) go(l+y*(len/x), l+(y+1)*(len/x)-1);
      for (int z=0;z<len/x;z++) {
        kg[cnt] = x;
        for (int y=0;y<x;y++) g[cnt][y] = l+y*(len/x)+z;
        cnt++;
      }
      break;
    }
}

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n, foo;
    scanf("%d", &n);
    for (int i=0;i<n;i++) scanf("%d", &foo);
    cnt = 0;
    go(1, n);
    printf("%d\n", cnt);
    for (int i=0;i<cnt;i++) {
      printf("%d", kg[i]);
      for (int j=0;j<kg[i];j++) printf(" %d", g[i][j]);
      printf("\n");
    }
  }
  return 0;
}

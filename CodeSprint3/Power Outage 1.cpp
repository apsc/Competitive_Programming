#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

#define edge pair< int, int >
#define MAX 2009

// ( w (u, v) ) format
vector< pair< int, edge > > GRAPH, MST;
int arr[MAX],parent[MAX], total, N, E;

int findset(int x, int *parent)
{
    if(x != parent[x])
        parent[x] = findset(parent[x], parent);
    return parent[x];
}

void kruskal()
{
    int i, pu, pv;
    sort(GRAPH.begin(), GRAPH.end()); // increasing weight
    for(i=0; i<E; i++)
    {
        pu = findset(GRAPH[i].second.first, parent);
        pv = findset(GRAPH[i].second.second, parent);
        if(pu != pv)
        {
            MST.push_back(GRAPH[i]); // add to tree
            arr[i]= GRAPH[i].first; // add edge cost
            parent[pu] = parent[pv]; // link
        }
    }
    GRAPH.clear();
    MST.clear();
}

void reset()
{
    // reset appropriate variables here
    // like MST.clear(), GRAPH.clear(); etc etc.
    for(int i=1; i<=N; i++) parent[i] = i;
}

void print()
{
    int i, sz;
    // this is just style...
    sz = MST.size();
    for(i=0; i<sz; i++)
    {
        printf("( %d", MST[i].second.first);
        printf(", %d )", MST[i].second.second);
        printf(": %d\n", MST[i].first);
    }
    printf("Minimum cost: %d\n", total);
}

int main()
{
    
    int t;    
    scanf("%d",&t);
    while(t--){    
        int flag=0,k, i, u, v, w;

        scanf("%d %d %d", &N, &E, &k);
        reset();
        for(i=0; i<E; i++)
        {
            scanf("%d %d %d", &u, &v, &w);
            GRAPH.push_back(pair< int, edge >(w, edge(u, v)));
        }
        kruskal(); // runs kruskal and construct MST vector
        //print(); // prints MST edges and weights
        int cnt=0;
        for(int i=1;i<=N;i++){//printf("%d\n",parent[i]);
                //h[parent[i]]=i;
                if(parent[i]==i)cnt++;
        }
        total=0;
        /*
        for(int i=0;i<=N;i++){
                if(h[parent[i]]==i){
                      k--;
                      if(k==0){flag=1;break;}
                }
        }
        */
        if(k<cnt)printf("Impossible!\n");
        else {
             //int i=N-1;
             //printf("%d%d\n",cnt,k);
             //sort(MST.begin(),MST.end() ); // increasing weight
             //for(int i=0;i<MST.size();i++)printf("%d\t",MST[i].first());
             //print();
             for(int i=0;i<E-k+cnt;i++){total+=arr[i];}//printf("%d\t",arr[i]);}
             /*scanf("%d");
             while(1){
                           total-=MST[i].first;
                           k--;i--;
                           if(k==cnt)break;
             }*/
             printf("%d\n",total);
        }
        
    }
    return 0;
}

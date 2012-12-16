#include<iostream>
using namespace std;int main(){int t,a[102][102]={0};cin>>t;while(t--){int n,m=0;cin>>n;for(int i=1;i<=n;i++){for(int j=1;j<=i;j++){cin>>a[i][j];a[i][j]+=max(a[i-1][j],a[i-1][j-1]);if(m<a[i][j])m=a[i][j];}}cout<<m<<"\n";}}

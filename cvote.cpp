#include<iostream>
#include<cstdio>
#include<cstring>
#include<map>

using namespace std;

int main()
{
    int n,m,i;
    string vote,name,country,aname,cname;
    //freopen("cvote.txt","r",stdin);
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        map <string,int> cnt;
        map <string,int> cntt;
        map <string,int> :: iterator it;
        map <string,string> cntryname;
        for(i=0;i<n;++i)
        {
            cin>>name>>country;
            cntryname[name]=country;
        }
        for(i=0;i<m;++i)
        {
            cin>>vote;
            ++cnt[vote];
            ++cntt[cntryname[vote]];
        }

        it=cnt.begin();
        aname = it->first;
        for(;it!=cnt.end();++it)
        {
            if(cnt[aname] < it->second)
            {
                aname = it->first;
            }
            else if(cnt[aname] == it->second)
            {
                if(aname > it->first)
                {
                    aname = it->first;
                }
            }
            //cout<<it->first<<it->second<<endl;
        }
        //cout<<endl;

        it=cntt.begin();
        cname = it->first;
        for(;it!=cntt.end();++it)
        {
            if(cntt[cname] < it->second)
            {
                cname = it->first;
            }
            else if(cntt[cname] == it->second)
            {
                if(cname > it->first)
                {
                    cname = it->first;
                }
            }
            //cout<<it->first<<it->second<<endl;
        }
        //cout<<endl;
        cout<<cname<<endl<<aname<<endl;
    }
    return 0;
}

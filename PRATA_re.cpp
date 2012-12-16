#include<iostream>
#include<math.h>
 
using namespace std;
unsigned long long l,r[100],c;
 
unsigned long long search(unsigned long long low,unsigned long long high,unsigned long long p)
{
                        
                
               unsigned long long mid=(low+high)/2;
                    
                        c=0;
                    for(unsigned long long i=0;i<l;++i)
                        {  
                                    
                             c+=(sqrt((8*mid)/r[i]+1)-1)/2;
                             
            }
                        
        /*              if(c==p){ //  cout<<"p="<<p<<"mid="<<mid<<endl;
                                    return mid;
                                }*/
                  if(low==mid ){       if(p<=c )return mid;
                                       else return mid+1;
                                                 
                                                 
                                    }
        
        
                        
                        else if(c>=p)
                        {   
                                search(low,mid,p);
                        }
                        else  {
                             search(mid+1,high,p);
                                 }
                        
                        
}
 
int main()
{
        
        unsigned long long t1,p;
        cin>>t1;
        while(t1--)
        {
                 
         
          
                c=0;
                cin>>p;
                cin>>l;
                
                for(unsigned long long i=0;i<l;++i)
                {
                        cin>>r[i];
                }
                if(p>0 && l>0)
                {unsigned long long z=search(0,4004001,p );
        cout<<z<<endl;
                }
        else cout<<"0"<<endl;
        }
        return 0;
}

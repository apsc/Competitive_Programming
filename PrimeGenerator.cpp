#include<stdio.h>
#include<cstring>
#include<cmath>
#include<iostream>
#define MAX 10000006;
using namespace std;
long long int p,n;
bool *isComposite = new bool[MAX + 1];
//memset(isComposite, 0, sizeof(bool) * (upperBound + 1));
void runEratosthenesSieve(int upperBound) {
 
      
      memset(isComposite, 0, sizeof(bool) * (upperBound + 1));
 
      for (int m = 2; m <= upperBoundSquareRoot; m++) {
 
            if (!isComposite[m]) {
 
                 
 
                  for (int k = m * m; k <= upperBound; k += m)
 
                        isComposite[k] = true;
 
            }
 
      }
      if(p==1)p=2;
       for (int m = p; m <= upperBound; m++)
 
            if (!isComposite[m])
 
                  cout << m <<endl;
 
      delete [] isComposite; 

}


int main(){
    

    int t;
    scanf("%lld",&t);
    for(;t>0;t--){
                  scanf("%lld %lld",&p,&n);
                   runEratosthenesSieve(n);              
                  printf("\n");
                  
    }
    return 0;    
}

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int p,k=0;
int a[1000];
int  comb(int sum,int n,int k)
 {
   if(sum==0)
      { for(int i=0;i<k;i++)
           {
             cout<<a[i]<<"+";
           }
           cout<<"\b="<<n<<endl;
           k=0;
        return 1;
      }
  else if(sum<0)
      return 0;
  else
     { 
       int r=(k==0)?1:a[k-1];
    for(int i=r;i<=n;i++)  
      { a[k]=i;
        p+=comb(sum-i,n,k+1);
       }
     }
return 0;
      
  }

int main() {
  int n;
  cout<<"Enter the number:";
cin>>n;
cout<<"Combinations are\n";
 comb(n,n,0);

 cout<<"\nTotal No:"<<p;
}
#include<iostream>
#include<cmath>
#include<string>
using namespace std;
void decbin(int n)//function to convert decimal to binary
{
    int sum=0;
    int p=1;
    while(n>0)
    {
        if(n&1)
        {
            int lastbit=n&1;
            sum=sum+p*lastbit;
            
        }
        p=p*10;
        n=n>>1;
    }
    cout<<sum;
}
int main()
{
    int n;
    cin>>n;
    char s[100005];
   cin>>s;
   long long int ans=0;int k=0;
   for(int i=n-1;i>=0;i--)//this is to convert char to integer number
   {  
       s[i]=s[i]-'0';
       ans+=s[i]*pow(2,k);
       k++;
   }
   int z=0;
    if(__builtin_popcount(ans)==1)
    //to check for power of 2 if yes then its not possible to produce a output
    {cout<<"-1"<<endl;
    z++;}
        
    
    
    if(__builtin_popcountll(ans)==0)//if all of the digits are set bits it must be 1,3,7,etc...in these cases also output is not possible
    {cout<<"-1"<<endl;
    z++;}
    
    if(z==0)//if not then print nos
    {int ans1=ans-1;
    int ans2=ans+1;
    
    decbin(ans1);
    cout<<" ";
    decbin(ans2);
    }
    return 0;
    
}

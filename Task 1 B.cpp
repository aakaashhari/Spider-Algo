#include<iostream>
#include<string>
using namespace std;
int count=0;
int rec(string s,int n)
{
    
    int mid=n/2;
    
    int k=0;
    for(int i=0;i<mid;i++)
    {
        if(s[i]==s[mid+i])
         k=k+1;
        else
        break;
    }
 
   if(k==mid)
   {count++;
  
   }
   
    return count;
    
}

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    int ans;
    if(n==1)
    cout<<"0"<<endl;
    else
{    while(n>1)
    {ans=rec(s,n);
    n=n/2;
    }
    cout<<ans;
 }   
 
    return 0;
}

//code for task 1 D (Determine The final Rating)
#include<iostream>
using namespace std;

int main()
{
    int n,r,x,y;
    cin>>n>>r>>x>>y;
    int c[1000005];
    for(int i=1;i<=n;i++)
    cin>>c[i];
    int s[1000005];
    for(int i=1;i<=n;i++)
    cin>>s[i];
    int total=r;
    for(int i=1;i<=n;i++)
    {
        if(s[i]==1&&c[i]==1)
        total=total+x;
        else
        {
            if(c[i]==1&&s[i]==0)
            total=total-y;
        }
    }
    
    if(total==r)
    cout<<"no change"<<endl;
    else
    {
        if(total>r)
        cout<<"promoted"<<endl;
        else
        {
            if(total<r)
            cout<<"demoted"<<endl;
        }
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int solve(int n)
{
    if(n==1)return 1;
    return n*solve(n-1);

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
       int k=solve(n);
        cout<<k<<endl;
    }
}

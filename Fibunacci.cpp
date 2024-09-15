#include<bits/stdc++.h>
using namespace std;
unsigned long long int ara[10000000];
unsigned long long int fibu(int n)
{
    if(n==1|| n==2)return 1;
    if(ara[n]!=0)
    {
        return ara[n];
    }
    else
        ara[n]=fibu(n-1)+fibu(n-2);
    return ara[n];
}
int main()
{
   unsigned long long  int n;
    while(cin>>n)
    {
        cout<<fibu(n)<<endl;
    }
}

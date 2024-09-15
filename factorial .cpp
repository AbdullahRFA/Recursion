#include<bits/stdc++.h>
using namespace std;
unsigned long long int ara[10000000];
unsigned long long int fact(int n)
{
    if(n==1)return 1;
    if(ara[n]!=0)return ara[n];
    else ara[n]=n*fact(n-1);
    return ara[n];
}
int main()
{
   unsigned long long int n;
    while(cin>>n)
    {
        cout<<fact(n)<<endl;
    }
}

#include<iostream>
using namespace std;
int main()
{
    long int n;
    cin>>n;
    if(n%10==0) cout<<n/10;
    else if(n>0) cout<<n/10;
    else cout<<n/10-1;
}
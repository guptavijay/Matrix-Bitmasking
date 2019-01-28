#include <iostream>
#include<bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
#define ll long long
int setbits(ll int n)
{
    int cnt=0;   //cnt of set bits
    while(n)
    {
        cnt+= n&1;        // gives the last bit of number
        n >>=1;           // right shift the number (n=n/2)
    }
    return cnt;
}
string isnumberpowerof2(ll int n)
{
    int res=setbits(n);
    if(res==1)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}
int main()
{
    ll int n;
    cin>>n;
    cout<<setbits(n)<<endl;                        //total set bits in a number
    cout<<isnumberpowerof2(n)<<endl;              //check if a number is power of 2 or not
    return 0;
}

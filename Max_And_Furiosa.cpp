/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
#define M 1000000007
#define LL long long
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<min(min(a,b),(a+b)/3);
    return 0;
}

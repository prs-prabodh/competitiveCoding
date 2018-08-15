/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,mean=0;
	float stdDev=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
        cin>>arr[i];
        mean+=arr[i];
	}
	mean/=n;
	for(int i=0;i<n;i++)
        stdDev+=pow((float)arr[i]-mean,2);
    stdDev/=n;
    stdDev=sqrt(stdDev);
    printf("%0.1f\n",stdDev);
	return 0;
}

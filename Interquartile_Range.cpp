/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
float *num;
int *freq;
vector<float> arr;
float median(int l, int r)
{
    int n=r-l+1;
    if(n%2){
        return (float)arr[l+(n/2)];
    }
    else{
        return ((float)arr[l+(n/2)]+(float)arr[l+(n/2-1)])/2.0;
    }
}
int main()
{
	int n;
	float q1,q2,q3;
	cin>>n;
	num=new float[n];
	freq=new int[n];
	for(int i=0;i<n;i++)
        cin>>num[i];
    for(int i=0;i<n;i++)
        cin>>freq[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<freq[i];j++){
            arr.push_back(num[i]);
        }
    }
    sort(arr.begin(),arr.end());
    n=arr.size();
    int l,r;
    if(n%2){
        l=n/2-1;
        r=l+2;
    }
    else{
        l=n/2-1;
        r=l+1;
    }
    q1=median(0,l);
    q3=median(r,n-1);
    printf("%0.1f\n",q3-q1);
	return 0;
}

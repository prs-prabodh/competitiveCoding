/**
*	@author Prabodh Ranjan Swain
*	Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<vector<int>> a(n, vector<int> (n));
	char wind;
	cin>>wind;
	int x,y;
	cin>>x>>y;
	a[x][y]=1;
	int counter=2;
	for(int xi=0;xi<(n*n)-1;xi++){
        char dirn;
        switch(wind){
            case 'n':if(x>0&&a[x-1][y]==0){
                dirn='n';
            }
            else if(y>0&&a[x][y-1]==0){
                dirn='w';
            }
            else if(y<n-1&&a[x][y+1]==0){
                dirn='e';
            }
            else if(x<n-1&&a[x+1][y]==0)
                dirn='s';
            break;
            case 'w':if(y>0&&a[x][y-1]==0){
                dirn='w';
            }
            else if(x>0&&a[x-1][y]==0){
                dirn='n';
            }
            else if(x<n-1&&a[x+1][y]==0){
                dirn='s';
            }
            else if(y<n-1&&a[x][y+1]==0){
                dirn='e';
            }
            break;
            case 'e':if(y<n-1&&a[x][y+1]==0){
                dirn='e';
            }
            else if(x>0&&a[x-1][y]==0){
                dirn='n';
            }
            else if(x<n-1&&a[x+1][y]==0){
                dirn='s';
            }
            else if(y>0&&a[x][y-1]==0){
                dirn='w';
            }
            break;
            case 's':if(x<n-1&&a[x+1][y]==0){
                dirn='s';
            }
            else if(y<n-1&&a[x][y+1]==0){
                dirn='e';
            }
            else if(y>0&&a[x][y-1]==0){
                dirn='w';
            }
            else if(x>0&&a[x-1][y]==0){
                dirn='n';
            }
            break;
        }
        //cout<<wind<<" "<<dirn<<endl;
        if(dirn=='n'){
            a[x-1][y]=counter;
            counter++;
            x--;
        }
        else if(dirn=='e'){
            a[x][y+1]=counter;
            counter++;
            y++;
        }
        else if(dirn=='w'){
            a[x][y-1]=counter;
            counter++;
            y--;
        }
        else{
            a[x+1][y]=counter;
            counter++;
            x++;
        }
	}
	for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
	}
	//cout<<"complete";
	return 0;
}

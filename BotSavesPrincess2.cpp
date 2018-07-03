/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

#include<bits/stdc++.h>
using namespace std;
void nextMove(int n, int r, int c, vector <string> grid){
    int px,py;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(grid[i][j]=='p'){
                px=i;
                py=j;
            }
    vector<string> steps;
    if(r>px)
        cout<<"UP"<<endl;
    else if(r<px)
        cout<<"DOWN"<<endl;
    else if(c>py)
        cout<<"LEFT"<<endl;
    else if(c<py)
        cout<<"RIGHT"<<endl;
    else return;
}
int main(void) {

    int n, r, c;
    vector <string> grid;

    cin >> n;
    cin >> r;
    cin >> c;

    for(int i=0; i<n; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    nextMove(n, r, c, grid);
    return 0;
}

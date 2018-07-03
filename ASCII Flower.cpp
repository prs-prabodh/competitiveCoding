#include<iostream>

using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"..O..";
        }
        cout<<endl;
        for(int j=0;j<c;j++)
        {
            cout<<"O.o.O";
        }
        cout<<endl;
        for(int j=0;j<c;j++)
        {
            cout<<"..O..";
        }
        cout<<endl;
    }
}

#include<iostream>
using namespace std;
int main()
/*
   00000
   0000
   000
   00
   0
   this is pattern 
*/
{
    int n;
    cout<<"input here the rows";
    cin>>n;
    for( int i=n; i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

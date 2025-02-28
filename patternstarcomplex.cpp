//print this pattern from geeks of geeks
/*
    0
    00
    000
    0000
    00000
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"insert the number of rows  ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1; j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;

}
//print the star pattern (replace zeero with star)
/*  0
    00
    000
    0000
    00000
*/
#include<iostream>
using namespace std;
int main()
{ 
    int n;
    cout<<"input the number of rows to print";
    cin>>n;
    for(int i=1; i<=n ; i++)
    {
        for(int j=1; j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
  return 0;
}
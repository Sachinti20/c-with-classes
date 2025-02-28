//print the star pattern (replace zeero with star)
/*  00000
    0000
    000
    00
    0
*/
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"input the number of rows";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
       for( int j=n; j>=i; j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
//note: for(int j=n; j<=n;j--) leads to infinite loopand doesnt make any sense because j starts at n and is decrementing.
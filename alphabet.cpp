//how to identify that the given character is an uppercase alphabet or a smallcase alphabet
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"input the character in any case\n ";
    cin>>ch;
    if(ch>=65 && ch<=90){
        cout<<"uppercase_alphabet";
    }
    else{
        cout<<"lowercase_alphabet";
    }
   return 0;
}
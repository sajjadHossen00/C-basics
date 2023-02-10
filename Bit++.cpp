#include<iostream>
using namespace std;

int main(){

int b,x=0;
string s;
cin>>b;
for(int i=0;i<b;i++)
{
    cin>>s;
    if(s[1]=='+')
    {
        x++;
    }
    else
    {
        x--;
    }
}

cout<<x;




}

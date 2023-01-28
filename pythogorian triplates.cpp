#include<iostream>
using namespace std;
int main(){
    int n,s,v,p,a,b,c;
    cout<<"enter the elements n :";
cin>>n;
cout<<"enter the elements s :";
cin>>s;
cout<<"enter the elements v :";
cin>>v;
if(n>s>v){
    a=n;
    b=s;
    c=v;
}
if(s>n>v){
    a=s;
    b=n;
    c=v;
}
if(v>s>n){
    a=s;
    b=n;
    c=v;
}

p=a^2=b^2+c^2;
cout<<p;





}

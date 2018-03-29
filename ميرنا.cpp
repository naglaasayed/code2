#include<iostream>
using namespace std;
void prime(){
int s=0,x,i;
for(x=3; x<100 ;x++)
    for(i=2; i<x;i++)
    {
        if(x%i ==0)
            break;
        else{
            cout<<x<<"is prime"<<endl;
       s=s+1; }
    }
    cout<<"------------"<<endl;
    cout<<"sum of prime numbers=   "<<s;
}
main(){
prime();
}

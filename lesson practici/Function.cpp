#include<iostream>
using namespace std;
int checkoddoreven (int number){
    number%2==0 ? cout<<"even":cout<<"odd";
}
int incrimentone(int number){
    if (number%2)
    {
        number++;
        cout<<number;
    }
    else{
        number--;
        cout<<number;
    }
}
string hello(){
    cout<<"hello my name is zikriolloh";
}
int main ()
{
    int n;
    cin>>n;
    cout<<endl;
    if(n%2==0){
        hello();
    }
    else if(n%2!=0){
        checkoddoreven(n);
    }
}

#include<iostream>

#include<cmath>

using namespace std;

int MiniDigit (int a){

    int b,c;

    b = a%10;
    c = a/10;

    if (b>c) return b;
    else return c;
}
int MaxDigit (int a){

    int b,c;

    b = a%10;
    c = a/10;

    if (b<c) return b;
    else return c;
}
int main ()
{
    double c;
    cin>>c;
    cout<<MiniDigit(c)<<endl;
    cout<<MaxDigit(c)<<endl;

    main ();
}

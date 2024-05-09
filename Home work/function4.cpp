#include<iostream>

#include<cmath>

using namespace std;

int reversee (int a){

    int c,d,e,f,g;

    c=(a%10)*1000;
    d=(a/10%10)*100;
    e=(a/100%10)*10;
    f=(a/1000);
    g=c+d+e+f;
    return g;
}
int main ()
{
    int b;
    cin>>b;
    cout<<reversee(b)<<endl;
    main();

}

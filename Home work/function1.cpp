#include<iostream>
#include<cmath>
using namespace std;

int Age (int a)
{
    return 2024-a;
}
int main ()
{
    int b,c;
    cin>>b;
    c=Age(b);
    if(c>=18 and c<=100)
    {
        cout<<" Welcome you are "<<c<<" years old, and you can work. "<<endl;
    }
    else
    {
        cout<<" Hello, you are "<<c<<" years old, and you can't work. "<<endl;
    }
    main();

}


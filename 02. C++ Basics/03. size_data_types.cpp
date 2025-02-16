#include <iostream>
using namespace std;
int main()
{
    char x;
    int a;
    float b;
    long c;
    double d;
    long double e;
    cout<<"Size of char is : "<<sizeof(x)<<" bytes."<<endl;//1
    cout<<"Size of int is : "<<sizeof(a)<<" bytes."<<endl;//4
    cout<<"Size of float is : "<<sizeof(b)<<" bytes."<<endl;//4
    cout<<"Size of long is : "<<sizeof(c)<<" bytes."<<endl;//4
    cout<<"Size of double is : "<<sizeof(d)<<" bytes."<<endl;//8
    cout<<"Size of long double is : "<<sizeof(e)<<" bytes."<<endl;//8 
    return 0;
}
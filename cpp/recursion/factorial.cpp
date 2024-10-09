#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n == 1)
        return n;
    else
        return n * factorial(n-1);
}
int main()
{   
    int n, fact;
    cout<<"Enter n"<<endl;
    cin>>n;
    fact = factorial(n);
    cout<<fact<<endl;

    return 0;
}
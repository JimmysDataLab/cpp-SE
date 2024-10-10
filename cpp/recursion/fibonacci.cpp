#include <iostream>
using namespace std;

long fib(long n,vector<long> &memo)
{   
    long t1,t2;

    if(n==1) return 0;
    if(n==2) return 1;

    if(memo[n-3]!= -1) return memo[n-3];
    else 
    {
        memo[n-3] = fib(n-1,memo)+fib(n-2,memo);
        return memo[n-3];
    }

}
int main()
{   
    long n, element;

    cout<<"Enter n"<<endl;
    cin>>n;
    cout<<endl;
    vector<long> memo(n-2,-1);

    

    for(long i = 1;i <= n;++i)
    {   
        element = fib(i,memo);
        cout<<element<<" ";
    }

    return 0;
}
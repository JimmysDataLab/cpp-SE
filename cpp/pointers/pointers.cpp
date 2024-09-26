#include <iostream>
using namespace std;


int main()
{
    // size of pointer is same regardless of type
    int* p;
    char* q;

    char names[255] = "Akhil";
    cout<<sizeof(names)<<endl;
    for (int i = 0; i<sizeof(names);i++)
    {
        cout<<names[i];
    }

}
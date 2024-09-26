# include <iostream>
using namespace std;

int main()
{
    // trying to modify normal string
    char fname[6] = "Akhil";
    fname[0] = 'B';
    for (int i = 0;i < 6; i++)
        cout<<fname[i];
    // Above char array can be modified

    // Here mname is immutable, the string literal is of type const char[].
    const char* mname = "George";
    //fname[0] = 'B';


    const char* brothers[] = {"Akhil George Jimmy","Akshay Joseph Jimmy"};




    

}
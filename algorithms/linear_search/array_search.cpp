#include <iostream>
using namespace std;


int main(){
    
    int arr[] = {23,5,42,75,8};
    int min = arr[0];
    int max = arr[0];
    bool status = false;
    int number;
    int index = 0;

    cout<<"Enter number to search\t"<<endl;
    cin>>number;

    // Enhanced for-loop
    for (int i : arr){
        if (i < min)
            min = i;

        if (i > max)
            max = i;

        if (i == number){
            cout<<"Number found at index:\t"<<index<<endl;
            status = true;
            //break;
        }

        index ++;
    }
    if (!status)
        cout<<"Number not found\n";

    cout<<"max and min are:\t"<<max<<'\t'<<min;

}
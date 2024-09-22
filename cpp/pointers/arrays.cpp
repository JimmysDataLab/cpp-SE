#include <iostream>
using namespace std;

void Double(int* arr, int size){

    for (int i = 0;i < size; ++i ){
        // Same as arr[i] = arr[i] * 2;
        *(arr + i) = *(arr + i) * 2;
    }
}

int main(){

    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(*arr);
    // Name of array gives the address of the first element
    // *Name can be used to dereference
    cout<<"Address of the base element: "<<arr<<endl;
    cout<<"value of the base element: "<<*arr<<endl;
    int* p_arr = arr;
    //int* p_arr = &arr[0]; Same as above
    cout<<"Address of the base element: "<<p_arr<<endl;
    cout<<"Value at base location : "<<*p_arr<<endl;

    // Adding 1 to addresse increases size by type of pointer, here its 4 (int)
    cout<<"Value at next location : "<<*(p_arr + 1)<<endl;
    cout<<"Address of the next element:  : "<<(p_arr + 1)<<endl;
    cout<<"Value at next location : "<<*(p_arr + 2)<<endl;
    cout<<"Address of the next element:  : "<<(p_arr + 2)<<endl;

    // What happens if I reference addresse longer that array

    cout<<"Value at next location : "<<*(p_arr + 10)<<endl; // Unassigned or garbage value
    cout<<"Address of the next element:  : "<<(p_arr + 10)<<endl;

    // Arrays can only be passed by reference
    // name of array is its base address
    Double(arr,size);
    cout<<"Doubled Array"<<endl;
    for (int i : arr)
        cout<<i<<" ";
    

}
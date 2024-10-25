#include<iostream>
using namespace std;

void print_array(int size, int arr[]){

	for(int i = 0;i <= size;++i){
		cout << arr[i] << "-";
	}
}
int main(){
	
	int size = 5;
	int arr[size];
	for(int i = 0;i < size;++i){
		cin >> arr[i];
	}
	print_array(size,arr);
}
	



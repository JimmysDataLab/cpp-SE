#include<iostream>
#include<fstream>
using namespace std;

void print_array(int size, int arr[]){

	for(int i = 0;i < size;++i){
		cout << arr[i] << "-";
	}
	cout<<endl;
}



void dumb_sort(int size, int arr[]){
	// 2 3 5 3 6 3
	// My dumb version takes O(n^2)
	int temp;
	for(int i = 0;i < size;++i){
		for(int i = 0;i < size;++i){
			if(i != size-1){
				if(arr[i] > arr[i+1]){
					// Swap
					temp = arr[i];
					arr[i] = arr[i+1];
					arr[i+1] = temp;
				}
			}
		}
	}
}

int main(){
	
	ifstream input_file("input.txt");
	ofstream output_file("output_cpp.txt");

	int a;
	while(input_file >> a){
		int arr[a];
		for(int i = 0;i < a;++i){
			input_file >> arr[i];
		}
		// print_array(a,arr);
		dumb_sort(a,arr);
		output_file <<a<<" ";
		for(int i=0;i<a;++i){
			if(i==a-1)
			output_file <<arr[i];
			else
			output_file <<arr[i]<<" ";

		}
		output_file<<endl;
		

	}

	input_file.close();
	output_file.close();

	return 0;
}
	



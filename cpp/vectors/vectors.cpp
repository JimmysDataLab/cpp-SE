#include <iostream>
#include <vector>
using namespace std;

void printVector(const vector<int>& vec) {
    cout<<"Vector :";
    for (int i = 0;i < vec.size();++i){
        if (i == vec.size()-1)
            cout<<vec[i];
        else
            cout<<vec[i]<<'-';
    }
    cout<<" Size:";
    cout<<vec.size()<<endl;
}

int main(){

    // Vector is a dynamic array
    vector<int> vector1;
    // Size specified 
    vector<int> vector2(10);


    // Append elements to the back of a vector
    for (int i = 0;i < 15;++i){
        vector2.push_back(i);
    }

    printVector(vector2);


    // Insert elements at specific locations

    // Insert from end
    vector2.insert(vector2.end(), 6);
    // Insert from start
    vector2.insert(vector2.begin(), 6);
    // Insert at 5th index from start
    vector2.insert(vector2.begin()+5, 6);

    printVector(vector2);

    // Remove elements from back
    vector2.pop_back();

    printVector(vector2);

    // Erase elements at specific locations

    // Erase from end
    vector2.erase(vector2.begin() + vector2.size() - 1);
    // Erase from start
    vector2.erase(vector2.begin());
    // Erase at 5th index from start
    vector2.erase(vector2.begin()+5);

    printVector(vector2);




    return 0;
}
#include <iostream>
#include<string>
#include <vector>
using namespace std;
int main(){

    vector<int> vec(3,9); // it means size is 3 and we want 9 in each box
    cout<<vec.size()<<endl; //size means how much values have in vector
     cout<<vec.capacity()<<endl; // it means what is the capacity of vector to store 
}
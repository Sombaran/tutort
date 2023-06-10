/*
Given an array (or string), the task is to reverse the array/string.
Examples : 
 

Input  : arr[] = {1, 2, 3}
Output : arr[] = {3, 2, 1}

Input :  arr[] = {4, 5, 1, 2}
Output : arr[] = {2, 1, 5, 4}
*/



#include <iostream>
#include <vector>

void printOutput (std::vector <int> &);
void  performOperation (std::vector<int> &, int&);

void printOutput (std::vector <int> &received) {
    for (const auto& i: received) {
        std::cout <<  i  << " ";
    }
    std::cout << std::endl;
}

void performOperation (std::vector<int> & received, int& vectorSize){
    int i{0}, j{vectorSize-1}, temp{0};
    printOutput(received);
    std::cout << j << " " << vectorSize << std::endl;
    while(i<j) {
        temp = received[i];
        received[i] = received[j];
        received[j] = temp;
        ++i;
        --j;
    }
    printOutput(received);
}

int main() {
    std::vector<int> vTor1 {1,2,3};
    std::vector<int> vTor2 {4,5,1,2};

    int vectorSize1 = vTor1.size();
    int vectorSize2 = vTor2.size();

    performOperation (vTor1,vectorSize1);
    performOperation (vTor2,vectorSize2);
    return (0);
}
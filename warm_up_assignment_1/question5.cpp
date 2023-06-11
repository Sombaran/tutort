/*
Q5. Given an array Arr of N positive integers. Your task is to find the elements whose value is equal
to that of its index value ( Consider 1-based indexing ).
Example 1:
Input:
N = 5
Arr[] = {15, 2, 45, 12, 7}
Output: 2
Explanation: Only Arr[2] = 2 exists here

Example 2:
Input:
N = 1
Arr[] = {1}
Output: 1
Explanation: Here Arr[1] = 1 exists
*/


#include <iostream>
#include <vector>

void printOutput (std::vector <int> &);
int performOperation(std::vector <int>&, int&);

void printOutput (std::vector <int> &received) {
    for (const auto& i: received) {
        std::cout <<  i  << " ";
    }
    std::cout << std::endl;
}
int performOperation(std::vector <int>& received, int& sizeVector) {
    int i{}, output {};    
    for (i=1;i<=sizeVector;++i) {
        std::cout << received [i-1] << " " << i << " \n ";
        if (received [i-1] == i ) {
            output = i;
            break;
        }
    }
    std::cout <<std::endl;
    return (output);
}

int main() {
    std::vector <int> vec1 {15, 2, 45, 12, 7};
    std::vector <int> vec2 {1};

    int size1= vec1.size();
    std::cout << "Output 1 : " << performOperation (vec1, size1) << std::endl;

    int size2 = vec2.size();
    std::cout << "Output 2 : " << performOperation (vec2, size2) << std::endl;
    
    /*
    for (int i=1;i<=vec2.size();++i) {
        std::cout << vec2 [i-1] << " " << i << "\t\t\t";
    }
    std::cout <<std::endl;*/
    return (0);
}
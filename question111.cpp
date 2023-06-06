/*
Bonus Question
Given an array of even size N, task is to find minimum value that can be added to an element so that
array become balanced. An array is balanced if the sum of the left half of the array elements is equal
to the sum of right half.
Example 1:
Input:
N = 4
arr[] = {1, 5, 3, 2}
Output: 1
Explanation:
Sum of first 2 elements is 1 + 5 = 6,
Sum of last 2 elements is 3 + 2 = 5,
To make the array balanced you can add 1.
Example 2:
Input:
N = 6
arr[] = { 1, 2, 1, 2, 1, 3 }
Output: 2
Explanation:
Sum of first 3 elements is 1 + 2 + 1 = 4,
Sum of last three elements is 2 + 1 + 3 = 6,
To make the array balanced you can add 2.
*/

#include <iostream>
#include <vector>
#include <algorithm>


void printOutput (std::vector <int> &);
int performOperation(std::vector <int>&,int&, int&);

void printOutput (std::vector <int> &received) {
    for (const auto& i: received) {
        std::cout <<  i  << " ";
    }
    std::cout << std::endl;
}

int performOperation(std::vector <int>& received, int& vectorSize, int& midPoint) {
    int temp1{0},temp2{0};
    for (int i=0;i<midPoint;++i) {
        temp1 += received[i];
    }
    for(int i=midPoint;i<vectorSize;++i) {
        temp2 += received[i];
    }
    //std::cout << temp1 << " " << temp2 << std::endl;
    
    int finalResult{0};
    if (temp1 > temp2) {
        finalResult = (temp1 - temp2);
    }
    else {
        finalResult = (temp2 - temp1);
    }
    return finalResult;

}


int main() {
    std::vector <int> vec1{};
	std::vector <int> vec2{1,2,1,2,1,3};

    //pushIntoVector(n);
    vec1.push_back(1);
    vec1.push_back(5);
    vec1.push_back(3);
    vec1.push_back(2);


    printOutput(vec1);
    int sizeofVector1=vec1.size();
    int midPoint1=((0+sizeofVector1)/2);
    std::cout << sizeofVector1 << " " << midPoint1<< std::endl;
    std::cout << "======================================================================\n";
    std::cout << "output 1: " << performOperation (vec1,sizeofVector1, midPoint1) << std::endl;

    printOutput(vec2);
    int sizeofVector2=vec2.size();
    int midPoint2=((0+sizeofVector2)/2);
    std::cout << sizeofVector2 << std::endl;
    std::cout << "======================================================================\n";
    std::cout << "output 2: " << performOperation (vec2,sizeofVector2, midPoint2) << std::endl;
    return (0);
}

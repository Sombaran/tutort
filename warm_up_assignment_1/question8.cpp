/*
Q8. Given an array of N distinct elements, the task is to find all elements in array except two greatest
elements in sorted order.
Example 1:
Input :
a[] = {2, 8, 7, 1, 5}
Output :
1 2 5
Explanation :
The output three elements have two or
more greater elements.
Example 2:
Input :
a[] = {7, -2, 3, 4, 9, -1}
Output :
-2 -1 3 4
*/


#include <iostream>
#include <vector>
#include <algorithm>


void printOutput (std::vector <int> &);
void   performOperation (std::vector<int>& , int&);

void printOutput (std::vector <int> &received) {
    for (const auto& i: received) {
        std::cout <<  i  << " ";
    }
    std::cout << std::endl;
}

void   performOperation (std::vector<int>&  received, int& vectorSize) {
    std::vector <int> resultVector(vectorSize-2); //except two greatest
    std::cout << "Size of new vector " << resultVector.size() << std::endl;
    std::sort (received.begin(), received.end());


    //while {
    //    received.pop_back();
    //}
    std::copy (received.begin(),received.end(),resultVector.begin());
    printOutput(resultVector);
    std::cout << std::endl;
    return;
}



int main () {
    std::vector <int> vec1{};
	  std::vector <int> vec2{7,-2,3,4,9,-1};

    //pushIntoVector(n);
    vec1.push_back(2);
    vec1.push_back(8);
    vec1.push_back(7);
    vec1.push_back(1);
    vec1.push_back(5);

    printOutput(vec1);
    int sizeofVector1=vec1.size();
    std::cout << sizeofVector1 << std::endl;
    std::cout << "======================================================================\n";
    std::cout << "output 1: \n";
    performOperation (vec1,sizeofVector1);

    printOutput(vec2);
    int sizeofVector2=vec2.size();
    std::cout << sizeofVector2 << std::endl;
    std::cout << "======================================================================\n";
    std::cout << "output 2: \n";
    performOperation (vec2,sizeofVector2);
    return (0);
}

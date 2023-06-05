/*
Q4. You are given an array A of size N. You need to print elements of A in alternate order (starting
from index 0).
Example 1:
Input:
N = 4
A[] = {1, 2, 3, 4}
Output:
1 3
Example 2:
Input:
N = 5
A[] = {1, 2, 3, 4, 5}
Output:
1 3 5
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

void  performOperation (std::vector<int> & received, int& vectorSize){
      int i {1};
      std::vector <int> outputVector{};
    	std::cout << "Size vector " << vectorSize << std::endl;
        while (i<=vectorSize) {
            if (i % 2 != 0) {
                //std::cout << "Odd detected " << i << std::endl;
                //received[i];
                outputVector.push_back(i);
            }
            ++i;
        }
        printOutput(outputVector);
        return;
}

int main () {
	    std::vector <int> vec1{};
	    std::vector <int> vec2{1,2,3,4,5};

    	//pushIntoVector(n);
    	vec1.push_back(1);
    	vec1.push_back(2);
    	vec1.push_back(3);
    	vec1.push_back(4);

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
    	std::cout << "output 1: \n"; 
      performOperation (vec1,sizeofVector2);
    	return (0);
}

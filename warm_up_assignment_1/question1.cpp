/*
Q1. Given an array of N integers. Your task is to print the sum of all of the integers.
Example 1:
Input:
4
1 2 3 4
Output:
10
Example 2:
Input:
6
5 8 3 10 22 45
Output:
93

*/

#include <iostream>
#include <vector>


void printOutput (std::vector <int> &);
int  performOperation (std::vector<int> &, int&);

void printOutput (std::vector <int> &received) {
    for (const auto& i: received) {
        std::cout <<  i  << " ";
    }
    std::cout << std::endl;
}

int performOperation (std::vector<int>& received, int& vectorSize ) {
	printOutput(received);
	int result {0};
	int i {0};
	while(i<vectorSize) {
		std::cout << received[i] << "\t";
		result += received[i];
		++i;
	}
	std::cout << std::endl;
	return result;
}


int main() {

    std::vector <int> vec1{};
    std::vector <int> vec2{5,8,3,10,22,45};
    
    //int n{0}; // size of vector
    //std::cout << "Enter size of vector \n";
    //std::cin >> n;
    
    //pushIntoVector(n);
    vec1.push_back(1);
    vec1.push_back(2);
    vec1.push_back(3);
    vec1.push_back(4);
    
    printOutput(vec1);
    int sizeofVector1=vec1.size();
    std::cout << sizeofVector1 << std::endl;
    std::cout << "======================================================================\n";
    std::cout << performOperation (vec1,sizeofVector1) << std::endl;

    printOutput(vec2);
    int sizeofVector2=vec2.size();
    std::cout << sizeofVector2 << std::endl;
    std::cout << "======================================================================\n";
    std::cout << performOperation (vec2,sizeofVector2) << std::endl;
    

    return (0);
}

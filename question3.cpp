/*
Q3. Given an sorted array A of size N. Find number of elements which are less than or equal to given
element X.
Example 1:
Input:
N = 6
A[] = {1, 2, 4, 5, 8, 10}
X = 9
Output:
5
Example 2:
Input:
N = 7
A[] = {1, 2, 2, 2, 5, 7, 9}
X = 2
Output:
4
*/


#include <iostream>
#include <vector>

void printOutput (std::vector <int> &);
int  performOperation (std::vector<int> &, int&, int&);

void printOutput (std::vector <int> &received) {
    for (const auto& i: received) {
        std::cout <<  i  << " ";
    }
    std::cout << std::endl;
}

int performOperation (std::vector<int> &received, int& vectorSize, int& key) {
    int i {0},count{-1}, result {-1};
    std::cout << "Size vector " << vectorSize << std::endl;
	std::cout << "Key " << key << std::endl;
    while(i<vectorSize) {
        if(received[i] <= key) {
            result = ++count;
        }
        ++i;
    }
    return result;
}

int main() {
	
	std::vector <int> vec1{};
	std::vector <int> vec2{1,2,2,2,5,7,9};

    //pushIntoVector(n);
    vec1.push_back(1);
    vec1.push_back(2);
    vec1.push_back(4);
    vec1.push_back(5);
	vec1.push_back(8);
    vec1.push_back(10);


    printOutput(vec1);
    int sizeofVector1=vec1.size();
	int key1{9};
    std::cout << sizeofVector1 << std::endl;
    std::cout << "======================================================================\n";
    std::cout << "output 1: " << performOperation (vec1,sizeofVector1, key1) << std::endl;

    printOutput(vec2);
    int sizeofVector2=vec2.size();
	int key2{2};
    std::cout << sizeofVector2 << std::endl;
    std::cout << "======================================================================\n";
    std::cout << "output 1: " << performOperation (vec1,sizeofVector2, key2) << std::endl;


    return (0);
}
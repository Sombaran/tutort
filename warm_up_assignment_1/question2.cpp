/*
Q2. Given an array A[] of N integers and an index Key. Your task is to print the element present at
index key in the array.
Example 1:
Input:
5 2
10 20 30 40 50
Output:
30
Example 2:
Input:
7 4
10 20 30 40 50 60 70
Output:
50
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

int performOperation (std::vector<int>& received, int& vectorSize, int& key) {
	printOutput(received);
	int result {0};
	int i {0};
	std::cout << "Size vector " << vectorSize << std::endl;
	std::cout << "Key " << key << std::endl;
	//std::cout << received[key] << std::endl;
	if (key > vectorSize || key < 0 ) {
		//std::string returnType {"Error key cannot be greater than array size "};
		exit (-1);
	}

	while(i<vectorSize && i<= key) {
		if (received[key] == received[i]) {
			std::cout << "Key found " << received[key] << " " << received[i] << "\t";
			result = received[key];
		}
		++i;
	}
	std::cout << std::endl;
	return result;
}



int main() {
	std::vector <int> vec1{};
	std::vector <int> vec2{10,20,30,40,50,60,70};

    	//pushIntoVector(n);
    	vec1.push_back(10);
    	vec1.push_back(20);
    	vec1.push_back(30);
    	vec1.push_back(40);
	vec1.push_back(50);

    	printOutput(vec1);
    	int sizeofVector1=vec1.size();
	int key1{2};
    	std::cout << sizeofVector1 << std::endl;
	std::cout << "======================================================================\n";
    	std::cout << "output 1: " << performOperation (vec1,sizeofVector1, key1) << std::endl;

    	printOutput(vec2);
    	int sizeofVector2=vec2.size();
	int key2 {4};
    	std::cout << sizeofVector2 << std::endl;
    	std::cout << "======================================================================\n";
    	std::cout << "output 2: " << performOperation (vec2,sizeofVector2,key2) << std::endl;

	//check key at 0
	int key3{0};
    	std::cout << "======================================================================\n";
	std::cout << "output 3: " << performOperation (vec2,sizeofVector2,key3) << std::endl;

    	//check key at -ve index
	int key4{-1};
    	std::cout << "======================================================================\n";
	std::cout << "output 4: " << performOperation (vec2,sizeofVector2,key4) << std::endl;

	//check key out of bound
	int key5{100};
    	std::cout << "======================================================================\n";
	std::cout << "output 5: " << performOperation (vec2,sizeofVector2,key4) << std::endl;

	//check key and vector size same
	int key6{7};
    	std::cout << "======================================================================\n";
	std::cout << "output 6: " << performOperation (vec2,sizeofVector2,key4) << std::endl;
    	return (0);
}

/*
Q7. Given an array of length N, at each step it is reduced by 1 element. In the first step the maximum
element would be removed, while in the second step minimum element of the remaining array would
be removed, in the third step again the maximum and so on. Continue this till the array contains only 1
element. And find the final element remaining in the array.
Example 1:
Input:
N = 7
A[] = {7, 8, 3, 4, 2, 9, 5}
Ouput:
5
Explanation:
In first step '9' would be removed, in 2nd step
'2' will be removed, in third step '8' will be
removed and so on. So the last remaining
element would be '5'.
Example 2:
Input:
N = 8
A[] = {8, 1, 2, 9, 4, 3, 7, 5}
Ouput:
4
*/

#include <iostream>
#include <vector>
#include <algorithm>


void printOutput (std::vector <int> &);
int   performOperation (std::vector<int> &, int&);

void printOutput (std::vector <int> &received) {
    for (const auto& i: received) {
        std::cout <<  i  << " ";
    }
    std::cout << std::endl;
}

int performOperation (std::vector<int> &received, int& vectorSize) {
    std::sort(received.begin(), received.end());
    //int startPos = received.begin();
    //int endPos = received.end();
    printOutput(received);
    //int i{0}, j{vectorSize-1};
    //for (int i=vectorSize-1;i>0;--i) {
        //std::cout << received[i] << " \t" << std::endl;
        //if (received[])
        //std::cout << std::endl;
        //received[i+1] = received[i];
        
        //if (received[i] > received[i-1]) {
        //    received[i+1] = received [i];
        //}
    //}
    //for(const auto& i : received) {
    //    received.push
    //}
    int i{0};
    while(i <= vectorSize-2 ) {
        std::cout << "Enterd into if ===========================\n";
        received.pop_back();
        std::reverse(received.begin(), received.end());
        std::cout << "Pop & Rev done =========================== " << vectorSize << std::endl;
        printOutput(received);
        ++i;
    }
    
    printOutput(received);
}


int main () {
      std::vector <int> vec1{};
	    std::vector <int> vec2{8,1,2,9,4,3,7,5};

    	//pushIntoVector(n);
    	vec1.push_back(7);
    	vec1.push_back(8);
    	vec1.push_back(3);
    	vec1.push_back(4);
      vec1.push_back(2);
      vec1.push_back(9);
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

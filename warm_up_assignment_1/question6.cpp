/*
Q6. Given an array of size N and you have to tell whether the array is perfect or not. An array is said
to be perfect if it's reverse array matches the original array. If the array is perfect then print
"PERFECT" else print "NOT PERFECT".
Example 1:
Input : Arr[] = {1, 2, 3, 2, 1}
Output : PERFECT
Explanation:
Here we can see we have [1, 2, 3, 2, 1]
if we reverse it we can find [1, 2, 3, 2, 1]
which is the same as before.
So, the answer is PERFECT.
Example 2:
Input : Arr[] = {1, 2, 3, 4, 5}
Output : NOT PERFECT
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


void  performOperation (std::vector<int> & received, int& vectorSize) {
    int i{0}, j{vectorSize-1};
    std::cout << "front " << received[i] << std::endl;
    std::cout << "back " << received[j] << std::endl;
    while (i<j) {
        //while (j>=i) {
            if (received[i++] == received [j--]) {
                std::cout << "Perfect \n";
            }
            else {
                std::cout << "Note perfect \n";
            }
            //--j;
        //}
        //++i;
    }
}
int main () {
	    std::vector <int> vec1{};
	    std::vector <int> vec2{1,2,3,4,5};

    	//pushIntoVector(n);
    	vec1.push_back(1);
    	vec1.push_back(2);
    	vec1.push_back(3);
    	vec1.push_back(2);
        vec1.push_back(1);

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

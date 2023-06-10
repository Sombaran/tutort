/*
Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

 

Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
Example 2:

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

void printOutput (std::vector <int> &);
double  performOperation (std::vector<int> &, std::vector<int>&);


void printOutput (std::vector <int> & received) {
	for (const auto& i: received) {
		std::cout <<  i  << " ";
	}
	std::cout << std::endl;
}

double  performOperation (std::vector<int> & received1, std::vector<int>& received2) {
    std::vector <int> result{received1};
    result.insert(result.end(), received2.begin(), received2.end());
    std::sort (result.begin(),result.end());
    printOutput(result);
    int sizeVector = result.size();
    int midPoint = sizeVector/2;
    std::cout << midPoint << " \t " << result [midPoint] << " \t "  << result [midPoint-1] << " \t "<< sizeVector << std::endl;
    double output{4.777f};

    if (sizeVector %2 == 0) {
        double sum = (result[midPoint-1]+ result[midPoint]);
        std::cout << sum << std::endl;
        output = (sum/2.0);
        std::cout << "I am even \n";
    } 
    else if (sizeVector % 2 == 1) {
        output = result[midPoint];
        std::cout << "I am odd \n";
    }
    return (output);
}


int main() {
    std::vector<int > vec1 {1,2};
    std::vector<int > vec2{3,4};
    std::cout << "Output 1: " << performOperation (vec1, vec2) << std::endl;
    std::vector<int> vec3 {1,3};
    std::vector<int> vec4 {2};
    std::cout << "Output 2: " << performOperation (vec3, vec4) << std::endl;
    return (0);

}
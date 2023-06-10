/*
Given an array A of size N of integers. Your task is to find the minimum and maximum elements in the array.

Input:
N = 6
A[] = {3, 2, 1, 56, 10000, 167}
Output:
min = 1, max =  10000

Input:
N = 5
A[]  = {1, 345, 234, 21, 56789}
Output:
min = 1, max = 56789
*/


#include <iostream>
#include <vector>

void printOutput (std::vector <int> &);
std::vector<int> performOperation (std::vector<int> &, int&);

void printOutput (std::vector <int> &received) {
    for (const auto& i: received) {
        std::cout <<  i  << " ";
    }
    std::cout << std::endl;
}

std::vector <int> performOperation (std::vector <int> & received, int& vectorSize) {
    int minValue{received[0]}, maxValue{received[0]};
    printOutput(received);
    for (int i=0;i<vectorSize;++i) {
        for (int j =i+1;j<vectorSize-1;++j) {
            /*if (received[i] > received[j]) {
                temp = received[i];
                received [i] = received [j];
                received [j] = temp; 
                //minValue = received[i];
                //std::cout << "--if-- (i>j) \n";
                //std::cout << received[i] << "\t\t" << received[j] <<std::endl;
            }
            //printOutput(received);
            
            else if (received[j] < maxValue){
                maxValue = received[j];
                minValue = maxValue;
                std::cout << "--else if-- (j>i) \n";
                std::cout << received[j] << "\t\t" << received[i] <<std::endl;
            }*/
            if (received[j] < minValue) {
                minValue = received [j];
            } else if (received [j] > maxValue ) {
                maxValue =received[j];
            }
             std::cout << i << " interation done " <<  minValue << "\t\t"  << maxValue <<std::endl;
        } 
    }
    return {minValue,maxValue};
}

int main() {

    std::vector <int> vec1 {3, 2, 1, 56, 10000, 167};
    std::vector <int> vec2 {1, 345, 234, 21, 56789};

    int sizeVector1 = vec1.size();

    std::vector<int > result{};
    result = performOperation(vec1, sizeVector1); 
    printOutput(result);
    return (0);
}
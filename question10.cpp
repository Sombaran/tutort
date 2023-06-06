/*
Q10. Given a number N. Your task is to check whether it is fascinating or not.
Fascinating Number: When a number(should contain 3 digits or more) is multiplied by 2 and 3 ,and
when both these products are concatenated with the original number, then it results in all digits from 1
to 9 present exactly once.
Example 1:
Input:
N = 192
Output: Fascinating
Explanation: After multiplication with 2
and 3, and concatenating with original
number, number will become 192384576
which contains all digits from 1 to 9.
Example 2:
Input:
N = 853
Output: Not Fascinating
Explanation: It's not a fascinating
number.
*/


#include <iostream>
#include <vector>
#include <algorithm>

void printOutput (std::vector <int> &);
void performOperation(int&);
void performCheck(std::vector<int> &);


void performCheck(std::vector<int>& received) {
    printOutput(received);
    for (int i=0;i<received.size();++i) {
        /*if (1 < i < 9) {
            std::cout << "Fascinating \n";
        } else {
            std::cout << "Not fascinating \n";
        }*/
        if (received[i] == received [i+1]) {
            std::cout << "Not fascinating \n";
            break;
        } else {
            std::cout << "Fascinating \n";
        }
    }
}

void printOutput (std::vector <int> &received) {
    for (const auto& i: received) {
        std::cout <<  i  << " ";
    }
    std::cout << std::endl;
}

void performOperation(int& received) {
   std::vector <int> resultVector {};
    int numberMultiply2 = (2*received);
    int numberMultiply3 = (3*received);
    std::cout << received << " "<< numberMultiply2 << " " << numberMultiply3 << std::endl;
    while (received != 0){
         int result = received %10;
         std::cout << "Enter into while " << result << std::endl; 
         received /= 10;
         //resultVector.push_back(result);
        resultVector.insert(resultVector.begin(),result);
    }
    while (numberMultiply2 != 0){
        int result = numberMultiply2 %10;
        std::cout << "Enter into while " << result << std::endl; 
        numberMultiply2 /= 10;
        //resultVector.push_back(result);
        resultVector.insert(resultVector.begin()+3,result);
    }
    while (numberMultiply3 != 0){
        int result = numberMultiply3 %10;
        std::cout << "Enter into while " << result << std::endl; 
        numberMultiply3 /= 10;
        //resultVector.push_back(result);
        resultVector.insert(resultVector.begin()+6,result);
    }

    //resultVector.push_back(numberMultiply2);
    //resultVector.push_back(numberMultiply3);
    //performCheck(received);
    //performCheck(numberMultiply2);
    //performCheck(numberMultiply3);
    //std::reverse(resultVector.begin(),resultVector.end());
    printOutput(resultVector);
    performCheck(resultVector);
    //return (received);
}

int main() {
    int N{0};
    std::cout << "Enter n \n";
    std::cin >> N;
    performOperation (N);
    return(0);
}

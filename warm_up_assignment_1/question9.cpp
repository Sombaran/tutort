/*
Q9. Write a program to find the sum of the given series 1+2+3+ . . . . . .(N terms)
Example 1:
Input:
N = 1
Output: 1
Explanation: For n = 1, sum will be 1.
Example 2:
Input:
N = 5
Output: 15
Explanation: For n = 5, sum will be 1
+ 2 + 3 + 4 + 5 = 15.
*/


#include <iostream>
//AP series N(N+1)/2
int getSumSeries(int &);

int getSumSeries(int & received) {
    std::cout << received << std::endl;
    //int product = received
    return (received*(received+1)/2);

}

int main() {
    int N{NULL};
    std::cout << "Enter value of n \n";
    std::cin >> N;

    if (N <= 0) {
        exit(-1);
    }
    std::cout << getSumSeries (N) << std::endl;
    return (0);
}
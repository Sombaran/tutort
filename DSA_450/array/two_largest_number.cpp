/*
Given an array A of size N of integers. Your task is to find the two largest number in the array.

Input:
N = 6
A[] = {3, 2, 1, 56, 10000, 167}
Output:
167, 10000

Input:
N = 5
A[]  = {1, 345, 234, 21, 56789}
Output:
345, 56789
*/


#include <iostream>
#include <vector>
using namespace std;


void printOutput (std::vector <int> &);
void  performOperation (std::vector<int> &, int&);
vector <int> find2LargestNumber (std::vector <int> &, int& );


vector <int> find2LargestNumber (std::vector <int> & received, int& sizeVector) {
    cout<<endl;
    return {received[sizeVector-1], received[sizeVector-2]};
}
void printOutput (std::vector <int> & received) {
	for (const auto& i: received) {
		std::cout <<  i  << " ";
	}
	std::cout << std::endl;
}

void  performOperation (std::vector<int> & received, int& sizeVector) {
    int temp {0};
    vector<int> resultVector{};   
    for(int i=0;i<sizeVector;++i)
    {
        for(int j=i+1;j<sizeVector;++j)
        {
            if(received[i]>received[j])
            {
                temp=received[i];
                received[i]=received[j];
                received[j]=temp;
            }
        }
    }
    printOutput(received);
    resultVector = find2LargestNumber(received,sizeVector);
    printOutput(resultVector);
}
//program to sort an array in ascending order
int main()
{
    vector<int> a{3, 2, 1, 56, 10000, 167};

    int sizeVector = a.size();
    cout << sizeVector << endl;
    
    performOperation(a, sizeVector);
    //printOutput (a);
    return 0;
}
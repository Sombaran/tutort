/*
1. Reverse the Number like 153 => 351 . Numbers can be negative
*/

#include <iostream>
#include <vector>

int isNumberNegavtive (int& , bool&);
int isNumberNegavtive (int& number, bool& flag) {
    if (flag) {
        return (number*(-1));
        }
        else {
            return (number);
        }
}

int main(){
    std::vector<int> result{};
    int n{}, mod{};
    bool isNumberNegative {false};
    std::cout << "Enter number: \t";
    std::cin >> n;
    if (n < 0) {
        isNumberNegative = true;
        n *= -1;
        std::cout << n << "\n";
    }
    while(n!=0){
        mod=mod*10+n%10;
        //std::cout << mod << " \t\t ";
        n/=10;
    }
    std::cout << mod << std::endl;
    std::cout << isNumberNegavtive(mod, isNumberNegative) << std::endl;
    return (0);
}

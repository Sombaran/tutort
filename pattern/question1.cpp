/*
*
**
***
****
*****
*/


#include <iostream>

int main1() {
    int i{0};
    while(i<5){
        int j{0};
        while(j<i+1){
            std::cout << " * " ;
            ++j;
        }
        ++i;
        std::cout <<std::endl;
    }

    for (int i=0;i<5;++i) {
        for (int j=0;j<i+1;++j) {
            std::cout  <<  " * ";
        }
        std::cout << std::endl;
    }
    return (0);
}
/*
111
222
333
*/

int main2() {

    for (int i=1;i<4;++i) {
        for (int j=1;j<4;++j) {
            std::cout << i;
        }
        std::cout << std::endl;
    }
    return(0);
}

/*
123
123
123
*/


int main3() {

    for(int i=1;i<4;++i) {
        for (int j=1;j<4;++j) {
            std::cout << j;
        }
        std::cout << std::endl;
    }
    return (0);
}


/*
321
321
321
*/


int main() {

    for (int i=1;i<4;++i) {
        for(int j=3;j>=1;--j) {
            std::cout << j;
        }
        std::cout << std::endl;
    }
    return (0);
}


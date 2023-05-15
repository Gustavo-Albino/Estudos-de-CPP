#include <iostream>

int main() {
    int lines = 3;
    int colum = 5;
    int num = 1;
    int matrix[3][5];
    int k = 1;

    for (int j = 0; j <= colum; j++) {
        int x = 0;
        while(x <= j) {
           std::cout << x << " ";
            x++;
        }
        k += 2;
        std::cout << std::endl;
    }

    return 0;
}
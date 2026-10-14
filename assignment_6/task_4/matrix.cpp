#include "header.h"
Matrix::Matrix() {
    a[0][0] = 1;
    a[0][1] = 0;
    a[1][0] = 0;
    a[1][1] = 1;
}
void Matrix::Print() {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << a[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

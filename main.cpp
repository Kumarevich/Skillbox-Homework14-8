#include <iostream>

void block_filling(int size, bool block[10]) {
    for (int i = 0; i < size; ++i) {
        block[i] = 1;
    }
}

int main() {
    bool space[5][5][10];
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            for (int k = 0; k < 10; ++k) {
                space[i][j][k] = 0;
            }
        }
    }
    int size;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            std::cout << "Input the block size " << i << ", " << j << ": ";
            std::cin >> size;
            block_filling(size, space[i][j]);
        }
    }

    for (int k = 0; k < 10; ++k) {
        std::cout << "Level " << k + 1 << std::endl;
        for (int i = 0; i < 5; ++i) {
            for (int j = 0; j < 5; ++j) {
                std::cout << space[i][j][k] << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
    return 0;
}

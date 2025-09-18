#include <iostream>

int main() {
    int num_rows;
    std::cout << "Enter number of rows: ";
    std::cin >> num_rows;

    int line = 1;
    while (line <= num_rows) {
        int column = 1;
        while (column <= line) {
            std::cout << column << " ";
            column++;
        }
        std::cout << std::endl;
        line++;
    }
    return 0;
}

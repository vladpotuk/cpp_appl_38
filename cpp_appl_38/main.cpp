#include <iostream>
#include<Windows.h>
//Написати програму, яка замінює всі символи крапки "." у рядку, введеному користувачем, на символи знака оклику "!".

void replace(char* str) {
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == '.') {
            str[i] = '!'; 
        }
    }
}

int main() {
    system("chcp 1251");
    system("cls");
    const int MAX_LENGTH = 100;
    char inputString[MAX_LENGTH];

    std::cout << "Введіть рядок: ";
    std::cin.getline(inputString, MAX_LENGTH);

    replace(inputString);

    std::cout << "Результат: " << inputString << std::endl;

    return 0;
}

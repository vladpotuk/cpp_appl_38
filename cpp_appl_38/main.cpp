#include <iostream>
#include<Windows.h>
//�������� ��������, ��� ������ �� ������� ������ "." � �����, ��������� ������������, �� ������� ����� ������ "!".

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

    std::cout << "������ �����: ";
    std::cin.getline(inputString, MAX_LENGTH);

    replace(inputString);

    std::cout << "���������: " << inputString << std::endl;

    return 0;
}

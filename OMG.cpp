#include <stdio.h>
#include <string.h>
#include<iostream>
#pragma warning(disable : 4996)

void krew() { //strlen
    char input[256];
    std::cout << "Введите строку: ";
    std::cin >> input;
    std::cout << "Строка " << input << " содержит " << strlen(input) << " символов\n\n";
}

void rw() {     //strcmp
    // Объявляем две строки
    char str1[256] = "Hello";
    char str2[256] = "World";
    // Сравниваем строки
    int result = strcmp(str1, str2);

    // Проверяем результат сравнения
    if (result < 0) {
        std::cout << "Строка str1 меньше строки str2" << "\n\n" << std::endl;
    }
    else if (result > 0) {
        std::cout << "Строка str1 больше строки str2" << "\n\n" << std::endl;
    }
    else {
        std::cout << "Строка str1 идентична строке str2" << "\n\n" << std::endl;
    }
}

void Ng() { //strncpy
     char source[256] = "Hello, world!";
char destination[256];

strncpy(destination, source, 10);
destination[256] = '0';
std::cout << "Скопированная строка: " << "\n\n" << destination << std::endl;

}

void zaza() {     //strcat
    char str1[256] = "Hello";
    char str2[256] = " World!";
    strcat(str1, str2); // str1 + str2 результат будет в str1

    std::cout << str1 << "\n\n" << std::endl; // вывод
}

void sol() { //strcpy
    char str1[256] = "Hello";
    char str2[256];
    strcpy(str2, str1); // Копирование строки str1 в строку str2

    std::cout << "Скопированная строка: " << str2 << "\n\n" << std::endl;

}

void vim() { //strstr
    char str[256] = "сделано в Onlinegbt";

    std::cout << strstr(str, "Onlinegbt") << "\n\n" << std::endl; // поиск подстроки в строке

}

void kara() { //strncat
    char arr[256] = "использование функции strcat";
    char array[256] = "эта часть добавляется и игнорируется";
   strncat(arr, array, sizeof(arr) - strlen(arr) - 1); 
   //Здесь третий аргумент равен разнице между размером массива arr и длиной уже имеющейся в нем строки, вычитая еще один символ для символа конца строки
   std::cout << arr << "\n\n";
}

int main() {
    setlocale(LC_ALL, "rus");
    krew();
    rw();
    Ng();
    zaza();
    sol();
    vim();

}

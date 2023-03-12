#include <iostream>
#include <string>
#include "Classes.h"
#include "Functions.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    char operate;
    bool tf = true;
    while (tf)
    {
        system("CLS");
        cout << "Введите номер операции:\n" << "1. Запустить.\n" << "2. Закрыть.\n"; //код для меню
        cin >> operate;
        switch (operate)
        {
        case '1':  Function(); system("pause"); break;
        case '2': tf = false;
        default:
            break;
        }
    }
}
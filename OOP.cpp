﻿#include <iostream>
#include "Container.h"

int main(/*int argc, char* argv[] */ )
{/*
    if (argc != 3) {
        cout << "incorrect command line! "
            "Waited: command in_file out_file"
            << endl;
        exit(1);
    }
   
    ifstream ifst(argv[1]);

    if (!ifst.is_open())
    {
        cout << "No input file found or could not open!" << endl;
        system("pause");
        return 1;
    }

    ofstream ofst(argv[2]);

    if (!ofst.is_open())
    {
        cout << "No output file found or could not open!" << endl;
        system("pause");
        return 1;
    }
 */ 

    ifstream ifst("D:\\Univer\\Программирование\\Lab1\\OOP\\input.txt");
    ofstream ofst("D:\\Univer\\Программирование\\Lab1\\OOP\\output.txt");
    
    cout << "Start" << endl;

    Container C; //Объявляем новый контейнер

    C.In_Container(ifst); //Записываем элементы в контейнер

    ofst << "Filled container. " << endl;

    C.Sort(); //Сортировка контейнера

    C.Out_Container(ofst); //Вывод контейнера

    C.Out_Only_Two_Dim(ofst); //Вывод только обычного двумерного массива

    C.Clear_Container();//Очистка контейнера

    ofst << "Empty container. " << endl;

    // C.Out_Container(ofst); //Вывод контейнера

    cout << "Stop" << endl;
    system("pause");
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
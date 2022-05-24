#ifndef DIAGONAL_MATRIX_H
#define DIAGONAL_MATRIX_H

#include <fstream>

#include "Matrix.h"

using namespace std;

//Класс "диагональная матрица"
class Diagonal_matrix : public Matrix {
	int* Array; //Массив
public:
	int* Get_Array(); //Функция получения массива

	void In_Array(int N, ifstream& ifst); //Функция ввода массива
	void Out_Array(Key_out K_o, int N, ofstream& ofst); //Функция вывода массива
	int Sum(int N); //Функция подсчет суммы элементов матрицы
	void Multi_Method(Matrix* Other, ofstream& ofst); //Функция мультиметода
	void DiagonalMM(ofstream& ofst); //Функция мультиметода для диагональной матрицы
	void Two_DimMM(ofstream& ofst); //Функция мультиметода для двумерного массива
	void TriangulaMM(ofstream& ofst); //Функция мультиметода для треугольной матрицы
	Diagonal_matrix() {};
};

#endif //DIAGONAL_MATRIX_H
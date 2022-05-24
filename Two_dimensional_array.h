#ifndef TWO_DIMENSIONAL_ARRAY_H
#define TWO_DIMENSIONAL_ARRAY_H

#include <fstream>

#include "Matrix.h"

using namespace std;

//Класс "двумерный массив"
class Two_dimensional_array : public Matrix {
	int** Array; //Массив
public:
	int** Get_Array();

	void In_Array(int N, ifstream& ifst);  //Функция ввода массива
	void Out_Array(Key_out K_o, int N, ofstream& ofst); //Функция вывода массива
	int Sum(int N); //Функция подсчета суммы элементов матрицы
	void Out_Only_Two_Dim(Key_out K_o, int N, ofstream& ofst); //Функция вывода только двумерного массива
	void Multi_Method(Matrix* Other, ofstream& ofst); //Функция мультиметода
	void Two_DimMM(ofstream& ofst); //Функция мультиметода для двумерного массива
	void DiagonalMM(ofstream& ofst); //Функция мультиметода для диагональной матрицы
	void TriangulaMM(ofstream& ofst); //Функция мультиметода для треугольной матрицы
	Two_dimensional_array() {};
};
#endif //TWO_DIMENSIONAL_ARRAY_H
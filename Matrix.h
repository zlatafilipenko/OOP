#ifndef MATRIX_H
#define MATRIX_H

#include <fstream>

using namespace std;

//Способ вывода матрицы
enum Key_out {
	BY_LINE, //По строкам
	BY_COLUMN, //По столбцам
	ONE_DIMENSIONAL //В виде одномерного массива
};

//Класс "матрица"
class Matrix {
	int N; //Размер матрицы
	Key_out K_o; //Способ вывода матрицы
public:
	static Matrix* In_Matrix(ifstream& ifst); //Функция ввода матрицы
	virtual void In_Array(int N, ifstream& ifst) = 0; //Чисто вирутальная функция ввода матрицы,
											  //она будет определена каждого класса массива
	virtual void Out_Array(Key_out K_o, int N, ofstream& ofst) = 0; //Чисто вирутальная функция вывода матрицы,
											  //она будет определена каждого класса массива
	int Get_N(); //Функция получения размерности массива
	virtual int Sum(int N) = 0; //Функция подсчета суммы элементов матрицы
	Key_out Get_K_o(); //Функция получения способа вывода матрицы
	virtual void Out_Only_Two_Dim(Key_out K_o, int N, ofstream& ofst); //Функция вывода только двумерного массива
	bool Compare(Matrix& Other); //Функция сравнения сумм элементов матрицы
	virtual void Multi_Method(Matrix* Other, ofstream& ofst) = 0; //Функция мультиметода
	virtual void DiagonalMM(ofstream& ofst) = 0; //Функция мультиметода для диагональной матрицы
	virtual void Two_DimMM(ofstream& ofst) = 0; //Функция мультиметода для двумерного массива
	virtual void TriangulaMM(ofstream& ofst) = 0; //Функция мультиметода для треугольной матрицы
protected:
	Matrix() {};
};

#endif //MATRIX_H
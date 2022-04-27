#ifndef CONTAINER_H
#define CONTAINER_H

#include "Matrix.h"

class Container {
    enum {
        Max_len = 100
    }; // ������������ ����� ����������

    int Len; // ������� �����
    Matrix* Cont[Max_len]; //������ ������
public:
    void In_Container(ifstream& ifst); //������� ����� ��������� � ���������
    void Out_Container(ofstream& ofst); //������� ������ ��������� ����������
    void Clear_Container(); //������� ������� ����������
    Container(); //�����������
    ~Container() { Clear_Container(); } //���������� ����������
};
#endif //CONTAINER_H
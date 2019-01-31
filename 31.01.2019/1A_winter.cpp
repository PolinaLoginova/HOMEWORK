/*���������� ����� double_vector -  ������ ������������ ����� ����������� �������.*/

#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
class double_vector
{
    double *data;                       //  ������
    int size; //  ����������� �������
    int capacity;
public:
    double_vector ()
    {
        data =  new double [1];         //����������� ��� ����������
        data[0] = 0;
    }
    double_vector (unsigned int n)
    {
        size = n;
        data =  new double [size];
        for ( int i = 0; i < size; i++ )    // ����������� � ����������� �������� ������
            data[i] = 0;
    }
    ~ double_vector ()
    {
        delete [] data;                     //����������
    }
    double_vector(const double_vector& A)
    {                                           //  ����������� �����������
        size = A.size;
        data = new double[size];
        for(int i = 0; i < size; i++)
            data[i] = A.data[i];
    }
    const double_vector& operator=(const double_vector& A)
    {                                   //  ������������� �������� ������������
        if(&A == this)                  //  �������� �� ������������ �������
            return *this;               //  ������ ����

                                                //  ���� ������� ������ ������, �� �������� ���
        delete [] data;
        size = A.size;
        data = new double[size];
        for(int i = 0; i < size; i++)
            data[i] = A.data[i];
        return *this;
    }
    double operator[] (unsigned int n)
    {

                                            //  ��� �������� ������ �� ������� �������
        if(n < 0)                       //  � ������ ���� ������ ������ ����,
                                            //  �� ���������� ������� ������� �������
        {
            return data[0];
        }
        else if(n > size - 1)

        {
            cout << "Index of array too big:\tuse last element\n";
            return data[size - 1];
        }
        else
            return data[n];     //  ������� ��������� �������� �������

    }
    void push_back(double x)            //��������� � �����
    {
        if (size >= capacity)
        {
            capacity *= 2;
            double *temp = new double [capacity];
            for (int i = 0; i < size; i++)
                temp [i] = data[i];
            delete []data;
            data = temp;
        }
    data[size] = x;
    size++;
    }
    unsigned int Size()
    {                               //  �������, ������������ ����������� �������
        return size;
    }
    unsigned int Capacity()                 //��������� ����������� �������
    {
        return capacity;
    }
    void pop_back(double x)             //���������� �� �����:
double pop_back()
                                       //��� ���������� - ������� ��������� �� �������, � �������� ����� �������� ������������,
                                        //��� ��������� ������ ������

    {
        if(size!=0)
        {
            double *data2 = new double[size-1];
            for( int i = 0; i < size-1; i++ )
            {
                data2[i] = data[i];
            }
            delete []data;
            size = size - 1;
            data = new double[size];
            for( int i = 0; i < size; i++ )
                data[ i ] = data2[ i ];
            delete []data2; //�������� �������������� �������
        }
        cout << "������ ����";
    }
};

int main()
{
    return 0;
}

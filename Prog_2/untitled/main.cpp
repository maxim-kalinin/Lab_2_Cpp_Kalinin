#include <QCoreApplication>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cout.setf(ios::right);
    cout.width(85);
    cout<< "Вывод размеров основных типов данных C++" <<endl;
    cout<<endl;

    cout<< "тип bool равен - ";
    cout<< sizeof(bool);
    cout<< " байт" <<endl;

    cout<< "тип char равен - ";
    cout<< sizeof(char);
    cout<< " байт" <<endl;

    cout<< "тип int равен - ";
    cout<< sizeof(int);
    cout<< " байт" <<endl;

    cout<< "тип signed int равен - ";
    cout<< sizeof(signed int);
    cout<< " байт" <<endl;

    cout<< "тип unsigned int равен - ";
    cout<< sizeof(unsigned int);
    cout<< " байт" <<endl;

    cout<< "тип short int равен - ";
    cout<< sizeof(short int);
    cout<< " байт" <<endl;

    cout<< "тип long int равен - ";
    cout<< sizeof(long int);
    cout<< " байт" <<endl;

    cout<< "тип long long int равен - ";
    cout<< sizeof(long long int);
    cout<< " байт" <<endl;

    cout<< "тип float равен - ";
    cout<< sizeof(float);
    cout<< " байт" <<endl;

    cout<< "тип double равен - ";
    cout<< sizeof(double);
    cout<< " байт" <<endl;


    return a.exec();
}




















#include <QCoreApplication>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    double chisloOne =0;
    double chisloTwo =0;
    int opracya = 0;
    double rezult = 0;

    cout<< " Консольный калькулятор." <<endl;
    cout<< " Необходимо ввести два числа и выбрать оператор действия над числами." <<endl;
    cout<<endl;
    cout<< "Введите первое число: ";
    cin >> chisloOne;
    cout<< "Введите второе число: ";
    cin >> chisloTwo;
    cout<< "Введите оператор действия над числами: " <<endl;
    cout<< "Оператор +   введите 1: " <<endl;
    cout<< "Оператор -   введите 2: " <<endl;
    cout<< "Оператор *   введите 3: " <<endl;
    cout<< "Оператор /   введите 4: " <<endl;
    cout<<endl;
    cout<< "Введите оператор:  ";
    cin >> opracya;

    if(opracya == 1) rezult = chisloOne + chisloTwo;
    if(opracya == 2) rezult = chisloOne - chisloTwo;
    if(opracya == 3) rezult = chisloOne * chisloTwo;
    if(opracya == 4) rezult = chisloOne / chisloTwo;

    cout<<endl;
    cout<< "Результат вычисления равен: ";
    cout<< rezult <<endl;


    return a.exec();
}








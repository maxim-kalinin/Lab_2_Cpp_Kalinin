#include <QCoreApplication>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cout<< " Вывести следующие числа в экспоненциальном виде:" <<endl;
    cout<< " 34.50" <<endl;
    cout<< " 0.004000" <<endl;
    cout<< " 123.005" <<endl;
    cout<< " 146000" <<endl;
    cout<<endl;

    cout<< " Экспоненциальный вид этих чисел:" <<endl;
    cout << " 3.45E+1" <<endl;
    cout << " 4.0E-3" <<endl;
    cout << " 1.23005E+2" <<endl;
    cout << " 1.46000E+5" <<endl;
    cout<<endl;

    cout<< " Вывод в экспоненциальном виде, при помощи манипулятора scientific:" <<endl;
    cout<<" ";
    cout << std::uppercase << std::scientific << 34.50 <<endl;
    cout<<" ";
    cout << std::uppercase << std::scientific << 0.004000 <<endl;
    cout<<" ";
    cout << std::uppercase << std::scientific << 123.005 <<endl;
    cout<<" ";
    cout << std::uppercase << std::scientific << 146000.0 <<endl;


    return a.exec();
}

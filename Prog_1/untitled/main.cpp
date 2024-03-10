#include <QCoreApplication>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cout.setf(ios::right);
    cout.width(90);
    cout<< "Калькулятор для расчета идеального веса" <<endl;
    cout<< "a. По формуле Брокка." <<endl;
    cout<< "б. По индексу массы тела." <<endl;
    cout<<endl;


    float rost = 0;
    int idealVes = 0;
    int pol = 0;

    cout<< "Введите ваш рост и нажмите Enter" <<endl;
    cin>> rost;
    cout<<endl;
    cout<< "Введите ваш пол мужской или женский." <<endl;
    cout<< "Если ваш пол мужской, введите:  1" <<endl;
    cout<< "Если ваш пол женский, введите:  2" <<endl;
    cout<< "Ваш пол: ";
    cin>> pol;

    // рассчет идеального веса по формуле Брокка
    if(pol == 1) idealVes = (rost - 100) * 0.9;
    if(pol == 2) idealVes = (rost - 100) * 0.85;

    cout<<endl;
    cout<< "Ваш идеальный вес по формуле Брокка, должен составлять = ";
    cout<< idealVes;
    cout<< " кг." << endl;
    cout<<endl;


    int realVes = 0;
    int indexMassi = 0;

    cout<< "Введите ваш настоящий вес" <<endl;
    cin>> realVes;

    // рассчет индекса массы
    indexMassi = realVes/(rost*rost);

    if(indexMassi <= 16) cout<< "Индекс массы < 16. Выраженный дефицит массы";
    if(indexMassi > 16 && indexMassi <= 18.5) cout<< "Индекс массы > 16 и < 18.5. Недостаточная масса тела";
    if(indexMassi > 18.5 && indexMassi <= 25) cout<< "Индекс массы > 18.5 и < 25. Норма";
    if(indexMassi > 25 && indexMassi <= 30) cout<< "Индекс массы > 25 и < 30. Избыточная масса тела (предожирение)";
    if(indexMassi > 30 && indexMassi <= 35) cout<< "Индекс массы > 30 и < 35. Ожирение первой степени";
    if(indexMassi > 35 && indexMassi <= 40) cout<< "Индекс массы > 35 и < 40. Ожирение второй степени";
    cout<<endl;

    return a.exec();
}

















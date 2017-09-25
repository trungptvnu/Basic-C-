#include <QCoreApplication>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
//    QCoreApplication a(argc, argv);
    int b =2;
    int *a = &b;
    cout << " &b:   " << &b << endl;
    cout <<" &a:  " << &a << endl;
    cout <<" a: " << a << endl;
    cout <<" *a: Gia tri ma con tro a tro toi  " << *a << endl;
//    cout <<"*a" << *a << endl;

    int fval =5;
    int sval =15;
    int *p1, *p2;
    p1 =&fval;
    p2 = &sval;
    *p1 =10;
//    *p2 = *p1;
    p1 = p2;
    *p1 = 20;
    cout <<"sval 5 afet changed :  " << sval << endl;
    cout << "fval 15 after chaned :  " << fval << endl;

    return 0;//a.exec();
}



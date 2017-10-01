#include <QCoreApplication>
#include <iostream>


int main(int argc, char *argv[])
{
//    QCoreApplication a(argc, argv);
//    int b =2;
//    int *a = &b;
//    std::cout << " &b:   " << &b << std::endl;
//    std::cout <<" &a:  " << &a << std::endl;
//    std::cout <<" a: " << a << std::endl;
//    std::cout <<" *a: Gia tri ma con tro a tro toi  " << *a << std::endl;
////    cout <<"*a" << *a << endl;
//    int fval =5;
//    int sval =15;
//    int *p1, *p2;
//    p1 =&fval;
//    p2 = &sval;
//    *p1 =10;
////    *p2 = *p1;
//    p1 = p2;
//    *p1 = 20;
//    std::cout <<"sval 5 afet changed :  " << sval <<std:: endl;
//    std::cout << "fval 15 after chaned :  " << fval << std::endl;

//    std::cout << " Bat dau con tro mang" << std::endl;
// Con Tro cua con tro

    char a;
    char *b;
    char **c;
    a = 'z';
    b =&a;
    c =&b;

    // mang 2 chieu va con tro mang

    int **matrix;
    matrix = new int*[3];
    for (int i=0; i<3; i++) {
        matrix[i] = new int[3];
    }
    for (int i =0; i<3; i++) {
        for (int j =0; j<3; j++) {
            *(*(matrix+i)+j) = i+j;
        }
    }
    //xuat ma tran
    std::cout<< " ma tran la "<<std::endl;
    for (int i =0; i<3; i++) {
        for (int j =0; j<3; j++) {
           std::cout<< *(*(matrix+i)+j) <<" ";
        }
        std::cout<< std::endl;
    }

    std::cout << "Con tro ham" << std::endl;


    return 0;
}



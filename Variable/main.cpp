#include <iostream>

using namespace std;

class C {
public:
    int a;
    int b;
private:
    int c;
    int d;
};


void setNum(int a) {
    a =0;
}
void swap(int &a, int &b)
{
    int c = a;
    a =b;
    b = c;
    cout << a <<"--"<<b << endl;
}


int main(int argc, char *argv[])
{
    int test;
    cout << sizeof(test) <<endl;
    cout << "Hello World!" << endl;

    cout << " Test Static avariable" << endl;
    for (int i=0; i <=5; i++) {
        int x;

    }

    cout << "Test While" <<endl;
    int x = 10;
    do {
        cout <<" x = " << x << endl;
        x--;
    } while (x >0);

    cout << "Test tham bien tham tri " <<endl;
    int b =2;
    setNum(b);
    cout <<" gia tri cua b sau khi goi ham la " << b <<endl;

    // Truyen theo tham bien
    int m =2;
    int n =3;
    cout <<" &xx"<< &n<<endl;
    swap(m,n);

    cout << "Test Mảng" <<endl;

    return 0;
}

#include <iostream>
//https://copynull.tistory.com/231
using namespace std;
// 똑같은 함수 짜기
struct D{
    int a;

    void operator() ()  {
        cout << "Hello World" << endl;
    }
};

void hello(int a){
    cout << "hello" << a << endl;
}

int main()
{
    D d;
    d();
    return 0;
}
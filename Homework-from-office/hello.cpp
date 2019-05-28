#include <iostream>
//https://copynull.tistory.com/231
using namespace std;
// 똑같은 함수 짜기
struct D{

    void operator()()  {
        cout << "Hello World" << endl;
    }
    void operator()(int num)  {
        cout << "Hello " << num << endl;
    }
};

void hello(int a){
    cout << "hello " << a << endl;
}

int main()
{
    D d;
    d(10);
    hello(10);
    return 0;
}

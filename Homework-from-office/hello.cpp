#include <iostream>
//https://copynull.tistory.com/231
using namespace std;
// 똑같은 함수 짜기
// Fountor로 true / false 받기,,
// 1. 배열을 만들어서 Operator에 적용하기 - for each 사용
// 1,2,3,4,5, --> hello 1, hello 2, 

struct D{

    void operator()()  {
        cout << "Hello World" << endl;
    }
    void operator()(int num)  {
        cout << "Hello " << num << endl;
    }
};

void hello(int a){
    cout << "hello" << a << endl;
}

int main()
{
    D d;
    d(10);
    hello(10);
    return 0;
}

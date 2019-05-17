//
//  main.cpp
//  Homework from office
//
//  Created by Yeo Kyu Li on 14/05/2019.
//  Copyright © 2019 Yeo Kyu Li. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
// static 사용하지 않기
// operator 사용해서 reverse하기
// operator에 람다 넣어보기
// functor
// 람다
/*
람다의 사용법은 간단하다. 

- []{} 
- [](인자){}

람다 소개자 : [] (Lambda Introducer)

파라미터 지정자 : () (Parameter Specifier)

람다 몸체 : {} (Lambda Body)

출처: https://vallista.tistory.com/entry/C-11-Lambda-Expression-람다-표현식-함수-객체-Functor [VallistA]
*/
struct Data{
    int x,y;

public:
    Data (int a=0, int b=0): x(a), y(b) {}

    // Data operator<(const Data& rhs)const{
    //     // cout << (x < rhs.x) << " " << (y < rhs.y) << endl;
    //     return Data(x < rhs.x, y < rhs.y);
    // }
    bool operator<(const Data& rhs)const{
        // cout << (x < rhs.x) << " " << (y < rhs.y) << endl;
        return (x < rhs.x) && (y < rhs.y);
    }


};

bool decrease(int a, int b){
    return a > b;
}



int main()
{
    //---------------------------------- int -----------------------------------------//
    vector<int> arr = {1,3,4,2,5,1,77,224,5,6};
    vector<Data> structD = {{1,65}, {200,50}, {100,6}};
    
    // sort(arr.begin(), arr.end());
    // for(auto value : arr)
    //     cout << value << " ";
    // cout << endl;
    
    // sort(arr.begin(), arr.end(), decrease);
    // for(auto value : arr)
    //     cout << value << " ";
    // cout << endl;
    
    sort(structD.begin(), structD.end());
    for(int x = 0 ; x < structD.size(); x++)
        cout << "{ " << structD[x].x << ", " << structD[x].y << " }" << " ";
    cout << endl;
 
    
    // sort(structD.begin(), structD.end(), [](const Data& lhs, const Data& rhs) {
    //     return lhs.y < rhs.y;
    // });
    // for(auto x = structD.begin(); x != structD.end(); x++)
    //     cout << "{ " << x -> x << ", " << x -> y << " } " << " " ;
    // cout << endl;
    //---------------------------------- char -----------------------------------------//
    // vector<char> arrC = {'F', 'A', 'C', 'F', 'H', 'O', 'C', 'A'};
    
    // sort(arrC.begin(), arrC.end());
    // for(auto a : arrC)
    //     cout << a << " ";
    // cout << endl;
    
    
    // reverse(arrC.begin(), arrC.end());
    // for(auto a : arrC)
    //     cout << a << " ";
    // cout << endl;
    return 0;
}

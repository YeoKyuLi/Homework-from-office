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

struct Data{
    int x,y;
    int sortC;
    bool operator<(const Data& rhs)const{
        return (x < rhs.x);
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
    
    sort(arr.begin(), arr.end());
    for(auto value : arr)
        cout << value << " ";
    cout << endl;
    
    sort(arr.begin(), arr.end(), decrease);
    for(auto value : arr)
        cout << value << " ";
    cout << endl;
    
    sort(structD.begin(), structD.end());
    for(int x = 0 ; x < structD.size(); x++)
        cout << "{ " << structD[x].x << ", " << structD[x].y << " }" << " ";
    cout << endl;
 
    
    sort(structD.begin(), structD.end(), [](const Data& lhs, const Data& rhs) {
        return lhs.y < rhs.y;
    });
    
    for(auto x = structD.begin(); x != structD.end(); x++)
        cout << "{ " << x -> x << ", " << x -> y << " } " << " " ;
    cout << endl;
    //---------------------------------- char -----------------------------------------//
    vector<char> arrC = {'F', 'A', 'C', 'F', 'H', 'O', 'C', 'A'};
    
    sort(arrC.begin(), arrC.end());
    for(auto a : arrC)
        cout << a << " ";
    cout << endl;
    
    
    reverse(arrC.begin(), arrC.end());
    for(auto a : arrC)
        cout << a << " ";
    cout << endl;
    return 0;
}

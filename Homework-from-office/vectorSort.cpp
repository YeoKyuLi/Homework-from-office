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
struct Data{
    int x,y;
//    bool operator<(const Data& rhs)const{
//        return (x < rhs.x);
//    }
public :
    Data(int a=0, int b=0): x(a), y(b) {}
    bool operator<(const Data& rhs)const{
        return x < rhs.x ;
    }

//    bool by_x(const Data& rhs)const{ return (x<rhs.x); };
//    bool by_y(const Data& rhs)const{ return (y<rhs.y); };
    
};


bool sortbysecdesc(const pair<int,int> &a,
                   const pair<int,int> &b)
{
    return a.second < b.second;
}
struct SortByDecrease{
    int x;
    //    bool operator<(const Data& rhs)const{
    //        return (x < rhs.x);
    //    }
    public :
    SortByDecrease(): x(0) {}
    SortByDecrease(int a=0): x(a) {}
    bool operator<(const SortByDecrease& rhs)const{
        return x > rhs.x ;
    }
    //    bool by_x(const Data& rhs)const{ return (x<rhs.x); };
    //    bool by_y(const Data& rhs)const{ return (y<rhs.y); };
    
};
bool decrease(int a, int b){
    return a > b;
}


int main()
{
    //---------------------------------- int -----------------------------------------//
    vector<int> arr = {1,3,4,2,5,1,77,224,5,6};
    vector<SortByDecrease> seq_arr ={1,3,4,2,5,1,77,224,5,6};

    vector<Data> structD = {{1,70}, {1,65}, {200,50}, {100,6}};
    vector<pair<int,int>> arr_s = {{1,70}, {1,65}, {200,50}, {100,6}};

    // Sorting reverse, using functor
//    sort(seq_arr.begin(), seq_arr.end(), greater<int>());

    sort(seq_arr.begin(), seq_arr.end());

//    sort(seq_arr.begin(), seq_arr.end(), std::less<int>());
    for(auto x = seq_arr.begin(); x != seq_arr.end(); x++)
        cout << x->x << " " ;
    cout << endl;
    
    // sorting lambda
    sort(structD.begin(), structD.end(), [](const Data& lhs, const Data& rhs) {
        return lhs.y < rhs.y;
    });
    for(auto x = structD.begin(); x != structD.end(); x++)
        cout << "{ " << x -> x << ", " << x -> y << " } " << " " ;
    cout << endl;

//    //------------------- sorting vector<<int,int>> -------------------------------//
    sort(structD.begin(), structD.end());


    for(auto x = structD.begin(); x != structD.end(); x++)
        cout << "{ " << x -> x << ", " << x -> y << " } " << " " ;
    cout << endl;
    sort(arr_s.begin(), arr_s.end());
    for(auto x = 0; x < arr_s.size(); x++)
        cout << "{ " << arr_s[x].first << ", " <<  arr_s[x].second << " } " << " " ;
    cout << endl;
    
    sort(arr_s.begin(), arr_s.end(), sortbysecdesc);
    for(auto x = 0; x < arr_s.size(); x++)
        cout << "{ " << arr_s[x].first << ", " <<  arr_s[x].second << " } " << " " ;
    cout << endl;
//    //------------------- sorting vector<<int,int>> -------------------------------//
    
//    sort(arr.begin(), arr.end());
//    for(auto value : arr)
//        cout << value << " ";
//    cout << endl;
//
//    sort(arr.begin(), arr.end(), decrease);
//    for(auto value : arr)
//        cout << value << " ";
//    cout << endl;
//
//    sort(structD.begin(), structD.end());
//    for(int x = 0 ; x < structD.size(); x++)
//        cout << "{ " << structD[x].x << ", " << structD[x].y << " }" << " ";
//    cout << endl;
 

    //---------------------------------- char -----------------------------------------//
//    vector<char> arrC = {'F', 'A', 'C', 'F', 'H', 'O', 'C', 'A'};
//
//    sort(arrC.begin(), arrC.end());
//    for(auto a : arrC)
//        cout << a << " ";
//    cout << endl;
//
//
//    reverse(arrC.begin(), arrC.end());
//    for(auto a : arrC)
//        cout << a << " ";
//    cout << endl;
    return 0;
}

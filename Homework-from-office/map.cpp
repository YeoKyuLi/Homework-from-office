//
//  main.cpp
//  Homework from office
//
//  Created by Yeo Kyu Li on 21/05/2019.
//  Copyright © 2019 Yeo Kyu Li. All rights reserved.
//
// Map :: "나이", "키"를 넣었을때 사람이름 나오도록
// pair 사용안하기
//  char name[100];  <- key .. Data  <- value;
// 1. Map에 class Key 적용하기
// https://stackoverflow.com/questions/2282349/specialization-of-templateclass-tp-struct-stdless-in-different-namespace
// operator less

#include <iostream>
#include <map>
#include <tuple>
using namespace std;
class Keys {
public:
    Keys(int k1, int k2) : key1(k1), key2(k2) { }
//    bool operator<(const Keys &right) const {
//        return (key1 < right.key1 && key2 < right.key2);
//    }
    int key1;
    int key2;
};
// https://www.techiedelight.com/use-std-pair-key-std-map-cpp/
// https://m.blog.naver.com/PostView.nhn?blogId=lsm_origin&logNo=220079240439&proxyReferer=https%3A%2F%2Fwww.google.com%2F
//typedef pair<int, int> keys;
int main()
{
    map<Keys, string>::iterator it;
    map<Keys, string> myMap;
    
//    it = myMap.find(keys(28, 165));
//    if(it != myMap.end())
//        myMap.erase(it);
//
//    for(const auto &entry : myMap){
//        auto key_pair = entry.first;
//        cout << "{" << key_pair.first << ", " << key_pair.second << "} / " << entry.second << "\n";
//    }
    
//    map<keys, string>::iterator it;
//    map<keys, string> myMap = {
//        {make_pair(28, 165), "여규리"},
//        {make_pair(28, 170), "김아라"},
//        {make_pair(28, 180), "이동훈"},
//    };
//    for(const auto &entry : myMap){
//        auto key_pair = entry.first;
//        cout << "{" << key_pair.first << ", " << key_pair.second << "} / " << entry.second << "\n";
//    }
//    it = myMap.find(keys(28, 165));
//    if(it != myMap.end())
//        myMap.erase(it);
//
//    cout << endl;
//    for(const auto &entry : myMap){
//        auto key_pair = entry.first;
//        cout << "{" << key_pair.first << ", " << key_pair.second << "} / " << entry.second << "\n";
//    }
//    cout << it->second;
    
    return 0;
}

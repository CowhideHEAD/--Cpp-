/*
    string 클래스를 사용하여 문자열을 생성 및 출력해보겠습니다.

     /// A string of @c char
     typedef basic_string<char>    string; 
    */

#include<string>
#include<iostream>

using namespace std;
int main(){
    string str;     //string 클래스 생성, string 클래스의 인스턴스 str 생성
    string strr("hello"); // string 클래스 생성, strr인스턴스 생성 동시에 "hello"로 초기화
    cout<<"str 을 입력하세요";
    cin>>str;
    cout<<"strr : "<<strr;
    


}
#include <iostream>
#include <string>
using namespace std;

int main(){
    char Cstream[10]="great!";  //기존의 C스타일의 문자열 입력은 문자열 버퍼의 크기를 미리 제한해야하는 불편함이있다.
    cout<<Cstream;

    string buffer("great!!");   // c++에서 지원하는 string객체의 생성자를사용하여 buffer라는 string 객체를 만들어 활용한다.
    cout<<buffer;
    
}
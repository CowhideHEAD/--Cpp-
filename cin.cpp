#include <iostream>

using namespace std;
int main(){
    cout<<"enter number\n";
    int number;
    cin>>number;        //cin 은 std객체안에 정의되어있는 input stream 이며 버퍼에있는 값을 반환
                        // >> 연산자는 쉬프트 연산자로써 반환된 값을 number으로 입력

    cout<<number;       // cout은 std객체안의 정의도어있는 output stream 이며 <<연산자에 의해 number의 값을 출력
    
}
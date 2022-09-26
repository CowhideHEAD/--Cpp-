/*
    클래스 내부의 맴버,생성자,위임 의 선언 과 정의를 분리시켜라
    */

#include <iostream>
using namespace std;

//클래스의 선언
// 생성자,소멸자,맴버함수
class Circle{
    private:
        double pi = 3.14;
    public:

        double radius;

        Circle();
        ~Circle();
        Circle(double radius);

        double getArea();
        
};

//클래스 요소의 정의
double Circle::getArea(){
    return pi*radius*radius;
}

Circle :: Circle():Circle(2){cout<<"생성자가 위임되었습니다.."<<endl;} //생성자를 위임하기위해선 이처럼
/* 생성자를 위임하기 위해선 이처럼 생성자 위임할 생성자를 정의함과 동시에 위임을 명시해야합니다
    [클래스타입] :: [피위임할 생성자()] : [위임될 생성자(매개변수초기화){실행내용}]
*/
Circle :: ~Circle(){cout<<"소멸자가 호출되었습니다."<<endl;}
Circle :: Circle(double radius){
    this->radius=radius;
    cout<<"매개변수가 한개인 생성자가 호출되었습니다."<<endl;
}

int main(){
    Circle donut;
    cout<<donut.getArea()<<endl;

}



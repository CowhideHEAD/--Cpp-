#include <iostream>
using namespace std;
/*
클래스의 구성요소 선언부 와 구현부로 나뉜다.
선언부 의 구성요소 : 클레스이름, private, public, protected, 맴버함수의 선언, 클래스 변수,생성자,소멸자

**** 매우중요: 생성자 와 소멸자는 public으로 선언해야 합니다 객체를 생성하기위해선 생성자가 호출되는데, 퍼블릭
이외의 접근지정자로는 외부에서 클래스로 진입할 방법이 없기 때문입니다.
구현부 의 구성요소 : 맴버함수의 정의 
*/
class Circle{       //클레스 선언
    
    private:
        double pi = 3.14;
    public:
        double getArea(double radius);
        Circle(){cout<<"생성자가 호출되었습니다."<<endl;};
        ~Circle(){cout<<"소멸자가 호출되었습니다."<<endl;};    
    protected:

    
};

double Circle :: getArea(double radius){
    return pi*radius*radius;
}

//클래스의 호출
int main(){
    Circle donut;
    double donut_Area;

    donut_Area=donut.getArea(20);
    cout<<donut_Area<<endl;
   
}

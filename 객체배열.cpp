/*
    하나의 클래스를 선언,정의하고 이를 인스턴스화 하여 사용할때 인스턴스를 배열로 선선언하여
    여러개의 객체를 한번에 만드는 방법이다.
    [클래스이름] [인스턴스이름][원소개수];
    Circle circleArray[3]
        >> Circle 의 형태를 가진 인스턴스 3개 circleArray[0],circleArray[1],circleArray[2] 이 생성됨

    생성자를 통해 각각 객체를 초기화 할 수도 있다. 
    Circle circleArray[3]={생성자1,생성자2,...}
*/


#include <iostream>

using namespace std;

class Circle{
    private:
        double pi=3.14;
    public:
        double radius;
        Circle(){radius=10;}
        Circle(double radius){this->radius=radius;}
        double getArea();
};

double Circle::getArea(){
    return pi*radius*radius;
}

int main(){
    // Circle circleArray[3];
    // circleArray[0].radius=10;
    // circleArray[1].radius=20;
    // circleArray[2].radius=30;
    
    Circle circleArray[3]={Circle(),Circle(20),Circle(1)};

    cout<<circleArray[0].getArea()<<endl;
    cout<<circleArray[1].getArea()<<endl;
    cout<<circleArray[2].getArea()<<endl;

}
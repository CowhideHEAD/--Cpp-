/*
    객체를 가리키는 포인터를 선언하여 활용할 수 있다.
    선언방법
        [클래스이름] *[포인터이름];
    문법설명하면, ex) Circle *p;
    p라는 포인터는 Circle만큼의 자료를 가리킨다. 
    */

#include <iostream>

using namespace std;

class Circle{
    private:
        double pi=3.14;
    public:
        double radius;
        Circle(){radius=10;}
        ~Circle(){radius=10;}
        double getArea();

};

double Circle::getArea(){ return pi*radius*radius;}

int main(){
    Circle *ptrc;
    Circle donut;
    
    ptrc=&donut;
    cout<<ptrc->getArea()<<endl;        //이처럼 포인터를 통해 Circle클래스의 맴버에 접근할 수 있다.
    cout<<(*ptrc).getArea()<<endl;      //중요!! [포인터]->[접근대상] == (*포인터).[접근대상]
    cout<<donut.getArea()<<endl;        //인스턴스를 통해 Circle클래스의 맴버에 접근
}
#include <iostream>
using namespace std;

/*
    매개변수를 가지는 생성자를 생성하고, 호출해 봅시다.
    생성자는 매개변수에 따라대응되는 생성자를 호출할 수 있습니다.
    매번 매개변수가 생길때마다 그에따른 생성자를 정의해 주어야합니다.

    생성자 호출하기
        생성자를 호출할때는 [클래스이름] [인스턴스명](매개변수) 을 따릅니다.
*/

class Circle{
    private:
        double pi=3.14;
        
    public:
        double radius;
        double getArea();
        Circle(){cout<<"생성자가 호출되었습니다."<<endl;};
        Circle(double newpi){
            pi=newpi;
            cout<<"생성자를 통해 pi값이 "<<pi<<"로 바뀌었습니다."<<endl;};
        Circle(double newpi , double newradius);    //이 생성자는 외부에서 정의하겠습니다.
        ~Circle(){cout<<"소멸자가 호출되었습니다."<<endl;};

        
};

//클래스 구현부 맴버함수

double Circle::getArea(){
    return pi*radius*radius;
}

Circle::Circle(double newpi, double newradius){
    pi=newpi;
    radius=newradius;    
    cout<<"생성자를 통해 pi값이 "<<pi<<"로 바뀌었습니다."<<endl;
    cout<<"생성자를 통해 radius값이 "<<newradius<<"로 바뀌었습니다."<<endl;

}

int main(){
    //클래스를 사용하기위해 객체를 생성합니다. 객체는 실체를 가지므로 인스턴스라고도 합니다.
    Circle donut;
    donut.radius=2;
    cout<<donut.getArea()<<endl;

    //생성자는 한번만 호출되기 때문에 이후에 생성자의 값을 바꾸어도 getArea(10)의 값은 그대로입니다.

    Circle dish(3.141924);
    donut.radius=2;
    cout<<"donut.radius="<<donut.radius<<endl;
    cout<<"can't assecc Cricle dish pi "<<endl;
    cout<<"donut.getArea() = "<<donut.getArea()<<endl;

    Circle waffle(3.1425,11);
    cout<<waffle.getArea()<<endl;
    
}
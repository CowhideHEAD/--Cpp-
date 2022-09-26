/*
    동적메모리 반환 3
    이번엔 클래스를 호출시 클레스의 메모리를 할당하고 해제해 보겠습니다.

    [클레스이름] 인스턴스이름 = new [클래스이름]
    [클레스이름] 인스턴스이름 = new [클래스이름(생성자 매개변수)]


*/

#include <iostream>

using namespace std;

//클래스 선언
class Circle{
    int radius;
    public:
        Circle();
        Circle(int radius);
        ~Circle();
        void setRadius(int radius){ this->radius=radius;};
        double getArea(){return 3.14*radius*radius;};
};

Circle::Circle(){
    this->radius=1;
    cout<<"생성자 실행 radius="<<this->radius<<endl;
}

Circle::Circle(int radius){
    this->radius=radius;
    cout<<"생성자 실행 radius="<<this->radius<<endl;
}

Circle::~Circle(){
    cout<<"소멸자 실행 radius= "<<this->radius<<endl;
}

int main(){
    int input_radius;
    Circle *p,*q;
   

    while(true){
        cout<<"정수 반지름 입력(음수이면 종료)"<<endl;
        cin>>input_radius;
        if(radius<0) break;

        Circle *p=new Circle(input_radius);     //객체포인터를 선언함과 동시에 메모리를 할당함과 동시에 생성자초기화
        cout<<"원의 면적은"<<p->getArea()<<endl;
        delete p;       

        
    }
    
}
/*
    함수의 매개변수로 객체를 넘겨줄수있다. 이때 call by value 와 call by reference 의 차이를 알아보자
    
    아래코드는 call by value 로 객체를 함수의 매개변수로 넘겨주었다. call by value로 값을넘겨주게되면
    외부의 객체는 값의 영향을 받지 않는다. 



*/

#include<iostream>

using namespace std;

class Circle{
    private:
        int radius;
    public:
        Circle();
        Circle(int r);
        ~Circle();
        double getArea(){return 3.14*radius*radius;}
        int getradius(){return radius;};
        void setRadius(int radius){this->radius=radius;}
};

Circle ::Circle(){
    radius=1;
    cout<<"생성자가 호출되었습니다 radius = "<<radius<<endl;
}

Circle ::Circle(int r){
    this->radius=r;
    cout<<"생성자가 호출되었습니다. radius = "<<radius<<endl;
}

Circle ::~Circle(){
    cout<<"소멸자가 호출되었습니다. radius = "<<radius<<endl;
}
/* ==== 객체를 매개변수로 받는 함수선언 및 정의 ====  */
void increace(Circle c){
    int r = c.getradius();      //매개변수로 객체를 받는다는 것은, 해당함수내에 객체의 public의 모든것을
                                //복사한것과 같고, public의 모든요소에 접근이 가능!
    c.setRadius(r+1);           //그렇다면, 함수에서 객체의 변수를 바꾸는건 가능할까?
}

int main(){
    Circle waffle(30);
    increace(waffle);
    cout<<waffle.getradius()<<endl;
    cout<<"생성자가 한번 호출된건 맨처음 waffle을 생성했을때 이다."<<endl;
    cout<<"다음 함수iscreace의 매개변수로 waffle가 입력될때, 생성자는 호출되지 않는다."<<endl;
    cout<<"increace 함수내에서 c.setRadius(30+1) 을통해 Circle 의 radius가 31이 될것같았지만 "<<endl;
    cout<<"waffle.radius = 30으로 출력된다. 이는 increace함수에 전달한 객체 waffle은 외부에선언된 waffle(30)이아니라 "<<endl;
    cout<<"increce{내부에서 새로 복사된 waffle(30)이기때문에}서로 다른 메모리이기 때문이다."<<endl;
    cout<<"이것이 객체를 매개변수로 call by value 의 성질이다."<<endl;
}


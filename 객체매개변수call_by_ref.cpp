/*
    이번엔 함수의 매개변수로 객체 "포인터" 를 넘겨줘보도록 하겠다.

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
void increace(Circle *p){
    int r = p->getradius();      //매개변수로 객체를 받는다는 것은, 해당함수내에 객체의 public의 모든것을
                                //복사한것과 같고, public의 모든요소에 접근이 가능!
    p->setRadius(r+1);           //그렇다면, 함수에서 객체의 변수를 바꾸는건 가능할까?
}

int main(){
    Circle *p;
    Circle waffle(30);
    p=&waffle;
    increace(p);
    cout<<waffle.getradius()<<endl;
    
}

/*
    이번엔 결과가 값이 변경됨을 알수있다. 객체포인터로 호출하고, 내부함수에서 포인터로 객체의 값에
    접근하였기때문에 waffle.radius =31으로 변경됨알수있다.
    기억!
        객체포인터로 값을 받을때 연산자 실수하지 않기 . ->
        함수내부에서 객체public의 모든!변수에 접근이 가능하다!
*/
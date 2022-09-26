/*  
    이번엔 객체를 배열로 선언한후, 배열로 선언된 객체의 메모리를 동적으로 할당하고 반환해 보겠습니다.
    배열로 선언된 객체를 포인터로 가리킨후, 객체배열의 인스턴스를 반환하면 됩니다.

    문법에 주의하세요
    예:
    Circle circleArray[3];
    Circle *p = circleArray;
    p=new Circle[3];
    delete [] p;

    */

#include <iostream>

using namespace std;

class Circle{
    int radius;
public:
    Circle();
    Circle(int r);
    ~Circle();
    void setRadius(int r){radius=r;}
    double getArea(){return 3.14*radius*radius;}

};

Circle::Circle(){
    radius=1;
    cout<<"생성자 실행 radius = "<<radius<<endl;
}

Circle::Circle(int r){
    radius =r;
    cout<<"생성자 실행 radius = "<<radius<<endl;

}

Circle::~Circle(){
    cout<<"소멸자실행 radius = " << radius<<endl;

}

int main(){
    Circle *pArray = new Circle[3];     //객체를 배열로 선언할땐 인스턴스가 포인터가 된다!!
    pArray[0].setRadius(10);
    pArray[1].setRadius(20);
    pArray[2].setRadius(30);

    for(int i = 0;  i<3;i++){
        cout<<"p["<<i<<"] "<<pArray[i].getArea()<<endl; 
        cout<<pArray[i].getArea()<<endl;
        pArray++;       //객체를 배열로 선언할땐 포인터로 선언함이 용이하다. 이렇게 포인터에
                        //값을 추가함으로써 다음객체를 지시할 수 있기때문
    }

    // Circle *p = pArray;
    // for(int i=0 ; i <3; i++){
    //     cout<<p->getArea()<<endl;
    //     p++;
    // }

    delete [] pArray;        //메모리를 반환할땐 인스턴스를 가리키는 포인터, 이와같은 형식으로 바환.
}


    /*두가지 방법으로 선언이가능하다 하나는 객체배열을 인스턴스화 한것,다음하나는 개게배열을 포인터로 가리킴으로써
    인스턴스화 한것
    그러나 아래 객체배열에 값을 넣어보면 알겠지만, 객체배열의 원소에 접근하기위해선 포인터로만 접근해야합니다.
    때문에 이름으로 인스턴스화된 객체는 물론 접근가능하지만 0번째만 접근이 가능하며 그이후 1,2... 는 문법상
    접근할 방법이 업다. 때문에 객체배열을 포인터로 접근할때에는 포인터로 바로 인스턴스화 하길 바란다.
*/
   

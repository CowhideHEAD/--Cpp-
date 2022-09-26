/*
    원소의 개수를 입력받고 Circle 배열을 동적으로 생성하라.
    반지름값을 입력받아 Cricle배열에 저장라
    */
#include <iostream>

using namespace std;

class  Circle{
public:
    double radius;
    Circle();
    Circle(int r);
    ~Circle();
    void setRadius(int r);
    double getArea();    
   };

double Circle::getArea(){
    return 3.14*radius*radius;
}

void Circle::setRadius(int r){
    radius=r;
}

Circle:: Circle(){
    cout<<"생성자가 호출됨 , radius = "<<radius<<endl;
}
Circle ::Circle(int r){
    cout<<"생성자가 호출둠 radius = "<<radius<<endl;
}
Circle::~Circle(){
    cout<<"소멸자가 호출됨 "<<endl;
}

int main(){
    int n,radius;

/*--  입력된 정수만큼의 객체생성  --*/
    cout<<"생성할 객체의 개수는? >>> ";
    cin>>n;
    if(n<=0) {cout<<"잘못된 정수입니다"<<endl; return 0;}
    Circle *pArray = new Circle[n];         //생성자가 호출되는 시점!! n개만큼 생성!!
    
/*--  객체마다 반지름을 입력  --*/
    for(int i = 0 ;i<n ;i++){
        cout<<"["<<i<<"]"<<" 번째 원의 반지름을 입력하세요 : ";
        cin>>radius;
        pArray[i].setRadius(radius);
        // cout<<"현재 상황: "<<pArray[i].radius<<endl;

    }

/* -- 객체마다 원넓이를 출력  -- */
    for(int i = 0; i<n;i++){
        cout<<"["<<i<<"]"<<"번째 원넓이는 :  "<<pArray[i].getArea()<<endl;
    }
    delete [] pArray;

}


////GREAT!!!!!!!
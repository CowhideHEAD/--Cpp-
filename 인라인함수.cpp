/* 
    인라인함수는 복잡하지 않은 함수가 있을시 이러한 함수를 컴파일할때 결과값만 메모리에 입력하며, 함수호출을 
    일어나지 않게하는 기술이다.
    
    인라인함수 구현방법
    usage:  inline [클래스이름] :: [자료형type] [함수이름] ([매개변수],...){ ~~ return }
        inline 이란 키워드를 제외하곤 모두 함수의 정의와 같다.
    
    인라인함수 구현방법 2
    클레스선언부에 정의된 맴버함수는 컴파일시 자동으로 인라인처리한다. 만약 간단한 함수라면 클레스 선언부에 
    정의롤 구현해도, 이는 inline키워드가 없음에도 컴파일러는 이를 인라인 처리한다. 

    voltile 처리
        만약 자동인라인처리를 해선 안된다면, voltile 이란 키워드를 함수의 정의앞에 해주면 된다. 
*/

#include <iostream>
using namespace std;
class Circle{
    private:
        double pi = 3.14;
    public:
        double radius;
        Circle(){cout<<"생성자가 호출되었습니다."<<endl;};      //컴파일러는 해당함수(생성자,소멸자 )를 자동 인라인 처리합니다.
        ~Circle(){cout<<"소멸자가 호출되었습니다."<<endl;};
        double getArea();
        volatile double getpi(){return pi;};                //컴파일러는 해당함수를 인라인 처리하지 않습니다.

    
};

inline double Circle::getArea(){                //컴파일러는 해당함수를 인라인 처리합니다.
    return pi*radius*radius;
}

int main(){
    Circle donut;
    donut.radius=10;
    cout<<donut.getArea()<<endl;
    cout<<donut.getpi()<<endl;
}
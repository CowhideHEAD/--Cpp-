/*
    -클래스를 선언하고 이를 호출할때 동적으로 메모리르 할당하며 해제가 가능하다.
    -동적으로 메모리를 할당 및 반환할때 해당 메모리는 heap영역에서 이루어 집니다.
    -동적으로 메모리를 할당하는 이유는 메모리를 절약하기 해서입니다. 
        프로그램의 규모가 커지면 실행하는것 만으로 많은 메모리를 차지하여 연산속도가 느려지거나 
        예기치못한 문제가 발생할 수 있습니다. 이를 방지하기위해호출된 클레스가 메모리를 반환할 수 있도록 로직을 만들어 줍니다. 
        (생성자,소멸자 를 사용하면 좋을것 같습니다)
    
    동적메모리 할당 및 반환의 방법은 c++ std에서 기본적으로 제공하는 라이브러리 함수를 사용합니다.
    new() 와 delete()입니다.
    매모리할당:
        [데이터타입] [*포인터변수] = new [데이터타입];
        ex) int *pInt = int;  // int타입의 정수공간 할당
        ex) Circle *pCircle = new Circle(); // 서클클래스 타입의 객체할당
    
    메모리반환:
        delete [포인터변수];
        ex) delete Iint;
        ex) delete pCircle();
    */


#include <iostream>

using namespace std;

int main(){
    int *p;
    p= new int;
    if(!p){
        cout<<"할당할 메모리가 없습니다"<<endl;
        return 0;
    }

    *p=5;
    int n = *p;
    cout<<"*p = " <<*p<<endl;
    cout<<"n= "<<n<<endl;
    delete p;
    
}
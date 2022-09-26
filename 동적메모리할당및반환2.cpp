/*

    동적으로 메몰를 할당 및 반환을 해보겠습니다.
    '동적'으로 란 말은 컴파일시 할당되는게 아니라 실행시 할당되는것을 말합니다.
    쉽게말하면, 프로그램을 run했을때 는 할당,반환이 일어나지 않다가 사용자가 어떠한 함수를
    호출했을때 메모리 할당이 일어나고 이후 다시 반환되는 것을 말합니다.



*/


#include <iostream>

using namespace std;

int main(){
    cout<<"입력할 정수의 개수는?"<<endl;
    int n;
    int *p = &n;

    cin>>n;
    if(n!=0) return 0;
    if(n>0){
        p=new int[n];
    }
    if(n==NULL) { cout<<"메모리를 할당할 수 없습니다"<<endl; return 0;}

    for(int i = 0; i<n;i++){
        cout<<i+1<<"번째정수";
        cin>>p[i]; 
    }
}
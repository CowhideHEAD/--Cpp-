/*
    4+5+6+7+9 를 문자열로 입력받아 문자열로 결과를 출력해보자
    int find(const string& , int pos)   :문자열에서 string&을 검색하여 발견하면 처음발견된 인덱스 리턴
                                        그렇지 못하면 -1 리턴, pos는 검색시작인덱스 위치
    int stoi(const string& str, size_t* idx =0, int base = 10); 
    : const string& str 검색할 문자열, size_t* idx =0 검색시작인덱스위치 ,int base = 10 검색대상의 진수(int만가능)

*/
#include<string>
#include<iostream>

using namespace std;

int main(){
    string str;
    int index,len;
    cout<<"1+2+4+5... 처럼 문자열로 이루어진 덧샘을 입려하세요"<<endl;
    getline(cin,str,'\n');

/**====숫자와 기호 색출함과 동시에 숫자들을 더하기==== **/
    index=str.length();
    len=str.length();
    string numbers;
    while(true){
        if(index==-1){break;}
        index=str.find('+');
        numbers.append(str.substr(0,index));
        str=str.substr(index+1,len);
        cout<<str<<endl;

    }
    int sum=0;
    

    for(int i=0;i<5;i++){
        if(numbers[i]==NULL){break;}
        cout<<"number is >>"<<numbers[i]<<endl;
        sum=sum+stoi(numbers);

    }

    cout<<"SUM is   >>"<<sum<<endl;


}
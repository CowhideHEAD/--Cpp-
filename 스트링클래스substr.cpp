#include<string>
#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"아래문자열을 입력하세요, 빈칸이 있어도됩니다. 한글은안되요"<<endl;
    getline(cin,s,'\n');
    int len = s.length();    //문자열의 길이를 반환

    string first = s.substr(0,1); // s의 문자열의 0번째 문자와 1번째 문자를 분리,0번째 문자를 리턴
    string sub = s.substr(1,len-1); // s의 문자열의 1번째 문자와 나머지문자욜로 분리, 1~len-1개 문자를 리턴

    cout<<"first >>"<<first<<"len of first>>" <<first.length()<<endl;
    cout<<"sub >>"<<sub<<"len of sub>>" <<sub.length()<<endl;

    for(int i=0;i<len;i++){
        string first = s.substr(0,1);
        string sub = s.substr(1,len-1);
        s=sub+first;
        cout<<s<<endl;
    }
    
}
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    const char* file = "/mnt/c/Users/KOSTA/project/cpp/testw.txt";
    ifstream fin;
/*파일을 쓰기모드로 연다.*/
    fin.open(file,ios::out);

    cout<<"현재 입력스트림의 파일포인터 위치"<<fin.tellg()<<endl;
/*파일 읽기포인터를 3만큼 옮긴다,*/
    fin.seekg(3);
    cout<<"현재 입력스트림의 파일포인터 위치"<<fin.tellg()<<endl;
/*현재위치에서 데이터입력 안됨 왜냐면 읽기스트림인ifstream으로 열어서*/
    //fin.put??
    if(!fin){  //열기 실패검사
		 cout<<file<<" file open err"<<endl;
			return 0;
    fin.close();


    ofstream finw;
    finw.open(file);
    cout<<"현재 입력스트림의 파일포인터 위치"<<finw.tellp()<<endl;
/*혅위치에서 쓰기포인터를 3만큼 옮긴다*/
    finw.seekp(3);
/*현위치에서 데이터를 입력해본다.*/
    finw.put('a');

    
    
    
}
}
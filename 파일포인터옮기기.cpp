#include <iostream>
#include <fstream>
using namespace std;

int main(){

    const char* file = "/mnt/c/Users/KOSTA/project/cpp/test.txt";

    ifstream fin(file);
    /* 파일열기검사*/
    if(!fin){
        cout<<file<<" file open err"<<endl;
			return 0;
    }

    /*현재파일포인터*/
    cout<<"현재 파일포인터 위치"<<fin.tellg()<<endl;;
    fin.seekg(5);
    cout<<"파일포인터를 5로 옮김"<<fin.tellg()<<endl;
    
    fin.close();
}
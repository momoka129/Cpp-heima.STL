#include<iostream>
using namespace std;

void test01(){
    string str = "abcdef";
    string subStr = str.substr(1,3);
    cout<<subStr<<endl;
}

//实用操作
void test02(){
    string email = "huiyuanai@example.com";

    //从邮件地址中 获取用户名信息
    int pos = email.find("@");

    string userName = email.substr(0,pos);
    cout<<userName<<endl;

}

int main(){

    //test01();

    test02();

    return 0;
}
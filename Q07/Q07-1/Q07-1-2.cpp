#include <iostream>
using std::cin; using std::cout; using std::endl;

class MyFriendInfo{
    private:
    char* name;
    int age;
    public:
    MyFriendInfo(){}
    MyFriendInfo(char* nameInput, int ageNum):name(nameInput), age(ageNum){}
    ~MyFriendInfo(){
        delete []name;
    }
    void ShowMyFriendInfo(){
        cout<<"�̸� : "<<name<<endl;
        cout<<"���� : "<<age<<endl;
    }
};

class MyFriendDetailInfo : public MyFriendInfo{
    private:
    char * addr;
    char * phone;
    public:
    MyFriendDetailInfo(){}
    MyFriendDetailInfo(char* nameInput, int ageNum, char* addrInput, char* phoneInput): MyFriendInfo(nameInput, ageNum), addr(addrInput), phone(phoneInput){}
    ~MyFriendDetailInfo(){
        delete []addr;
        delete []phone;
    }
    void ShowMyFriendDetailInfo(){
        ShowMyFriendInfo();
        cout<<"�ּ� : "<<addr<<endl;
        cout<<"��ȭ : "<<phone<<endl<<endl;
    }
};

int main(){
    
}
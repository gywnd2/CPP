#include <iostream>
#include <cstring>
using namespace std;

namespace COMP_POS{
    enum{CLERK, SENIOR, ASSIST, MANAGER};
}

class NameCard{
    private:
     char* name;
     char* company;
     char* phone;
     int rank;
     
    public:
    
    /*
    C++11 ���� ���� �Ͻ��� �� ��ȯ�� Deprecated ��. ���� ���ڿ� �����
    const char*�� ��޵Ǿ� char*�� �ٶ������� �ʴ�. ==> const �ٿ��� ��. */

     NameCard(const char* n, const char* cn, const char* pn, int rn) 
      : rank(rn) {
       name= new char[strlen(n)+1];
       company=new char[strlen(cn)+1];
       phone= new char[strlen(pn)+1];
       strcpy(name, n);
       strcpy(company, cn);
       strcpy(phone, pn);
      }

      ~NameCard(){
        delete []name;
        delete []company;
        delete []phone;
      }
    
    void ShowNameCardInfo(){
        cout<<"�̸� : "<<name<<endl;
        cout<<"ȸ�� : "<<company<<endl;
        cout<<"��ȭ��ȣ : "<<phone<<endl;
        cout<<"���� : ";
        switch (rank)
        {
        case 0:
          cout<<"���"<<endl;
            break;
        case 1:
          cout<<"�븮"<<endl;
            break;
        case 2:
          cout<<"����"<<endl;
            break;
        case 3:
          cout<<"����"<<endl;
            break;
        }
        cout<<"\n"<<endl;
    }
};

int main(){
    NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
    NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
    NameCard manASSIST("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
    manClerk.ShowNameCardInfo();
    manSENIOR.ShowNameCardInfo();
    manASSIST.ShowNameCardInfo();
    return 0;
}

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
    C++11 이후 부터 암시적 형 변환이 Deprecated 됨. 따라서 문자열 상수는
    const char*로 취급되어 char*은 바람직하지 않다. ==> const 붙여줄 것. */

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
        cout<<"이름 : "<<name<<endl;
        cout<<"회사 : "<<company<<endl;
        cout<<"전화번호 : "<<phone<<endl;
        cout<<"직급 : ";
        switch (rank)
        {
        case 0:
          cout<<"사원"<<endl;
            break;
        case 1:
          cout<<"대리"<<endl;
            break;
        case 2:
          cout<<"주임"<<endl;
            break;
        case 3:
          cout<<"과장"<<endl;
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

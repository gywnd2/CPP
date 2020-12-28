#include <iostream>
using namespace std;

class Book{
    private:
    char * title;
    char * isbn;
    int price;
    public:
    Book(){}
    Book(char* titleInput, char* isbnInput, int priceVal):title(titleInput), isbn(isbnInput), price(priceVal){}
    ~Book(){
        delete []title;
        delete []isbn;
    }
    void ShowBookInfo(){
        cout<<"제목: "<<title<<endl;
        cout<<"ISBN: "<<isbn<<endl;
        cout<<"가격: "<<price<<endl;
    }
};

class EBook : public Book{
    private:
    char * DRMKey;
    public:
    EBook(){}
    EBook(char* titleInput, char* isbnInput, int priceVal, char* DRMKeyVal):Book(titleInput, isbnInput, priceVal), DRMKey(DRMKeyVal){}
    ~EBook(){
        delete []DRMKey;
    }
    void ShowEBookInfo(){
        ShowBookInfo();
        cout<<"인증키: "<<DRMKey<<endl;
    }
};

int main(){
    Book book("좋은 C++", "555-12345-890-0", 20000);
    book.ShowBookInfo();
    cout<<endl;
    EBook ebook("좋은 C++ ebook", "555-12345-890-1", 10000, "fdx9w0i8kiw");
    ebook.ShowEBookInfo();
    return 0;
}
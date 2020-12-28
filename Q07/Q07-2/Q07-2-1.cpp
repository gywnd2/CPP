#include <iostream>
using namespace std;

class Rectangle{
    private:
    int width;
    int height;
    public:
    Rectangle(){}
    Rectangle(int w, int h):width(w), height(h){}
    ~Rectangle(){}
    void ShowAreaInfo(){
        cout<<"면적 : "<<width*height<<endl;
    }
};

class Square : public Rectangle{
    private:
    int size;
    public:
    Square(){}
    Square(int s):size(s){}
    ~Square(){}
    void ShowAreaInfo(){
        cout<<"면적 : "<<size*size<<endl;
    }
};

int main(){
    Rectangle rec(4,3);
    rec.ShowAreaInfo();

    Square sqr(7);
    sqr.ShowAreaInfo();
    return 0;
}
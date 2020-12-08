#include <iostream>
using namespace std;

class Point{
    private:
     int xpos, ypos;
     
    public:
     void Init(int x, int y){
         xpos=x;
         ypos=y;
     }

     void ShowPointInfo() const{
         cout<<"["<<xpos<<", "<<ypos<<"]"<<endl;
     }
};

class Circle{
    private:
     int xpos, ypos, rad;

    public:
     void Init(int x, int y, int r){
         xpos=x;
         ypos=y;
         rad=r;
     }

    void ShowCircleInfo() const{
    cout<<"["<<xpos<<", "<<ypos<<", "<<rad<<"]"<<endl;
    }
};

class Ring{
    private:
     Circle c1, c2;

    public:
    void Init(int x1, int y1, int r1, int x2, int y2, int r2){
         c1.Init(x1, y1, r1);
         c2.Init(x2, y2, r2);
     }

     void ShowRingInfo() const{
        cout<<"내측 원의 정보 [x, y, r]"<<endl;
        c1.ShowCircleInfo();
        cout<<"외측 원의 정보 [x, y, r]"<<endl;
        c2.ShowCircleInfo();
    }
     
};

int main(){
    Ring ring;
    ring.Init(1, 1, 4, 2, 2, 9);
    ring.ShowRingInfo();
    return 0;
}
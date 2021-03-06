#include <iostream>
using namespace std;

class Point{
    private:
     int xpos, ypos;
     
    public:
     Point() {}

     Point(int x, int y)
      : xpos(x), ypos(y) {}

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
     Point p;
     int rad;

    public:
     Circle() {}

     Circle(int x, int y, int r)
       : p(x, y), rad(r) {}

     void Init(int x, int y, int r){
         p.Init(x, y);
         rad=r;
     }

    void ShowCircleInfo() const{
    p.ShowPointInfo();
    cout<<"반지름 : "<<rad<<endl;
    }
};

class Ring{
    private:
     Circle c1, c2;

    public:
     Ring() {}

     Ring(int x1, int y1, int r1, int x2, int y2, int r2)
      : c1(x1, y1, r1), c2(x2, y2, r2) {}

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
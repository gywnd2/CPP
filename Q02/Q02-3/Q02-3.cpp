#include <iostream>

typedef struct __Point{
	int xpos;
	int ypos;
}Point;

Point *pt3=new Point;

Point& PntAdder(const Point &p1, const Point &p2){
	pt3->xpos=p1.xpos+p2.xpos;
	pt3->ypos=p1.ypos+p2.ypos;
	
	return *pt3;
}

int main(){
   Point *pt1=new Point;
   pt1->xpos=5;
   pt1->ypos=7;
   
   Point *pt2=new Point;
   pt2->xpos=5;
   pt2->ypos=7;
   
   Point &ptr=PntAdder(*pt1, *pt2);
   
   std::cout<<"pt1의 xpos : "<<pt1->xpos<<" pt1의 ypos : "<<pt1->ypos<<std::endl; 
   std::cout<<"pt2의 xpos : "<<pt2->xpos<<" pt2의 ypos : "<<pt2->ypos<<std::endl; 
   std::cout<<ptr.xpos<<" "<<ptr.ypos<<std::endl;
   
   delete pt1, pt2, pt3;
}

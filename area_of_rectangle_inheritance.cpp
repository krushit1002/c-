#include <iostream>

//Base class
class shape{
   public:
   void setwidth (int w){
       width = w;
   }
   void setheight (int h){
       height = h;
   }
protected:
   int width;
   int height;
};

//derived class
class rectangle: public shape{
    public:
    int getarea () {
        return (width*height);
    }
};

int main(){
    rectangle rect;
    
    rect. setwidth (5);
    rect. setheight (7);
    
//print the area of the object
    std::cout <<"total area: " <<rect.getarea() <<std::endl;
    
    return 0;
}

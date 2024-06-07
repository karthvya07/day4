//area and circumference of circle
#include<iostream>
using namespace std;


void circumfrence(int);///function prototype
void area(int r){
    float a=3.14*r*r;
    
   cout<<a<<endl;


}

int main(){
 area(3);
 circumfrence(3);

 


}
void circumfrence(int p)
{
    float c=2*3.14*p;
    cout<<c<<endl;

}
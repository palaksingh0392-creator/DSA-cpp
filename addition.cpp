#include <iostream>
using namespace std;
class add{
int a,b,c;
public:
void read();
void sum();
void display();
};

void add::read(){
    cout<<"enter the value of a and b:";
    cin>>a>>b;
}
void add::sum(){
c= a+b;
}

void add::display(){
    cout<<"\nvalue of a:"<<a;
    cout<<"\nvalue of b:"<<b;
    cout<<"\nthe addition of a and b is:"<<c;
}

int main(){
    add obj1;
    obj1.read();
    obj1.sum();
    obj1.display();
    return 0;
}
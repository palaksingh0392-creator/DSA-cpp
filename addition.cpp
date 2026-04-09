#include <iostream>
using namespace std;
class add{
int a,b,c;
public:
void read();
void sum();
void diaplay();
};

void add::read(){
    cout<<"enter the value of a and b:";
    cin>>a>>b;
}
void add::sum(){
c= a+b;
}

void add::diaplay(){
    cout<<"value of a:"<<a;
    cout<<"value of b:"<<b;
    cout<<"the addition of a and b is:"<<c;
}

int main(){
    add.obj1;
    obj1.read();
    obj1.sum();
    obj1.display();
    return 0;
}
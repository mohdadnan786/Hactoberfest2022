#include <iostream>

using namespace std;
class anu{
    int a ,b;
public:
    anu(int ,int);
    void printn(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }

};
anu::anu(int x , int y){
    a=x;
    b=y;
}

int main(){
    anu  a(4,6);
    a.printn();
    anu b (9,8);
    b.printn(); 
    return 0;
    
}

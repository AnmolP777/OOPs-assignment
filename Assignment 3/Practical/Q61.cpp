//61. Create a class Counter with a static data member to count the number of objects created.
#include<iostream>
using namespace std;

class Counter{
    private:
        static int  count ;
    
    public:
        Counter(){
            count++;
        }
        
        void c(){
            cout<<count;
        }
};

int Counter :: count = 0;

int main(){
    Counter c1 , c2 , c3 , c4;
    c4.c();
    return 0;
}
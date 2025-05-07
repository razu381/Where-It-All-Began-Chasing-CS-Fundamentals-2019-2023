#include<bits/stdc++.h>
using namespace std;


namespace one{
    void fun(void){
        cout << "I am namespace one" << endl;
    }
}
namespace two{
    void fun(void){
        cout << "I am namespace two" << endl;
    }
}
//using namespace one;
using namespace two;

int main(){

    fun();
}

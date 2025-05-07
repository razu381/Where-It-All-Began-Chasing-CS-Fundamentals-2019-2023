#include<bits/stdc++.h>
using namespace std;

class num{
private:
    int x;
    int pass;
public:
    num(int p){
        pass = p;
    }
    void setter(int a,int p)
    {
        if(pass == p){
            x = a;
        }
        else{
            cout << "password doesn't match";
        }

    }
    int getter(int p){
        if(pass == p){
            return x;
        }else{
            cout << "password doesn't match";
            return -1;
        }

    }
};

int main(){
    num num1(1234);
    num1.setter(500,1234);
    cout << num1.getter(1234);
}

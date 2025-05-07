#include<bits/stdc++.h>
using namespace std;

class parent{
public:
    int x;
private:
    int y;
protected:
    int z;
public:
    parent(int a, int b, int c){
        x = a;
        y = b;
        z = c;
    }

};

class child : public parent{
public:
    int xx;
    child(int aa,int a, int b, int c): parent(a,b,c){
        xx = aa;
    }
    void tell_protected(){
        cout << "Value of z is " << y << endl;
    }
};


int main(){
    parent pt(10,20,30);
    child ch(100,10,20,30);

    ch.tell_protected();
}


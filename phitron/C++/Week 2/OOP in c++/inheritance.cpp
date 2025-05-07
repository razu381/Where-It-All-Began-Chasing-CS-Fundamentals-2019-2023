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
    child(int aa,int a,int b,int c): parent(a,b,c){
        xx = aa;
    }
};

int main(){
    parent p1(10,20,30);
    child c1(1010,10,20,30);
    cout << c1.z << endl;
}


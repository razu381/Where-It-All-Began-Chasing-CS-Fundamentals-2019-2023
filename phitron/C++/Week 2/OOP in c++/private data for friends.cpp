#include<bits/stdc++.h>
using namespace std;

class parent{
private:
    int taka;
    int pass;
public:
    parent(int tk, int ps){
        taka = tk;
        pass = ps;
    }
    friend void tell_sec(parent *ptr);
};

//Friend Class
//class uncle{
//public:
//    void tellsecret(parent *ptr){
//        cout << ptr ->pass << endl;
//    }
//};

void tell_sec(parent *ptr){
    cout << "taka: " << ptr ->taka;
}

int main(){
    parent dad(1500,12345);
//    uncle senbag;
//    senbag.tellsecret(&dad);

    tell_sec(&dad);
}

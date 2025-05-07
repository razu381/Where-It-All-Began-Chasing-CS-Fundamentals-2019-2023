#include<bits/stdc++.h>
using namespace std;

class example{
public:
    int x;
    example(int a){
        x = a;
    }
};

int main(){
    example a(10) , b(20);
    cout << a.x + b.x;
}

#include<bits/stdc++.h>
using namespace std;


class overridened{
public:
    int add(int a, int b) {
        return a + b;
    }
    double add(double a, double b){
         return a + b;
    }
};

int main(){
    overridened x;
    cout << x.add(1.5,2.5);
}

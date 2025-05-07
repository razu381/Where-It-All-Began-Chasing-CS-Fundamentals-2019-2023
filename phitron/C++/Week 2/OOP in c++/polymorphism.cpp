#include<bits/stdc++.h>
using namespace std;

class example{
public:
    int add(int x, int y){
        return x+y;
    }
    double add(double x, double y){
        return x+y;
    }
};

int main(){
    example ex;

    cout << ex.add(5.0,.1);
}


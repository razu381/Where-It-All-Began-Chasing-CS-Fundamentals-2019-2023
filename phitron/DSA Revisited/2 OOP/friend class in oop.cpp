#include<bits/stdc++.h>
using namespace std;

class parent{
private:
    int taka;
public:
    parent(int tk){
        taka = tk;
    }
    friend class uncle;
};

class uncle{
public:
    void tell_the_secret(parent *ptr){
        cout << ptr -> taka << endl;
    }
};

int main(){
    parent pt(23000);
    uncle egg;
    egg.tell_the_secret(&pt);
}

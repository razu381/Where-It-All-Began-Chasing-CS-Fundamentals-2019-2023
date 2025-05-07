/*
#include<bits/stdc++.h>
using namespace std;

int main(){}
*/

#include<bits/stdc++.h>
using namespace std;

int pow(int x, int y){
    if(y == 0) return 1;
    if(y == 1) return x;
    int part = pow(x,y - 1);
    return part * x;
}

int main(){
    for(int i = 0; i < 5; i++){
        int num, y;
        cin >> num >> y ;
        cout << pow(num, y) << endl;
    }

}

#include<bits/stdc++.h>
using namespace std;

void evenorodd(int start, int end){
    if(start > end) return;

    cout << start << " ";

    evenorodd(start + 2, end);
}

int main(){
    int start, end;
    cin >> start >> end;

    evenorodd(start, end);

}

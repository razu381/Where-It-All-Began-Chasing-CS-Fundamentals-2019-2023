#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    int m;
    cin >> m;
    int b[m];
    for(int i = 0; i < m; i++) cin >> b[i];

    int a_max = *(max_element(a, a+n));
    int b_max = *(max_element(b,b+m));
    int the_max = max(a_max, b_max);

    int counter[the_max+1] = {0};
    for(int i = 0; i < n; i++) counter[a[i]]++;
    for(int i = 0; i < m; i++) counter[b[i]]++;

    for(int i = 0; i < the_max+1 ; i++){
        if(counter[i] > 1) cout << i << " ";
    }
    cout << endl;

}

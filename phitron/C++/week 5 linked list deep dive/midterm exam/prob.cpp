#include<bits/stdc++.h>
using namespace std;
int n,last,l[101],r[101];
int main()
{
    cin >> n;
	for(int i = 1; i <= n; i++){
        cin >> l[i] >> r[i];
	}
	for(int i = 1;i <= n; i++){
		if(l[i] == 0){
			l[i] = last;
			r[last] = i;
			last = i;
			while(1){
				if(r[last] == 0){
                   break;
				}
				last = r[last];
			}
		}
	}
	for(int i = 1; i <= n; i++){
        cout << l[i] << " " << r[i] << endl;
	}
}

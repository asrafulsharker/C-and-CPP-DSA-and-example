#include <bits/stdc++.h>
using namespace std;

int main(){
int arr[5];
for(int i = 0; i<=4; i++){
cin >> arr[i];
}
int sum = 0;
for (int i = 0; i<=4; i++){
sum = sum + arr[i];

}
cout << sum << " ";
return 0;
}

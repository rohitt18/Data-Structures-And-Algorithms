#include<iostream>
using namespace std;

int power(int x,int n){
    int ans = 1;
    for(int i=1;i<=n;i++){
        ans = ans * x;
    }
    return ans;
}

int main(){
    int a,b;
    cin>>a>>b;
    
    int ans = power(a,b);
    cout<<ans;

    return 0;
}

// int main() {
//     int n;
//     cin>>n;
//     int sum = 0;

//     for(int i=1;i<=n;i++){
//         sum = sum + i;
//     }
//     cout<<sum;
// }
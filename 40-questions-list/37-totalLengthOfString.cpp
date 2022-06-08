
#include <iostream>
using namespace std;

int getLength(char a[]){
    int count=0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main(){
    
    char a[5];
    cin>>a;

    int ans = getLength(a);
    cout<<ans;

    return 0;
}
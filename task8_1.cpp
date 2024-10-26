#include <iostream>
using namespace std;

long long int stepen(int a, int b){
    if (b==0){
        return 1;
    }
    if (b%2==0){
        return stepen(a*a,b/2);
    }
    return a*stepen(a,b-1);
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<stepen(a,b);
    return 0;
}
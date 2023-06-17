#include <iostream>
using namespace std;

void printStar(int n){
    for(int i=0; i<n; i++){
        cout<<"*";
    }
}
void printSpace(int n){
    for(int i=0; i<n; i++){
        cout<<" ";
    }
}

int main() {
    int n;
    cin>>n;
    
    // Print upper half of pattern
    for(int i=1; i<=n; i++){
        printSpace(n-i);
        printStar(1);
        printSpace(2*(i-1)); // odd space
        if(i>1){
            printStar(1);
        }
        cout<<endl;
    }

    // Print lower half of pattern
    for(int i=n-1; i>=1; i--){
        printSpace(n-i);
        printStar(1);
        printSpace(2*(i-1)); // odd space
        if(i>1){
            printStar(1);
        }
        cout<<endl;
    }
}

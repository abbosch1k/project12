#include <iostream>
#include <chrono>
using namespace std;
int main(){
    int c=0;
    auto s=chrono::steady_clock::now();
    while(chrono::steady_clock::now()-s<chrono::seconds(2)){
        c++;
    }
    cout<<"Ops: "<<c;
}

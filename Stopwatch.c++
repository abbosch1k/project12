#include <iostream>
#include <chrono>
using namespace std;
int main(){
    auto s=chrono::steady_clock::now();
    cin.get();
    auto e=chrono::steady_clock::now();
    cout<<chrono::duration_cast<chrono::milliseconds>(e-s).count();
}

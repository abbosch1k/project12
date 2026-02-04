#include <iostream>
#include <bitset>
using namespace std;

int main(){
    bitset<8> b;
    b.set(3); b.set(5);
    cout<<b.test(3);
}

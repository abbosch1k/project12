#include <iostream>
using namespace std;

string call(string m){
    return "Response to "+m;
}

int main(){
    cout<<call("ping");
}

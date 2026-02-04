#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    unordered_map<string,string> kv;
    kv["name"]="app";
    cout<<kv["name"];
}

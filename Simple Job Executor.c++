#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<string> jobs={"build","test","deploy"};
    for(auto &j:jobs) cout<<"Run "<<j<<"\n";
}

#include <iostream>
#include <thread>
using namespace std;

int main(){
    for(int i=1;i<=3;i++){
        cout<<"Try "<<i<<"\n";
        this_thread::sleep_for(chrono::seconds(i));
    }
}

#include <iostream>
#include <thread>
using namespace std;
int main(){
    for(int i=0;i<3;i++){
        cout<<"Heartbeat\n";
        this_thread::sleep_for(chrono::seconds(1));
    }
}

#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main(){
    auto last=chrono::steady_clock::now();
    while(true){
        if(chrono::steady_clock::now()-last>chrono::seconds(2)){
            cout<<"Timeout\n";
            break;
        }
        this_thread::sleep_for(chrono::seconds(1));
    }
}

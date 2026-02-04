#include <iostream>
#include <thread>
#include <mutex>
using namespace std;
int c=0; mutex m;
void inc(){ for(int i=0;i<1000;i++){ lock_guard<mutex> g(m); c++; } }
int main(){
    thread t1(inc),t2(inc);
    t1.join();t2.join();
    cout<<c;
}

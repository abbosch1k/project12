#include <iostream>
using namespace std;

int main(){
    int buf[3]={0};
    int idx=0;
    for(int i=1;i<=5;i++){
        buf[idx]=i;
        idx=(idx+1)%3;
    }
    for(int v:buf) cout<<v<<" ";
}

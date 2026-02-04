#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int> q; q.push(1); q.push(2);
    while(!q.empty()){
        cout<<"Work "<<q.front()<<"\n";
        q.pop();
    }
}

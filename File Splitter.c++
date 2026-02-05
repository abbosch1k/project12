#include <fstream>
int main(){
    std::ifstream in("big.txt");
    std::ofstream out("part.txt");
    char c; int cnt=0;
    while(in.get(c) && cnt++<100) out<<c;
}

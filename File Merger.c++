#include <fstream>
int main(){
    std::ofstream out("all.txt");
    std::ifstream a("a.txt"), b("b.txt");
    out<<a.rdbuf()<<b.rdbuf();
}

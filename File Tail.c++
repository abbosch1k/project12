#include <fstream>
#include <iostream>
#include <string>
int main(){
    std::ifstream f("log.txt");
    std::string line,last;
    while(std::getline(f,line)) last=line;
    std::cout<<last;
}

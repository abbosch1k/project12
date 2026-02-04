#include <iostream>
#include <cstdlib>
int main(){
    for(int i=0;i<8;i++) std::cout<<std::hex<<(rand()%16);
}

#include <iostream>
#include "Assets.h"

using std::cout;
using std::endl;

int main() {
    Assets SPUEmployee01;
    Assets SPUStudent01("CSC2430"); //name parameter constructor is called
    Assets SPUStudent02 = SPUStudent01;//Copy assignment

    SPUStudent01.AddTag("Tag-3021");
    SPUStudent01.AddTag("Tag-3022");
    SPUStudent01.AddTag("Tag-3023");

    cout<<SPUStudent01.ToString()<<endl;
    cout<<SPUStudent01.ToString()<<endl;
    cout<<SPUStudent02.ToString()<<endl;
}
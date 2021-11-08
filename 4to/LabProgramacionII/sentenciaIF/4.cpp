#include <iostream>
#include <string>
int main(){
    int a, b, c;
    std::string status;
    std::cin >> a >> b >> c;
    (a+b+c)/3 >= 7 ? status = "Aprobo" : status = "No aprobo";
    std::cout << status << "\n";
    return 0;
}
//номер в журнале 1 подгруппы - 8
#include <iostream>
#include <cmath>
int main() {
    float x, a, c, f, z, y;
    unsigned int zint;
    std::cout << "Enter z: " << std::endl;
    std::cin >> z; 
    std::cout << "Enter a: " << std::endl;
    std::cin >> a;
    std::cout << "Enter c: " << std::endl;
    std::cin >> c; 
    zint=(unsigned int)z & 0x80000000; 
    switch(  zint ) {
        case 0:
                    x = 2 * z + 1;
                    f = 2 * x;
                    break;
        default:
                    x = log(pow(z, 2) - z);
                    f = pow(x, 3);
    }
    y = pow(f , 2) + a * pow( cos(x * x * x), 5) + c * log(pow(x, 0.4));
    std::cout << y << std::endl;
    
    return 0;
}
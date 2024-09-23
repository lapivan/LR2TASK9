//номер в журнале 1 подгруппы - 8
#include <iostream>
#include <cmath>
int main() {
    float x, a, c, f, y;
    int z;
    std::cout << "Enter z: " << std::endl;
    std::cin >> z; 
    std::cout << "Enter a: " << std::endl;
    std::cin >> a;
    std::cout << "Enter c: " << std::endl;
    std::cin >> c;  
    switch( z ) {
        case 0 ... 0x7FFFFFFF:
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
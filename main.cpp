#include <iostream>
#include <sstream>
#include <cmath>

int main() {
    float speed = 0.0f;
    float delta;

    do{
        std::stringstream text;
        std::cout << "input change of speed!" << std::endl;
        std::cin >> delta;
        speed+=delta;
        if(speed > 150){
            speed = 150;
        } else if(speed < 0) {
            speed = 0;
        }
        text << "Car velocity is " << round(speed*10)/10 << " km/h.";
        std::cout << text.str() << std::endl;

    }while(abs(speed - 0.0f)>0.01f);
    std::cout << "Good bye!" << std::endl;

    return 0;
}

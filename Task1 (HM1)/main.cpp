//
//  main.cpp
//  Task1 (HM1)
//
//  Created by Никита on 3/22/22.
//

#include <iostream>
#include <string>
#include <cassert>

void isItSuitable (const int &length1, const int &width1, const int &length2, const int &width2) {
    std::cout << "\n------------------------------------------\n";
    if ((length2 <= length1 && width2 <= width1) || (length2 <= width1 && width2 <= length1)) {
        std::cout << "\nRectfngle can be placed into another rectangle!\n\n";
    } else {
        std::cout << "\nRectfngle can't be placed into another rectangle.\n\n ";
    }
}

int main() {
 
    std::cout << "\nEnter the length of outside rectangle:\nlength1 = ";
    int length1 {0};
    std::cin >> length1;
    assert(length1 >= 0);
    
    std::cout << "\nEnter the width of outside rectangle:\nwidth1 = ";
    int width1 {0};
    std::cin >> width1;
    assert(width1 >= 0);
    
    std::cout << "\nEnter the length of inside rectangle:\nlength2= ";
    int length2 {0};
    std::cin >> length2;
    assert(length2 >= 0);
    
    std::cout << "\nEnter the width of inside rectangle:\nwidth2= ";
    int width2 {0};
    std::cin >> width2;
    assert(width2 >= 0);
    
    isItSuitable(length1, width1, length2, width2);
    return 0;
}

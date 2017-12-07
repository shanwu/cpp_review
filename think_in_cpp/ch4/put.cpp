#include "put.h"
#include <string>
#include <iostream>

void Put::put_str(std::string content) {
    std::cout<< content << std::endl;
}

void Put::set_color(std::string color) {
    font_color = color;
}

std::string Put::get_color() {
    return font_color;
} 

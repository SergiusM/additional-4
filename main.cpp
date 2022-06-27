#include <iostream>
#include "lib/bmp.hpp"

int main() {
    BMP image;
    image.readBMP("karin.bmp");

    std::string word;
    std::cin >> word;
    image.shifr(word);
    //image.ashifr();

    image.writeBMP("karout.bmp");

    return 0;
}
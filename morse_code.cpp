#include <iostream>
#include <string>
#include <map>

int main() {
    std::map < char, std::string > morse;
    morse['A'] = ".-";
    morse['a'] = ".-";
    morse['B'] = "-...";
    morse['b'] = "-...";
    morse['C'] = "-.-.";
    morse['c'] = "-.-.";
    morse['D'] = "-..";
    morse['d'] = "-..";
    morse['E'] = ".";
    morse['e'] = ".";
    morse['F'] = "..-.";
    morse['f'] = "..-.";
    morse['G'] = "--.";
    morse['g'] = "--.";
    morse['H'] = "....";
    morse['h'] = "....";
    morse['I'] = "..";
    morse['i'] = "..";
    morse['J'] = ".---";
    morse['j'] = ".---";
    morse['K'] = "-.-";
    morse['k'] = "-.-";
    morse['L'] = ".-..";
    morse['l'] = ".-..";
    morse['M'] = "--";
    morse['m'] = "--"; 
    morse['N'] = "-.";
    morse['n'] = "-.";
    morse['O'] = "---";
    morse['o'] = "---";
    morse['P'] = ".--.";
    morse['p'] = ".--.";
    morse['Q'] = "--.-";
    morse['q'] = "--.-";
    morse['R'] = ".-.";
    morse['r'] = ".-.";
    morse['S'] = "...";
    morse['s'] = "...";
    morse['T'] = "-";
    morse['t'] = "-";
    morse['U'] = "..-";
    morse['u'] = "..-";
    morse['V'] = "...-";
    morse['v'] = "...-";
    morse['W'] = ".--";
    morse['w'] = ".--";
    morse['X'] = "-..-";
    morse['x'] = "-..-";
    morse['Y'] = "-.--";
    morse['y'] = "-.--";
    morse['Z'] = "--..";
    morse['z'] = "--..";

    std::string input;

    std::getline(std::cin, input);

    for (int i = 0; i < input.length(); i++) {
        char c = input[i];
        if (morse.find(c) != morse.end()) {
            std::cout << morse[c] << " ";
        }
    }
}
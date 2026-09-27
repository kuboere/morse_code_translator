#include <iostream>
#include <string>

int main() {
    std::cout << "===================\n";
    std::cout << "Password Checker 🔐\n";
    std::cout << "===================\n";

    std::string password;
    bool valid = false;

    do {
        bool hasNumber  = false;
        bool hasSpecial = false;

        std::cout << "Enter your password: ";
        std::cin >> password;
        std::cout << "\n";

        if (password.length() >= 8) {
            for (int i = 0; i < password.length(); i++) {
                char c = password[i];
                if (c >= '0' && c <= '9') {
                    hasNumber = true;
                }
                else if ((c >= '!' && c <= '/') || (c >= ':' && c <= '@') || (c >= '[' && c <= '`') || (c >= '{' && c <= '~')) {
                    hasSpecial = true;
                }
            }
        }

        if (password.length() < 8) {
            std::cout << "❌ Password must be at least 8 characters.\n";
        }
        else if (!hasNumber) {
            std::cout << "❌ Password must include a number.\n";
        }
        else if (!hasSpecial) {
            std::cout << "❌ Password must include a special character.\n";
        }
        else {
            std::cout << "✅ Valid password!\n";
            valid = true;
        }

    } while (!valid);
}
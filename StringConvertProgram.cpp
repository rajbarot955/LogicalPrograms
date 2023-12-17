#include<iostram.h>
int main() {
    std::string str = "hello";

    for (size_t i = 0; i < str.size(); ++i) {
        if (std::islower(str[i])) {
            str[i] = str[i] - 'a' + 'A';
        }
    }

    std::cout << "Converted string: " << str << std::endl;

    return 0;
}
#include <string>

std::string getString(int personNumber);
int getInt(std::string_view person);

void printWhoIsOlder(std::string_view person1, std::string_view person2, int age1, int age2);

int main() {
    const std::string person1{getString(1)};
    const int age1{getInt(person1)};

    const std::string person2{getString(1)};
    const int age2{getInt(person1)};

    if (age1 > age2) {
        printWhoIsOlder(person1, person2, age1, age2);
    } else {
        printWhoIsOlder(person2, person1, age2, age1);
    }

    return 0;
}

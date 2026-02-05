#include <iostream>
#include <string_view>

std::string_view getQuantityPhrase(int apples) {
    if (apples == 0) {
        return "0";
    } else if (apples == 1) {
        return "a single";
    } else if (apples == 2) {
        return "a couple of";
    } else if (apples == 3) {
        return "a few";
    } else if (apples > 3) {
        return "many";
    } else {
        return "negative";
    }
}

std::string_view getApplesPluralized(int apples) {
    if (apples == 1) {
        return "apple";
    } else {
        return "apples";
    }
}

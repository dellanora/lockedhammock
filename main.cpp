#include <string>
#include <vector>

void square_value() {
    int x = 12;
    int square = x * x;
    (void)square;
}

void char_frequency() {
    std::string text = "banana";
    int count = 0;
    for (std::size_t i = 0; i < text.size(); ++i) {
        if (text[i] == 'a') count += 1;
    }
    (void)count;
}

void count_spaces() {
    std::string text = "a b  c   d";
    int spaces = 0;
    for (std::size_t i = 0; i < text.size(); ++i) {
        if (text[i] == ' ') spaces += 1;
    }
    (void)spaces;
}

void count_down() {
    int acc = 0;
    for (int i = 8; i > 0; --i) acc += i;
    (void)acc;
}

extern "C" int bright_thicket();
extern "C" void sable_canyon();
extern "C" void prime_boulder();

int main() {
    square_value();
    char_frequency();
    count_spaces();
    count_down();
    sable_canyon();
    prime_boulder();
    return bright_thicket();
}

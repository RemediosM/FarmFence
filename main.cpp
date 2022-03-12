#include <iostream>
#include "Chat.h"
#include "Calculations.h"

using namespace std;

int main() {

    Chat chat;
    int fence_length = chat.getFenceLength();
    if(fence_length > 0) {
        Calculations calculate;
        int a = calculate.calculateA(fence_length);
        int b = calculate.calculateB(fence_length);
        long long area = calculate.calculateArea(a, b);
        chat.displayResults(a, b, area);
    }

    return 0;
}

#include <iostream>

#include "window/WindowManager.hpp"

int main() {
    WindowManager windowManager;

    try {
        windowManager.run();
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}

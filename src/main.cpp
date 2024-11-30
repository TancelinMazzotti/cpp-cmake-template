#include <iostream>
#include <chrono>

#include "core/App.hpp"

int main() {
    std::cout << "### START TEMPLATE ###" << std::endl;
    const auto start{std::chrono::steady_clock::now()};
    
    core::App app;
    app.init();
    app.run();
    
    const auto end{std::chrono::steady_clock::now()};
    const std::chrono::duration<double> elapsed_seconds{end - start};
    std::cout << "Elapsed seconds: " << elapsed_seconds.count() << std::endl;
    std::cout << "### END TEMPLATE ###" << std::endl;
    return 0;
}

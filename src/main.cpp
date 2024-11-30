#include <iostream>
#include <exception>

#include "core/App.hpp"

int main() {
    std::cout << "### START TEMPLATE ###" << std::endl;
    
    core::App app;
    try
    {
        app.init();
        app.run();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        std::cout << "### END TEMPLATE FAILURE ###" << std::endl;
        return EXIT_FAILURE;
    }
    
    std::cout << "### END TEMPLATE SUCCESS ###" << std::endl;
    return EXIT_SUCCESS;
}

#include <iostream>
#include <string>
#include "shared_ptr.hpp"


int main() {
    auto ptr = cs::make_shared(5);
    std::cout << "use_count: " << ptr.use_count();
}

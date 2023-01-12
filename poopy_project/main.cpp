#include <iostream> 

int main(int argc, char* argv[])
{
    if (1 == argc ) {
        std::cout << argv[0] << std::endl;
    } else {
        for ( int i = 0 ; i < argc ; ++i) {
            std::cout << argv[i] << std::endl;
        }
    }

    return 0;
}
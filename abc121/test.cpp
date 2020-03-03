#include <algorithm>
#include <iostream>

#define SIZE_OF_ARRAY(array)(sizeof(array)/sizeof(array[0]))

namespace {
    void printElems(const int* begin, const int* end)
    {
        for (const int* p = begin; p != end; ++p) {
            std::cout << *p << std::ends;
        }
        std::cout << std::endl;
    }
}

int main()
{
    int array[] = {5, 4, 7, 2, 8, 7, 3};

    std::sort(array, array + SIZE_OF_ARRAY(array));
    printElems(array, array + SIZE_OF_ARRAY(array));
}

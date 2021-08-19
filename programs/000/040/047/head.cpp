#include <iterator>

template<typename Array>
int getArraySize(Array array[]) {
    return std::size(array);
}
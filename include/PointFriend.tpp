#include <PointFriend.hpp>

namespace app {

template<class T>
T PointFriend::stupidSum(Point<T> point) {
    return point.i + point.j + point.k;
}

template<class T>
void PointFriend::describe(Point<T> point) {
    std::cout << point.i << std::endl;
}

} // namespace app

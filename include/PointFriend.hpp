#ifndef POINT_FRIEND_H
#define POINT_FRIEND_H

#include <iostream>

namespace app {
template<class>
class Point;

class PointFriend {
public:
    PointFriend();
    ~PointFriend();

    template<class T>
    T stupidSum(Point<T> point);

    template<class T>
    void describe(Point<T> point);
private:
};

} // namespace app

#include "PointFriend.tpp"

#endif

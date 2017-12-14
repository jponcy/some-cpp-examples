#ifndef POINT_H
#define POINT_H

#include <PointFriend.hpp>

namespace app {

template<class T>
class Point {
public:
    Point(T i, T j, T k) : i(i), j(j), k(k) {}
    ~Point() {}

    friend class PointFriend;

     template<typename K>
     friend void PointFriend::describe(Point<K> point);
     template<typename K>
     friend K PointFriend::stupidSum(Point<K> point);
private:
    T i, j, k;
};

} // namespace app
#endif

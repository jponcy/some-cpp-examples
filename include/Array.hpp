#ifndef APP_ARRAY_H
#define APP_ARRAY_H

#include <vector>

namespace app {

/** Custom fake class to create custom array with simplified rules/possibilities. */
template<class T>
class Array {
public:
    /** Default constructor. */
    Array() {}
    /** Constructor. */
    template<size_t size>
    Array(const T (&values)[size]) {
        for (T v : values) {
            add(v);
        }
    }
    /** Destructor. */
    ~Array() {}

    /** Add an element. */
    void add(T element) {
        values.push_back(element);
    }
    /** Remove an element. */
    void remove(T element) {
        values.remove(element);
    }
    /** Gets the element. No check about out of bound. */
    T operator[](int index) {
        return values.at(index);
    }
private:
    std::vector<T> values;
};

} // namespace app
#endif

#ifndef FakeMath_H
#define FakeMath_H

namespace app {

class FakeMath {
public:
  FakeMath();
  ~FakeMath();

  template<typename T>
  static T min(T one, T second) {
    return (one < second ? one : second);
  }

private:
};

} // namespace app
#endif

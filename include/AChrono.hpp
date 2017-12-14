#ifndef INCLUDE_ACHRONO_HPP
#define INCLUDE_ACHRONO_HPP

namespace app {

class AChrono {
public:
  AChrono() {}
  virtual ~AChrono() {}

  virtual unsigned short hours() = 0;
};

} /* namespace app */

#endif /* INCLUDE_ACHRONO_HPP */

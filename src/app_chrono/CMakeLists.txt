set(CHRONO_SRC Chrono.cpp)

add_library(chrono SHARED ${CHRONO_SRC})

## Tests.
# if(SHOULD_TEST)
  ## Could run.
  add_test(can_execute "${bin}/exe")
# endif(SHOULD_TEST)

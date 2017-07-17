rock_library(plain_package
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_executable(plain_package_bin Main.cpp
    DEPS plain_package)


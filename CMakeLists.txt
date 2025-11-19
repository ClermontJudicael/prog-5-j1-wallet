cmake_minimum_required(VERSION 3.10)

project(MyProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Enable compile commands for clang-tidy
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Add sources
add_executable(myapp
    src/main.cpp
)

# Example: If wallet.h later has a wallet.cpp, add it here
# add_executable(myapp src/main.cpp src/wallet.cpp)

# Optional: Add warnings
if (CMAKE_CXX_COMPILER_ID MATCHES "Clang|GNU")
    target_compile_options(myapp PRIVATE -Wall -Wextra -Wpedantic)
elseif (MSVC)
    target_compile_options(myapp PRIVATE /W4 /permissive-)
endif()

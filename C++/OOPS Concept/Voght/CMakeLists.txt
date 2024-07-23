cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Specify the path to MySQL Connector/C++ configuration
set(MySQLConnectorCpp_DIR "/Users/sayanchatterjee/Work/MySQL/mysql-connector-c++-9.0.0-macos14-arm64")
find_package(mysql-concpp REQUIRED)
target_link_libraries(my_target PRIVATE mysql::concpp)

# Find the MySQL Connector/C++ package
find_package(MySQLConnectorCpp REQUIRED)

# Add your executable or library
add_executable(my_program main.cpp)

# Link the MySQL Connector/C++ library
target_link_libraries(my_program PRIVATE ${MySQLConnectorCpp_LIBRARIES})

# Include directories for MySQL Connector/C++ headers
target_include_directories(my_program PRIVATE ${MySQLConnectorCpp_INCLUDE_DIRS})

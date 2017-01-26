cmake_minimum_required(VERSION 3.5)
project(PackageTest)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

find_package(Qt5Core) 
find_package(Qt5Sql) 
find_package(Qt5Test) 

set( CMAKE_AUTOMOC ON)
set( CMAKE_AUTOUIC ON)
set( CMAKE_INCLUDE_CURRENT_DIR ON)

add_executable(packageTest main.cpp util.cpp Author.cpp Book.cpp BookWithNullAuthor.cpp tst_QDjangoModel.cpp )
target_link_libraries(packageTest ${CONAN_LIBS} Qt5::Core Qt5::Sql Qt5::Test)

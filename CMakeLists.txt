cmake_minimum_required(VERSION 3.10)
project(CharacterBuilderPattern)

set(CMAKE_CXX_STANDARD 17)

# Статическая библиотека
add_library(CharacterBuilder STATIC
    include/Character.h
    include/CharacterBuilder.h
    include/Item.h
    src/Character.cpp
#    src/CharacterBuilder.cpp
    src/HeroBuilder.cpp
    src/Director.cpp
)

# Основной исполняемый файл
add_executable(character_example main.cpp)
target_link_libraries(character_example PRIVATE CharacterBuilder)

# Включаем поддержку тестирования
enable_testing()
find_package(GTest REQUIRED)
find_package(Threads REQUIRED)

# Тесты для класса Character
add_executable(test_Character tests/test_Character.cpp)
target_include_directories(test_Character PRIVATE include)
target_link_libraries(test_Character PRIVATE
    CharacterBuilder
    GTest::GTest
    GTest::Main
    ${CMAKE_THREAD_LIBS_INIT}
)
add_test(NAME test_Character COMMAND test_Character)

# Тесты для CharacterBuilder
add_executable(test_CharacterBuilder tests/test_CharacterBuilder.cpp)
target_include_directories(CharacterBuilder PUBLIC
    ${PROJECT_SOURCE_DIR}/include
)
target_include_directories(test_CharacterBuilder PRIVATE include)
target_link_libraries(test_CharacterBuilder PRIVATE
    CharacterBuilder
    GTest::GTest
    GTest::Main
    ${CMAKE_THREAD_LIBS_INIT}
)
add_test(NAME test_CharacterBuilder COMMAND test_CharacterBuilder)

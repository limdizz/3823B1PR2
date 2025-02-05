set(target test_list)

file(GLOB hdrs "*.h*")
file(GLOB srcs "*.cpp")

add_executable(${target} ${srcs} ${hdrs} "test_main.cpp")
target_link_libraries(${target} gtest)

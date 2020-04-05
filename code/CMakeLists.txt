cmake_minimum_required (VERSION 3.11.4)
project(test)

include_directories("../leveldb/include")

#find_library(MY_LEVELDB_LIB leveldb "../leveldb/build" NO_DEFAULT_PATH)
link_directories("../leveldb/build")
link_libraries(leveldb)
link_libraries(pthread)

add_executable(main main.cc)

#target_link_libraries(main libleveldb.a)

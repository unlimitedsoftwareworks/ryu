cmake_minimum_required(VERSION 2.6)
project(ryu)

set (PROJECT_INCLUDE_DIR
	${PROJECT_SOURCE_DIR}/include
)

set (PROJECT_SRCS
	${PROJECT_SOURCE_DIR}/source/main.c
)

include_directories(${PROJECT_INCLUDE_DIR})
add_executable(ryu ${PROJECT_SRCS})

install(TARGETS ryu RUNTIME DESTINATION bin)
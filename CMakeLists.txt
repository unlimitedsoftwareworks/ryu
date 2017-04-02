cmake_minimum_required(VERSION 2.6)
project(ryu)

set (PROJECT_INCLUDE_DIR
	${PROJECT_SOURCE_DIR}/include
	${PROJECT_SOURCE_DIR}/vendor/memory
	${PROJECT_SOURCE_DIR}/vendor/profiler
)

set (PROJECT_SRCS
	${PROJECT_SOURCE_DIR}/source/main.c
	${PROJECT_SOURCE_DIR}/source/ryu_cpu.c
	${PROJECT_SOURCE_DIR}/source/ryu_stack.c
	
	${PROJECT_SOURCE_DIR}/vendor/memory/memory.c
)

include_directories(${PROJECT_INCLUDE_DIR})
add_executable(ryu ${PROJECT_SRCS})

install(TARGETS ryu RUNTIME DESTINATION bin)

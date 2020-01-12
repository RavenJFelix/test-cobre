cmake_minimum_required(VERSION 3.16.1 FATAL_ERROR)

add_subdirectory(cobre)
set(dir_links
	${links}
	cobre)

list(TRANSFORM dir_links PREPEND ${CMAKE_CURRENT_SOURCE_DIR}/)

set(links
	${links}
	${dir_links}
	PARENT_SCOPE)

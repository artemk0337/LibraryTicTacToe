
if(USE_SHARED_LIB)
    set(LIB_TYPE SHARED)
else()
    set(LIB_TYPE STATIC)
endif()

add_library(libtictactoe game.cpp board.cpp settings.cpp history.cpp)
target_include_directories(libtictactoe PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
add_library(libtictactoe game.cpp board.cpp settings.cpp history.cpp)
target_include_directories(libtictactoe PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
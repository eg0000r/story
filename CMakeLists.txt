cmake_minimum_required(VERSION 3.16)
project(StoryBuilder)

set(CMAKE_CXX_STANDARD 14)

find_package(wxWidgets COMPONENTS all REQUIRED)

include(${wxWidgets_USE_FILE})

add_executable(StoryBuilder App.cpp App.h gui/MainWindow.cpp gui/MainWindow.h gui/GenMainWindow.cpp gui/GenMainWindow.h tinyxml2/tinyxml2.cpp tinyxml2/tinyxml2.h)

target_link_libraries(StoryBuilder ${wxWidgets_LIBRARIES})


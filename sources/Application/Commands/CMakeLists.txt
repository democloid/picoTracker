add_library(application_commands
  ApplicationCommandDispatcher.h ApplicationCommandDispatcher.cpp
  CommandDispatcher.h CommandDispatcher.cpp
  EventDispatcher.h EventDispatcher.cpp
  NodeList.h
)

target_link_libraries(application_commands PUBLIC system_process)

target_include_directories(application_commands PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

include_directories(${PROJECT_SOURCE_DIR})

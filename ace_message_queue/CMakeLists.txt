PROJECT (ace_message_queue)
CMAKE_MINIMUM_REQUIRED (VERSION 2.8)

SET (ace_message_queue_SOURCE_FILES main.cpp) 
INCLUDE_DIRECTORIES (${ACE_INCLUDE_DIRS}) 
LINK_DIRECTORIES (${ACE_LIBRARY_DIRS}) 
ADD_DEFINITIONS (${ACE_DEFINITIONS})
ADD_EXECUTABLE (ace_message_queue ${ace_message_queue_SOURCE_FILES})
TARGET_LINK_LIBRARIES (ace_message_queue ${ACE_LIBRARIES})


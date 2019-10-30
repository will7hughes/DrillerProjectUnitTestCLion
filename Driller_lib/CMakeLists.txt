project(Driller)

set(HEADER_FILES
        DrillingRecord.h
        )

set(SOURCE_FILES
        DrillingRecord.cpp Exceptions.h)

add_library(Driller_lib STATIC ${SOURCE_FILES} ${HEADER_FILES})
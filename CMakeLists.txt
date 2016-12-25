cmake_minimum_required(VERSION 3.6)
project(seshat)


set(CMAKE_CXX_COMPILER "/usr/local/bin/g++-6")
#set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++03 -fpermissive")
set(CMAKE_VERBOSE_MAKEFILE ON)

set(Boost_USE_STATIC_LIBS ON)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME ON)
add_definitions(
    -Wfatal-errors
)
find_package(Boost 1.6.0 COMPONENTS system)
find_package(XercesC 3.1.4)

if(Boost_FOUND AND XercesC_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
    include_directories(${XercesC_INCLUDE_DIRS})
    add_executable (seshat
            #rnnlib4seshat/Helpers.hpp
            online.cc
            featureson.cc
            symfeatures.cc
            seshat.cc
            gmm.cc
            grammar.cc
            featureson.cc
            online.cc
            production.cc
            gparser.cc
            duration.cc
            cellcyk.cc
            hypothesis.cc
            logspace.cc
            meparser.cc
            sample.cc
            segmentation.cc
            seshat.cc
            sparel.cc
            stroke.cc
            symfeatures.cc
            symrec.cc
            tablecyk.cc
            rnnlib4seshat/ClassificationLayer.cpp
            rnnlib4seshat/Layer.cpp
            rnnlib4seshat/DataExporter.cpp
            rnnlib4seshat/Mdrnn.cpp
            rnnlib4seshat/Optimiser.cpp
            rnnlib4seshat/Random.cpp
            rnnlib4seshat/WeightContainer.cpp
            )

    target_link_libraries(seshat ${Boost_LIBRARIES} ${XercesC_LIBRARIES})
endif()



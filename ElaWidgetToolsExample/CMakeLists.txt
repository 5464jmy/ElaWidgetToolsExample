project(ElaWidgetToolsExample VERSION 0.1 LANGUAGES CXX)

# Enable automatic handling for Qt features
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Specify UTF-8 support for MSVC
add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/utf-8>")
add_definitions(-DELAWIDGETTOOLS_LIBRARY)

# Find Qt packages
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

# Main include directory for ElaWidgetTools
set(ElaWidgetToolsINCLUDE D:/element/ElaWidgetTools)

# Initialize sources list
set(sources_files)

# Add ElaWidgetTools sources
file(GLOB_RECURSE TEMP_SOURCE_FILES
        "${ElaWidgetToolsINCLUDE}/*.cpp"
        "${ElaWidgetToolsINCLUDE}/*.h"
)
list(APPEND sources_files ${TEMP_SOURCE_FILES})

# Define additional directories to search for sources
set(DIRECTORIES
        "${CMAKE_CURRENT_SOURCE_DIR}/CSPage"
        "${CMAKE_CURRENT_SOURCE_DIR}/ExamplePage"
        "${CMAKE_CURRENT_SOURCE_DIR}/ModelView"
        "${CMAKE_CURRENT_SOURCE_DIR}/src"
        # Add more directories if needed
)

# Collect additional source files
foreach(DIR IN LISTS DIRECTORIES)
    file(GLOB_RECURSE TEMP_SOURCE_FILES "${DIR}/*.cpp" "${DIR}/*.h")
    list(APPEND sources_files ${TEMP_SOURCE_FILES})
endforeach()

# Set the include directories
include_directories(
        ${ElaWidgetToolsINCLUDE}/include
        ${ElaWidgetToolsINCLUDE}/private
        ${ElaWidgetToolsINCLUDE}/DeveloperComponents
        ${CMAKE_CURRENT_SOURCE_DIR}/CSPage
        ${CMAKE_CURRENT_SOURCE_DIR}/ExamplePage
        ${CMAKE_CURRENT_SOURCE_DIR}/ModelView
        ${CMAKE_CURRENT_SOURCE_DIR}/src
)

# Define the libraries to link against
set(LIBS
        Qt${QT_VERSION_MAJOR}::Widgets
        D3D11
        DXGI
)

# Set project sources
set(PROJECT_SOURCES
        ${sources_files}
)

# Add resource files
qt5_add_resources(PROJECT_SOURCES
        "D:/element/ElaWidgetTools/include/ElaWidgetTools.qrc"
        ElaWidgetToolsExample.qrc
)

# Create the executable
add_executable(ElaWidgetToolsExample ${PROJECT_SOURCES})

# Link libraries
target_link_libraries(ElaWidgetToolsExample PRIVATE ${LIBS})

# Set executable properties
set_target_properties(ElaWidgetToolsExample PROPERTIES
        ${BUNDLE_ID_OPTION}
        MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
        MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
        MACOSX_BUNDLE TRUE
        WIN32_EXECUTABLE TRUE
)

target_sources(${PROJECT_NAME}
        PUBLIC
        FILE_SET CXX_MODULES
        BASE_DIRS
        ${CMAKE_CURRENT_SOURCE_DIR}
        FILES
        pathFinder.app.geometry-vector3d.ixx
        pathFinder.app.geometry-point3d.ixx
        pathFinder.app.geometry.ixx
        PRIVATE
        pathFinder.app.geometry-vector3d.cpp
        pathFinder.app.geometry-point3d.cpp
)

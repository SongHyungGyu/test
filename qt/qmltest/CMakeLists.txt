cmake_minimum_required(VERSION 3.16)
project(qmltest VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTORCC ON)

# ✅ 필요한 모듈 모두 포함
find_package(Qt6 REQUIRED COMPONENTS Gui Qml Quick)
find_package(Qt6 REQUIRED COMPONENTS Core)

qt_standard_project_setup(REQUIRES 6.8)

qt_add_executable(appqmltest
    main.cpp
    images/resources.qrc
)

qt_add_qml_module(appqmltest
    URI qmltest
    VERSION 1.0
    QML_FILES
        qml/Main.qml
        qml/NavigationButton.qml
        qml/DashboardPage.qml
        qml/Theme.qml
        qml/GaugeView.qml
    RESOURCES
        qml/qmldir
        SOURCES
        # images/resources.qrc

)

# ✅ 링크 대상 명시 (매우 중요)
target_link_libraries(appqmltest
    PRIVATE
        Qt6::Gui
        Qt6::Qml
        Qt6::Quick
)
target_link_libraries(appqmltest PRIVATE Qt6::Core)

set_target_properties(appqmltest PROPERTIES
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

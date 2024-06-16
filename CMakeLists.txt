cmake_minimum_required(VERSION 3.24)
project(SaboresIsep)

set(CMAKE_CXX_STANDARD 17)

set(PROJECT_CONTROLLER_DIR
        ${PROJECT_SOURCE_DIR}/controller)
include_directories(
        ${PROJECT_CONTROLLER_DIR})
set(CONTROLLER_SOURCE_FILES
        controller/Controller.h
        controller/Controller.cpp)

set(PROJECT_EXCEPTION_DIR
        ${PROJECT_SOURCE_DIR}/exception)
set(PROJECT_EXCEPTION_HEADER_DIR
        ${PROJECT_EXCEPTION_DIR}/header)
set(PROJECT_EXCEPTION_SOURCES_DIR
        ${PROJECT_EXCEPTION_DIR}/sources)
include_directories(
        ${PROJECT_EXCEPTION_HEADER_DIR}
        ${PROJECT_EXCEPTION_SOURCES_DIR})
set(EXCEPTION_SOURCE_FILES
        ${PROJECT_EXCEPTION_HEADER_DIR}/DataConsistencyException.h
        ${PROJECT_EXCEPTION_SOURCES_DIR}/DataConsistencyException.cpp
        ${PROJECT_EXCEPTION_HEADER_DIR}/DuplicatedEntryException.h
        ${PROJECT_EXCEPTION_SOURCES_DIR}/DuplicatedEntryException.cpp
        ${PROJECT_EXCEPTION_HEADER_DIR}/InvalidDataException.h
        ${PROJECT_EXCEPTION_SOURCES_DIR}/InvalidDataException.cpp)

set(PROJECT_MODEL_DIR
        ${PROJECT_SOURCE_DIR}/model)
set(PROJECT_MODEL_HEADER_DIR
        ${PROJECT_MODEL_DIR}/header)
set(PROJECT_MODEL_SOURCES_DIR
        ${PROJECT_MODEL_DIR}/sources)
include_directories(
        ${PROJECT_MODEL_HEADER_DIR}
        ${PROJECT_MODEL_SOURCES_DIR})
set(MODEL_SOURCE_FILES
        ${PROJECT_MODEL_HEADER_DIR}/Client.h
        ${PROJECT_MODEL_SOURCES_DIR}/Client.cpp
        ${PROJECT_MODEL_HEADER_DIR}/ClientContainer.h
        ${PROJECT_MODEL_SOURCES_DIR}/ClientContainer.cpp
        ${PROJECT_MODEL_HEADER_DIR}/ClientOrder.h
        ${PROJECT_MODEL_SOURCES_DIR}/ClientOrder.cpp
        ${PROJECT_MODEL_HEADER_DIR}/ClientOrderContainer.h
        ${PROJECT_MODEL_SOURCES_DIR}/ClientOrderContainer.cpp
        ${PROJECT_MODEL_HEADER_DIR}/DonoContainer.h
        ${PROJECT_MODEL_SOURCES_DIR}/DonoContainer.cpp
        ${PROJECT_MODEL_HEADER_DIR}/Menu.h
        ${PROJECT_MODEL_SOURCES_DIR}/Menu.cpp
        ${PROJECT_MODEL_HEADER_DIR}/MenuContainer.h
        ${PROJECT_MODEL_SOURCES_DIR}/MenuContainer.cpp
        ${PROJECT_MODEL_HEADER_DIR}/Order.h
        ${PROJECT_MODEL_SOURCES_DIR}/Order.cpp
        ${PROJECT_MODEL_HEADER_DIR}/SaboresIsep.h
        ${PROJECT_MODEL_SOURCES_DIR}/SaboresIsep.cpp
        ${PROJECT_MODEL_HEADER_DIR}/Supplier.h
        ${PROJECT_MODEL_SOURCES_DIR}/Supplier.cpp
        ${PROJECT_MODEL_HEADER_DIR}/SupplierContainer.h
        ${PROJECT_MODEL_SOURCES_DIR}/SupplierContainer.cpp
        ${PROJECT_MODEL_HEADER_DIR}/SupplierOrder.h
        ${PROJECT_MODEL_SOURCES_DIR}/SupplierOrder.cpp
        ${PROJECT_MODEL_HEADER_DIR}/SupplierOrderContainer.h
        ${PROJECT_MODEL_SOURCES_DIR}/SupplierOrderContainer.cpp
        ${PROJECT_MODEL_HEADER_DIR}/User.h
        ${PROJECT_MODEL_SOURCES_DIR}/User.cpp)

set(PROJECT_VIEWS_DIR
        ${PROJECT_SOURCE_DIR}/VIEWS)
set(PROJECT_VIEWS_HEADER_DIR
        ${PROJECT_VIEWS_DIR}/header)
set(PROJECT_VIEWS_SOURCES_DIR
        ${PROJECT_VIEWS_DIR}/sources)
include_directories(
        ${PROJECT_VIEWS_HEADER_DIR}
        ${PROJECT_VIEWS_SOURCES_DIR})
set(VIEWS_SOURCE_FILES
        ${PROJECT_VIEWS_HEADER_DIR}/ClientOrderView.h
        ${PROJECT_VIEWS_SOURCES_DIR}/ClientOrderView.cpp
        ${PROJECT_VIEWS_HEADER_DIR}/ClientView.h
        ${PROJECT_VIEWS_SOURCES_DIR}/ClientView.cpp
        ${PROJECT_VIEWS_HEADER_DIR}/MenuView.h
        ${PROJECT_VIEWS_SOURCES_DIR}/MenuView.cpp
        ${PROJECT_VIEWS_HEADER_DIR}/SupplierOrderView.h
        ${PROJECT_VIEWS_SOURCES_DIR}/SupplierOrderView.cpp
        ${PROJECT_VIEWS_HEADER_DIR}/SupplierView.h
        ${PROJECT_VIEWS_SOURCES_DIR}/SupplierView.cpp
        ${PROJECT_VIEWS_HEADER_DIR}/Utils.h
        ${PROJECT_VIEWS_SOURCES_DIR}/Utils.cpp
        ${PROJECT_VIEWS_HEADER_DIR}/View.h
        ${PROJECT_VIEWS_SOURCES_DIR}/View.cpp
)

set(SOURCE_FILES
        main.cpp
        controller/Controller.h
        controller/Controller.cpp
        mock/MockData.h
        mock/MockData.cpp)


add_executable(
        main.cpp
        controller.cpp
        ${SOURCE_FILES}
        ${MODEL_SOURCE_FILES}
        ${VIEWS_SOURCE_FILES}
        ${EXCEPTION_SOURCE_FILES}
)

set(CMAKE_INCLUDE_DIRS
        ${PROJECT_SOURCE_DIR}/include
        ${PROJECT_SOURCE_DIR}/external/include)
include_directories(
        ${PROJECT_SOURCE_DIR}/include
        ${PROJECT_SOURCE_DIR}/external)
include_directories(
        ${PROJECT_SOURCE_DIR}/../../header)
include_directories(${PROJECT_SOURCE_DIR}/custom/header)
include_directories(${PROJECT_SOURCE_DIR}/header)


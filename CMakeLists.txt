cmake_minimum_required(VERSION 3.24)
project(SaboresIsep)

set(CMAKE_CXX_STANDARD 17)

set(PROJECT_CONTROLLER_DIR
        ${PROJECT_SOURCES_DIR}/controller)
include_directories(
        ${PROJECT_CONTROLLER_DIR})
set(CONTROLLER_SOURCES_FILES
        controller/controller.h
        controller/Controller.cpp)

set(PROJECT_EXCEPTIONS_DIR
        ${PROJECT_SOURCES_DIR}/exceptions)
set(PROJECT_EXCEPTIONS_HEADERS_DIR
        ${PROJECT_EXCEPTIONS_DIR}/header)
set(PROJECT_EXCEPTIONS_SOURCES_DIR
        ${PROJECT_EXCEPTIONS_DIR}/sources)
include_directories(
        ${PROJECT_EXCEPTIONS_HEADERS_DIR}
        ${PROJECT_EXCEPTIONS_SOURCES_DIR})
set(EXCEPTIONS_SOURCE_FILES
        ${PROJECT_EXCEPTIONS_HEADERS_DIR}/DataConsistencyException.h
        ${PROJECT_EXCEPTIONS_SOURCES_DIR}/DataConsistencyException.cpp
        ${PROJECT_EXCEPTIONS_HEADERS_DIR}/DuplicatedDataException.h
        ${PROJECT_EXCEPTIONS_SOURCES_DIR}/DuplicatedDataException.cpp
        ${PROJECT_EXCEPTIONS_HEADERS_DIR}/InvalidDataException.h
        ${PROJECT_EXCEPTIONS_SOURCES_DIR}/InvalidDataException.cpp)

set(PROJECT_MODEL_DIR
        ${PROJECT_SOURCES_DIR}/model)
set(PROJECT_MODEL_HEADERS_DIR
        ${PROJECT_MODEL_DIR}/header)
set(PROJECT_MODEL_SOURCES_DIR
        ${PROJECT_MODEL_DIR}/sources)
include_directories(
        ${PROJECT_MODEL_HEADERS_DIR}
        ${PROJECT_MODEL_SOURCES_DIR})
set(MODEL_SOURCES_FILES
        ${PROJECT_MODEL_HEADERS_DIR}/Client.h
        ${PROJECT_MODEL_SOURCES_DIR}/Client.cpp
        ${PROJECT_MODEL_HEADERS_DIR}/ClientContainer.h
        ${PROJECT_MODEL_SOURCES_DIR}/ClientContainer.cpp
        ${PROJECT_MODEL_HEADERS_DIR}/ClientOrder.h
        ${PROJECT_MODEL_SOURCES_DIR}/ClientOrder.cpp
        ${PROJECT_MODEL_HEADERS_DIR}/ClientOrderContainer.h
        ${PROJECT_MODEL_SOURCES_DIR}/ClientOrderContainer.cpp
        ${PROJECT_MODEL_HEADERS_DIR}/DonoContainer.h
        ${PROJECT_MODEL_SOURCES_DIR}/DonoContainer.cpp
        ${PROJECT_MODEL_HEADERS_DIR}/Menu.h
        ${PROJECT_MODEL_SOURCES_DIR}/Menu.cpp
        ${PROJECT_MODEL_HEADERS_DIR}/MenuContainer.h
        ${PROJECT_MODEL_SOURCES_DIR}/MenuContainer.cpp
        ${PROJECT_MODEL_HEADERS_DIR}/Order.h
        ${PROJECT_MODEL_SOURCES_DIR}/Order.cpp
        ${PROJECT_MODEL_HEADERS_DIR}/SaboresIsep.h
        ${PROJECT_MODEL_SOURCES_DIR}/SaboresIsep.cpp
        ${PROJECT_MODEL_HEADERS_DIR}/Supplier.h
        ${PROJECT_MODEL_SOURCES_DIR}/Supplier.cpp
        ${PROJECT_MODEL_HEADERS_DIR}/SupplierContainer.h
        ${PROJECT_MODEL_SOURCES_DIR}/SupplierContainer.cpp
        ${PROJECT_MODEL_HEADERS_DIR}/SupplierOrder.h
        ${PROJECT_MODEL_SOURCES_DIR}/SupplierOrder.cpp
        ${PROJECT_MODEL_HEADERS_DIR}/SupplierOrderContainer.h
        ${PROJECT_MODEL_SOURCES_DIR}/SupplierOrderContainer.cpp
        ${PROJECT_MODEL_HEADERS_DIR}/User.h
        ${PROJECT_MODEL_SOURCES_DIR}/User.cpp)

set(PROJECT_VIEWS_DIR
        ${PROJECT_SOURCE_DIR}/VIEWS)
set(PROJECT_VIEWS_HEADERS_DIR
        ${PROJECT_VIEWS_DIR}/header)
set(PROJECT_VIEWS_SOURCES_DIR
        ${PROJECT_VIEWS_DIR}/sources)
include_directories(
        ${PROJECT_VIEWS_HEADERS_DIR}
        ${PROJECT_VIEWS_SOURCES_DIR})
set(VIEWS_SOURCE_FILES
        ${PROJECT_VIEWS_HEADERS_DIR}/ClientOrderView.h
        ${PROJECT_VIEWS_SOURCES_DIR}/ClientOrderView.cpp
        ${PROJECT_VIEWS_HEADERS_DIR}/ClientView.h
        ${PROJECT_VIEWS_SOURCES_DIR}/ClientView.cpp
        ${PROJECT_VIEWS_HEADERS_DIR}/MenuView.h
        ${PROJECT_VIEWS_SOURCES_DIR}/MenuView.cpp
        ${PROJECT_VIEWS_HEADERS_DIR}/SupplierOrderView.h
        ${PROJECT_VIEWS_SOURCES_DIR}/SupplierOrderView.cpp
        ${PROJECT_VIEWS_HEADERS_DIR}/SupplierView.h
        ${PROJECT_VIEWS_SOURCES_DIR}/SupplierView.cpp
        ${PROJECT_VIEWS_HEADERS_DIR}/Utils.h
        ${PROJECT_VIEWS_SOURCES_DIR}/Utils.cpp
        ${PROJECT_VIEWS_HEADERS_DIR}/View.h
        ${PROJECT_VIEWS_SOURCES_DIR}/View.cpp
)

set(SOURCE_FILES
        main.cpp
        controller/controller.h
        controller/Controller.cpp
        mock/MockData.h
        mock/MockData.cpp
        header/model/ClientOrder.h
        header/model/Client.h)



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




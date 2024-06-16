cmake_minimum_required(VERSION 3.24)
project(SaboresIsep)

set(CMAKE_CXX_STANDARD 17)

set(PROJECT_CONTROLLER_DIR
        ${PROJECT_SOURCE_DIR}/controller)
include_directories(
        ${PROJECT_CONTROLLER_DIR})
set(CONTROLLER_SOURCE_FILES
        ${PROJECT_CONTROLLER_DIR}/Controller.h
        ${PROJECT_CONTROLLER_DIR}/Controller.cpp
)

set(PROJECT_EXCEPTION_DIR
        ${PROJECT_SOURCE_DIR}/exception)
set(PROJECT_EXCEPTION_HEADERS_DIR
        ${PROJECT_EXCEPTION_DIR}/headers)
set(PROJECT_EXCEPTION_SOURCES_DIR
        ${PROJECT_EXCEPTION_DIR}/sources)
include_directories(
        ${PROJECT_EXCEPTION_HEADERS_DIR}
        ${PROJECT_EXCEPTION_SOURCES_DIR})
set(EXCEPTION_SOURCE_FILES
        ${PROJECT_EXCEPTION_HEADERS_DIR}/DataConsistencyException.h
        ${PROJECT_EXCEPTION_SOURCES_DIR}/DataConsistencyException.cpp
        ${PROJECT_EXCEPTION_HEADERS_DIR}/DuplicatedEntryException.h
        ${PROJECT_EXCEPTION_SOURCES_DIR}/DuplicatedEntryException.cpp
        ${PROJECT_EXCEPTION_HEADERS_DIR}/InvalidDataException.h
        ${PROJECT_EXCEPTION_SOURCES_DIR}/InvalidDataException.cpp
        header/model/SaboresIsep.h
        header/model/SaboresIsep.h
)

set(PROJECT_MODEL_DIR
        ${PROJECT_SOURCE_DIR}/model)
set(PROJECT_MODEL_HEADERS_DIR
        ${PROJECT_MODEL_DIR}/headers)
set(PROJECT_MODEL_SOURCES_DIR
        ${PROJECT_MODEL_DIR}/sources)
include_directories(
        ${PROJECT_MODEL_HEADERS_DIR}
        ${PROJECT_MODEL_SOURCES_DIR})
set(MODEL_SOURCE_FILES
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
        ${PROJECT_MODEL_SOURCES_DIR}/User.cpp
        header/model/SaboresIsep.h
        header/model/SaboresIsep.h
)

set(PROJECT_VIEWS_DIR
        ${PROJECT_SOURCE_DIR}/VIEWS)
set(PROJECT_VIEWS_HEADERS_DIR
        ${PROJECT_VIEWS_DIR}/headers)
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
        header/model/SaboresIsep.h
        header/model/SaboresIsep.h
)


set(SOURCE_FILES
        controller/Controller.h
        controller/Controller.cpp
        mock/MockData.h
        mock/MockData.cpp
        header/model/SaboresIsep.h
        header/model/SaboresIsep.h)

set(GOOGLE_TEST_LIB ${PROJECT_SOURCE_DIR}/googleTestLib/googletest-main)
set(GOOGLE_TEST_LIB_INCLUDE ${GOOGLE_TEST_LIB}/googletest/include)

add_subdirectory(${GOOGLETESTLIB})
include_directories(${GOOGLETEST-MAIN})

add_executable(
        SaboresIsep
        main.cpp
        ${SOURCE_FILES}
        ${MODEL_SOURCE_FILES}
        ${VIEWS_SOURCE_FILES}
        ${EXCEPTION_SOURCE_FILES}
        header/model/SaboresIsep.h
        header/model/SaboresIsep.h
        header/model/SaboresIsep.h
        sources/controller/Controller.cpp
        header/controller/controller.h
        header/model/ClientOrderContainer.h
        sources/controller/Controller.cpp
        header/model/SaboresIsep.h
        header/model/SaboresIsep.h
)

add_executable(SaboresIsepTests
        maintest.cpp
        ${SOURCE_FILES}
        ${MODEL_SOURCE_FILES}
        ${VIEWS_SOURCE_FILES}
        ${EXCEPTION_SOURCE_FILES}
        header/model/SaboresIsep.h
)
target_link_libraries(SaboresIsepTests gtest gtest_main)




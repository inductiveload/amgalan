SET(amgalan_client_src main.cpp)

ADD_EXECUTABLE(main ${amgalan_client_src})

TARGET_LINK_LIBRARIES(main amgalan)

#rename to the final outut name
SET_TARGET_PROPERTIES(main
                      PROPERTIES OUTPUT_NAME amgalan)

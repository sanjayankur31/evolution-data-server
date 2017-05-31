set(DEPENDENCIES
	ebackend
	ecal
	edataserver
	edata-cal
)

set(SOURCES
	e-cal-backend-taskwarrior-factory.c
	e-cal-backend-taskwarrior.c
	e-cal-backend-taskwarrior.h
)

add_library(ecalbackendtaskwarrior MODULE
	${SOURCES}
)

add_dependencies(ecalbackendtaskwarrior
	${DEPENDENCIES}
)

target_compile_definitions(ecalbackendtaskwarrior PRIVATE
	-DG_LOG_DOMAIN=\"e-cal-backend-taskwarrior\"
	-DBACKENDDIR=\"${ecal_backenddir}\"
)

target_compile_options(ecalbackendtaskwarrior PUBLIC
	${CALENDAR_CFLAGS}
	${LIBGDATA_CFLAGS}
)

target_include_directories(ecalbackendtaskwarrior PUBLIC
	${CMAKE_BINARY_DIR}
	${CMAKE_BINARY_DIR}/src
	${CMAKE_SOURCE_DIR}/src
	${CMAKE_BINARY_DIR}/src/calendar
	${CMAKE_SOURCE_DIR}/src/calendar
	${CALENDAR_INCLUDE_DIRS}
	${LIBGDATA_INCLUDE_DIRS}
)

target_link_libraries(ecalbackendtaskwarrior
	${DEPENDENCIES}
	${CALENDAR_LDFLAGS}
	${LIBGDATA_LDFLAGS}
)

install(TARGETS ecalbackendtaskwarrior
	DESTINATION ${ecal_backenddir}
)

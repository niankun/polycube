include(${PROJECT_SOURCE_DIR}/cmake/LoadFileAsVariable.cmake)

aux_source_directory(serializer SERIALIZER_SOURCES)
aux_source_directory(api API_SOURCES)
aux_source_directory(modules MODULES)
aux_source_directory(base BASE_SOURCES)

include_directories(serializer)
include_directories(modules)

if (NOT DEFINED POLYCUBE_STANDALONE_SERVICE OR POLYCUBE_STANDALONE_SERVICE)
  find_package(PkgConfig REQUIRED)
  pkg_check_modules(POLYCUBE libpolycube)
  include_directories(${POLYCUBE_INCLUDE_DIRS})
endif(NOT DEFINED POLYCUBE_STANDALONE_SERVICE OR POLYCUBE_STANDALONE_SERVICE)

# Needed to load files as variables
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(pcn-firewall SHARED
  ${SERIALIZER_SOURCES}
  ${API_SOURCES}
  ${MODULES}
  ${BASE_SOURCES}
  Chain.cpp
  ChainRule.cpp
  ChainStats.cpp
  SessionTable.cpp
  Firewall.cpp
  Utils.cpp
  Firewall-lib.cpp)

# load ebpf datapath code in std::string variables
load_file_as_variable(pcn-firewall datapaths/Firewall_ActionLookup_dp.c firewall_code_actionlookup)
load_file_as_variable(pcn-firewall datapaths/Firewall_BitScan_dp.c firewall_code_bitscan)
load_file_as_variable(pcn-firewall datapaths/Firewall_ChainForwarder_dp.c firewall_code_chainforwarder)
load_file_as_variable(pcn-firewall datapaths/Firewall_ConntrackLabel_dp.c firewall_code_conntracklabel)
load_file_as_variable(pcn-firewall datapaths/Firewall_ConntrackMatch_dp.c firewall_code_conntrackmatch)
load_file_as_variable(pcn-firewall datapaths/Firewall_ConntrackTableUpdate_dp.c firewall_code_conntracktableupdate)
load_file_as_variable(pcn-firewall datapaths/Firewall_DefaultAction_dp.c firewall_code_defaultaction)
load_file_as_variable(pcn-firewall datapaths/Firewall_IpLookup_dp.c firewall_code_iplookup)
load_file_as_variable(pcn-firewall datapaths/Firewall_L4PortLookup_dp.c firewall_code_l4portlookup)
load_file_as_variable(pcn-firewall datapaths/Firewall_L4ProtocolLookup_dp.c firewall_code_l4protolookup)
load_file_as_variable(pcn-firewall datapaths/Firewall_Parser_dp.c firewall_code_parser)
load_file_as_variable(pcn-firewall datapaths/Firewall_TcpFlagsLookup_dp.c firewall_code_tcpflagslookup)
load_file_as_variable(pcn-firewall datapaths/Firewall_Horus_dp.c firewall_code_horus)

# load datamodel in a variable
load_file_as_variable(pcn-firewall
  ../datamodel/firewall.yang
  firewall_datamodel)

target_link_libraries(pcn-firewall ${POLYCUBE_LIBRARIES})

# Specify shared library install directory

set(CMAKE_INSTALL_LIBDIR /usr/lib)

install(
    TARGETS
    pcn-firewall
    DESTINATION
    "${CMAKE_INSTALL_LIBDIR}"
)


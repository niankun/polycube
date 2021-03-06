/**
* router API generated from router.yang
*
* NOTE: This file is auto generated by polycube-codegen
* https://github.com/polycube-network/polycube-codegen
*/


/* Do not edit this file manually */

/*
* RouterApi.h
*
*/

#pragma once

#define POLYCUBE_SERVICE_NAME "router"


#include "polycube/services/response.h"
#include "polycube/services/shared_lib_elements.h"

#include "ArpTableJsonObject.h"
#include "PortsJsonObject.h"
#include "PortsSecondaryipJsonObject.h"
#include "RouteJsonObject.h"
#include "RouterJsonObject.h"
#include <vector>


#ifdef __cplusplus
extern "C" {
#endif

Response create_router_arp_table_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response create_router_arp_table_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response create_router_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response create_router_ports_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response create_router_ports_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response create_router_ports_secondaryip_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response create_router_ports_secondaryip_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response create_router_route_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response create_router_route_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response delete_router_arp_table_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response delete_router_arp_table_list_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response delete_router_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response delete_router_ports_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response delete_router_ports_list_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response delete_router_ports_secondaryip_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response delete_router_ports_secondaryip_list_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response delete_router_route_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response delete_router_route_list_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_router_arp_table_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_router_arp_table_interface_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_router_arp_table_list_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_router_arp_table_mac_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_router_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_router_list_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_router_ports_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_router_ports_ip_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_router_ports_list_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_router_ports_mac_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_router_ports_secondaryip_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_router_ports_secondaryip_list_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_router_route_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_router_route_interface_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_router_route_list_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_router_route_pathcost_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response replace_router_arp_table_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response replace_router_arp_table_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response replace_router_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response replace_router_ports_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response replace_router_ports_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response replace_router_ports_secondaryip_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response replace_router_ports_secondaryip_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response replace_router_route_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response replace_router_route_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_router_arp_table_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_router_arp_table_interface_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_router_arp_table_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_router_arp_table_mac_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_router_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_router_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_router_ports_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_router_ports_ip_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_router_ports_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_router_ports_mac_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_router_ports_secondaryip_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_router_ports_secondaryip_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_router_route_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_router_route_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_router_route_pathcost_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);

Response router_arp_table_list_by_id_help(const char *name, const Key *keys, size_t num_keys);
Response router_list_by_id_help(const char *name, const Key *keys, size_t num_keys);
Response router_ports_list_by_id_help(const char *name, const Key *keys, size_t num_keys);
Response router_ports_secondaryip_list_by_id_help(const char *name, const Key *keys, size_t num_keys);
Response router_route_list_by_id_help(const char *name, const Key *keys, size_t num_keys);


#ifdef __cplusplus
}
#endif



#ifndef _LOCAL_NETWORK_H__
#define _LOCAL_NETWORK_H__

#define ETH_ADDRESS_LENGTH 6

#define IPV4_IP_LENGTH     0x10

#define HOST_NAME_LENGTH   64

extern char local_host_name[HOST_NAME_LENGTH];
extern char local_ip[IPV4_IP_LENGTH];
extern unsigned char local_mac[ETH_ADDRESS_LENGTH];
extern char gateway_ip[IPV4_IP_LENGTH];
extern unsigned char gateway_mac[ETH_ADDRESS_LENGTH];
extern char dhcp_server[IPV4_IP_LENGTH];
extern char network_mask[IPV4_IP_LENGTH];
extern char network_session[IPV4_IP_LENGTH];
extern char network_session_last[IPV4_IP_LENGTH];
extern unsigned long network_session_size;

bool check_ip(const char* ip);
void local_network_init(void);
void local_network_clean(void);
void sleep(unsigned int time);
bool get_host(const char* input_host,char* output_ip);

#endif

#define LOCAL_IP      10,   42,   13,   49              // the IP address of node
#define BROADCAST_IP  10,   42,   13,  255              // broadcast IP address
#define GATEWAY_IP    10,   42,   13,    2              // gateway IP address (use ip address of controller)
#define SUBNET_MASK  255,  255,  255,    0              // network mask (art-net use 'A' network type)
#define MAC_ADDRESS 0xe8, 0x13, 0x9e, 0x26, 0x10, 0x48  // mac address of the ethernet chip

#define ARTNET_UNIVERSE  0x01 // artnet universe id to receive
#define ARTNET_LONG "Poltergiest Artnet Node v1.0 (c) 2015 Julusian\0" // Max 64 Characters. MUST BE NULL TERMINATED
#define ARTNET_SHORT "Poltergeist Node\0" // Max 18 Characters. MUST BE NULL TERMINATED

#include <enet/enet.h>

ENetHost *start_client(ENetPeer **peer, const int timeout_seconds);
void send_string(ENetPeer *peer, char *s);
void stop_client(ENetHost *host, ENetPeer *peer);
int find_servers(ServerInfo *server_infos, ENetAddress *addrs, int max_servers, int timeout_seconds);

#include "KosbotServer.h"

int KosbotServer::ProcessPacket(std::shared_ptr<Packet> packet)
{
	//Missing connection access -> TODO
	return 0;
}

int KosbotServer::OnConnect(std::shared_ptr<TCPConnection> connection)
{

	return 0;
}

int KosbotServer::OnDisconnect(std::shared_ptr<TCPConnection> connection, std::string reason)
{
	return 0;
}

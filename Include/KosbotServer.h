#pragma once

#include "Server.h"

class KosbotServer : public Server {
	std::vector<std::shared_ptr<TCPConnection>> kosbot_client_connections;

private:
	int ProcessPacket(std::shared_ptr<Packet> packet) override;
	int OnConnect(std::shared_ptr<TCPConnection> connection) override;
	int OnDisconnect(std::shared_ptr<TCPConnection> connection, std::string reason) override;


};
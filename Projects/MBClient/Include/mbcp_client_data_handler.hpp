#pragma once
#include<mbcp_data_handler_interface.hpp>
#include<mbcp_http_connection.hpp>
#include<mbcp_udp_connection.hpp>

namespace mbcp
{
	class ClientDataHandler : public DataHandlerInterface
	{
	private:
		ConnectionInterface* mHttpConnection;
		ConnectionInterface* mUdpConnection;
	public:
		ClientDataHandler();
		ConnectionInterface* GetHttpConnection();
		ConnectionInterface* GetUdpConnection();

	};
}
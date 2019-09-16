#include<precompiled.hpp>
#include<mbcp_client_data_handler.hpp>

using namespace mbcp;

mbcp::ClientDataHandler::ClientDataHandler() : mUdpConnection(new UdpConnection(this)), mHttpConnection(new HttpConnection(this))
{
}

ConnectionInterface* mbcp::ClientDataHandler::GetHttpConnection()
{
	return mHttpConnection;
}

ConnectionInterface* mbcp::ClientDataHandler::GetUdpConnection()
{
	return mUdpConnection;
}

void mbcp::ClientDataHandler::HandleData(std::string& rawData, ConnectionType sender)
{
	if (sender == ConnectionType::http)
	{
		mUdpConnection->SendData(rawData);
	}
	else if (sender == ConnectionType::udp)
	{
		mHttpConnection->SendData(rawData);
	}
}

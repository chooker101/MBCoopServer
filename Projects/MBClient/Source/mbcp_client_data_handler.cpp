#include<precompiled.hpp>
#include<mbcp_client_data_handler.hpp>

using namespace mbcp;

mbcp::ClientDataHandler::ClientDataHandler() : mHttpConnection(new HttpConnection()), mUdpConnection(new UdpConnection())
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

#include<mbcp_data_handler_interface.hpp>
#include<mbcp_udp_connection.hpp>

using namespace mbcp;

mbcp::UdpConnection::UdpConnection(DataHandlerInterface* dataHandler)
{
	mDataHandler = dataHandler;
}

void mbcp::UdpConnection::RecieveData(std::string & rawData)
{

}

void mbcp::UdpConnection::SendData(std::string & toSend)
{
	mData = toSend;
}

std::string & mbcp::UdpConnection::GetDataToSend()
{
	return mData;
}

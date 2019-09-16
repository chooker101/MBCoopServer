#include<mbcp_data_handler_interface.hpp>
#include<mbcp_http_connection.hpp>

using namespace mbcp;

mbcp::HttpConnection::HttpConnection(DataHandlerInterface* dataHandler)
{
	mDataHandler = dataHandler;
}

void mbcp::HttpConnection::RecieveData(std::string& rawData)
{

}

void mbcp::HttpConnection::SendData(std::string& toSend)
{
	mData = toSend;
}

std::string & mbcp::HttpConnection::GetDataToSend()
{
	return mData;
}

#include<mbcp_data_handler_interface.hpp>
#include<mbcp_http_connection.hpp>

using namespace mbcp;

void mbcp::HttpConnection::RecieveData(std::string& rawData)
{

}

void mbcp::HttpConnection::SendData(std::string& toSend)
{
	
}

std::string & mbcp::HttpConnection::GetDataToSend()
{
	mData = "Hello World";
	return mData;
}

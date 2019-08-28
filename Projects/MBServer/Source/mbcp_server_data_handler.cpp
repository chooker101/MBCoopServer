#include<mbcp_data_parser.hpp>
#include<mbcp_server_data_handler.hpp>

using namespace mbcp;

void mbcp::ServerDataHandler::HandleData(std::string& rawData)
{
	DataParser::Instance().InterpretData(rawData);
}

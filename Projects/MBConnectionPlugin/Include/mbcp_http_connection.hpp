#pragma once
#include<mbcp_connection_interface.hpp>

namespace mbcp
{
	class HttpConnection : ConnectionInterface
	{
	public:
		void RecieveData(std::string& rawData) override final;
		void SendData(std::string& toSend) override final;
	};
}
#pragma once
#include<mbcp_connection_interface.hpp>

namespace mbcp
{
	class HttpConnection : public ConnectionInterface
	{
	public:
		HttpConnection(DataHandlerInterface* dataHandler);
		void RecieveData(std::string& rawData) override final;
		void SendData(std::string& toSend) override final;
		std::string& GetDataToSend() override final;
		~HttpConnection() = default;
	};
}
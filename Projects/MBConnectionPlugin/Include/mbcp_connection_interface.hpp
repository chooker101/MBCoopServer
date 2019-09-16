#pragma once
#include <string>
#include<mbcp_data_handler_interface.hpp>

namespace mbcp
{
	class ConnectionInterface
	{
	protected:
		std::string mData = "";
		DataHandlerInterface* mDataHandler;
	public:
		ConnectionInterface() = default;
		virtual void RecieveData(std::string& rawData) = 0;
		virtual void SendData(std::string& toSend) = 0;
		virtual std::string& GetDataToSend() = 0;
		virtual ~ConnectionInterface() = default;
	};
}
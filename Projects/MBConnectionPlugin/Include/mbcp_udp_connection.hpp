#pragma once
#include <mbcp_connection_interface.hpp>

namespace mbcp 
{
	class UdpConnection : public ConnectionInterface
	{
	private:
	public:
		UdpConnection() = default;
		void RecieveData(std::string& rawData) override final;
		void SendData(std::string& toSend) override final;
		std::string& GetDataToSend() override final;
	};
}

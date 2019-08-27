#pragma once

namespace mbcp
{
	class ConnectionInterface
	{
	private:

	public:
		virtual void RecieveData(std::string& rawData) = 0;
		virtual void SendData(std::string& toSend) = 0;
	};
}
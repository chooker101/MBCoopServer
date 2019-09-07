#pragma once
#include<string>

namespace mbcp
{
	enum class ConnectionType
	{
		http,
		udp
	};

	class DataHandlerInterface
	{
	public:
		virtual void HandleData(std::string& rawData, ConnectionType sender) = 0;
		virtual ~DataHandlerInterface() = default;
	};
}
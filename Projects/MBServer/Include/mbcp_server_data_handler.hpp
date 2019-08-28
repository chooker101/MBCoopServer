#pragma once
#include<mbcp_data_handler_interface.hpp>

namespace mbcp
{
	class ServerDataHandler : public DataHandlerInterface
	{
	public:
		void HandleData(std::string& rawData) override final;
	};
}
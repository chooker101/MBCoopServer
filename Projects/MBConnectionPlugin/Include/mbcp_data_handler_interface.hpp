#pragma once
#include<string>

namespace mbcp
{
	class DataHandlerInterface
	{
	public:
		virtual void HandleData(std::string& rawData) = 0;
		virtual ~DataHandlerInterface() = default;
	};
}
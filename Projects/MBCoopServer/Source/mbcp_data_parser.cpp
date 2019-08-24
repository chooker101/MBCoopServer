#include <precompiled.hpp>
#include <iostream>
#include <mbcp_data_parser.hpp>

using namespace mbcp;

DataParser* mbcp::DataParser::pInstance = nullptr;

DataParser& mbcp::DataParser::Instance()
{
	if (pInstance == nullptr)
	{
		pInstance = new DataParser();
	}
	return *pInstance;
}

std::string mbcp::DataParser::HandleData(std::string& rawData)
{
	if (rawData.size() < 4)
	{
		return false;
	}
	mFullRecievedLengthHex = std::stoi(rawData.substr(0, 4), nullptr, 16);
	mCurrentOffsetHex = 4;
	while (mCurrentOffsetHex < mFullRecievedLengthHex)
	{
		mCurrentDataLength = std::stoi(rawData.substr(mCurrentOffsetHex, 2), nullptr, 16);
		for(uint8_t i = mCurrentOffsetHex + 2; i < mCurrentDataLength)
	}
}

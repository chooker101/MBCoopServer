#pragma once

namespace mbcp 
{
	class DataParser
	{
	private:
		static DataParser* pInstance;
		uint16_t mFullRecievedLengthHex;
		uint16_t mCurrentOffsetHex;
		uint8_t mCurrentItemLengtHex;
		uint8_t mCurrentItemTypeHex;
		uint8_t* mCurrentData;
		uint8_t mCurrentDataLength;
		DataParser() = default;
	public:
		static DataParser& Instance();
		uint8_t* InterpretData(std::string& rawData);
	};
}

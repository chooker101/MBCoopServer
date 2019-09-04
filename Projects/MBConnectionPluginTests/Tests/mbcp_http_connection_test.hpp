#pragma once
#include <mbcp_http_connection.hpp>

class HttpConnectionTest : public testing::Test 
{
public:
	mbcp::HttpConnection* connection;

	HttpConnectionTest() { connection = new mbcp::HttpConnection(); }
	~HttpConnectionTest() { delete connection; }
};

TEST_F(HttpConnectionTest, GiveDataToSend)
{
	std::string toSend = "Data";
	connection->SendData(toSend);
	EXPECT_EQ(toSend, connection->GetDataToSend());
}
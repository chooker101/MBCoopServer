#include <precompiled.hpp>
#include <mbcp_http_connection.hpp>
#include <server.hpp>

int main()
{
	mbcp::ConnectionInterface* ci = new mbcp::HttpConnection();
	http::server::server s("0.0.0.0", "80", ".", ci);
	s.run();
	return 0;
}
#include "precompiled.hpp"
#include "HttpServer/server.hpp"

int main()
{
	http::server::server s("0.0.0.0", "80", ".");
	s.run();
	return 0;
}
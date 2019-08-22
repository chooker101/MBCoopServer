#include <precompiled.hpp>
#include <iostream>
#include <HttpServer/server.hpp>
#include <mbcp_request_handler.hpp>

void mbcp::RequestHandler::HandleRequest(const http::server::request & request, http::server::reply & reply)
{
	std::cout << request.uri << std::endl;
}

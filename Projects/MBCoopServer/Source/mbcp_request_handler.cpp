#include <precompiled.hpp>
#include <iostream>
#include <HttpServer/server.hpp>
#include <mbcp_data_parser.hpp>
#include <mbcp_request_handler.hpp>

using namespace mbcp;

void mbcp::RequestHandler::HandleRequest(const http::server::request & request, http::server::reply & reply)
{
	DataParser::Instance().HandleData(request.uri.substr(1, request.uri.size()));
}

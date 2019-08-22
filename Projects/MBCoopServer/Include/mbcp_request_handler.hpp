#pragma once

namespace mbcp
{
	class RequestHandler
	{
	public:
		void HandleRequest(const http::server::request& request, http::server::reply& reply);
	};
}
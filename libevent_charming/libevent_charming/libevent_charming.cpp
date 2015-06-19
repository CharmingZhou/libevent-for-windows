#include "test_libevent.h"

int main()
{
	/*==============================================================================
	1、该方法创建了一个微小的服务器，在9995端口监听TCP客户端的请求，当有请求到达时，
	服务器将会返回“Hello,World!”信息给连接的客户端，如果缓冲区的数据被刷新，服
	务器将关闭客户端的连接。
	2、使用Ctrl+C快捷键，可以让服务器完整退出
	================================================================================*/
	//sample_helloworld();


	/*================================================================================
	* This sample code was once meant to show how to use the basic Libevent
	* interfaces, but it never worked on non-Unix platforms, and some of the
	* interfaces have changed since it was first written.  It should probably
	* be removed or replaced with something better.
	
	==================================================================================*/
	//sample_event();

	//sample_time();
	//sample_signal();
	sample_eof();
}
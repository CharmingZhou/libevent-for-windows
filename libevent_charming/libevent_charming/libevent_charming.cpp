#include "test_libevent.h"

int main()
{
	/*==============================================================================
	1���÷���������һ��΢С�ķ���������9995�˿ڼ���TCP�ͻ��˵����󣬵������󵽴�ʱ��
	���������᷵�ء�Hello,World!����Ϣ�����ӵĿͻ��ˣ���������������ݱ�ˢ�£���
	�������رտͻ��˵����ӡ�
	2��ʹ��Ctrl+C��ݼ��������÷����������˳�
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
// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

#include <winsock2.h>
#pragma comment(lib, "Ws2_32.lib")

#pragma warning(disable:4996)


#include "event2/event-config.h"
#include "event2/event.h"
#include "event2/event_compat.h"
#include "event2/event_struct.h"
// TODO:  在此处引用程序需要的其他头文件

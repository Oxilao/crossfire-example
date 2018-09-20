#include "pch.h"

#include <cstdlib>

void _port_block()
{
	system("netsh advfirewall firewall Add rule name=\"Allow port range\" dir=out protocol=TCP remoteport=7171 action=block");
}

void _port_open()
{
	system("netsh advfirewall firewall delete rule name=\"Allow port range\"");
}

void _wait()
{
	system("TIMEOUT /T 7");
}
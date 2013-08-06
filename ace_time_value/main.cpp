/* $Id$ */

#include <iostream>
#include "ace/OS_NS_unistd.h"
#include "ace/OS_NS_time.h"
#include "ace/Time_Value.h"

using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
	ACE_Time_Value beg = ACE_Time_Value(ACE_OS::time());
	cout << "beg time sec: " << beg.sec() << " usec: " << beg.usec() << endl;
	ACE_OS::sleep(3);
	ACE_Time_Value end = ACE_Time_Value(ACE_OS::time());
	cout << "end time sec: " << end.sec() << " usec: " << end.usec() << endl;
	ACE_Time_Value diff = end - beg;
	cout << "end - beg time sec: " << diff.sec() << " usec: " << diff.usec() << endl;
	cout << "(end - beg) > zero: " << (diff > ACE_Time_Value::zero) << endl;
	diff = beg - end;
	cout << "beg - end time sec: " << diff.sec() << " usec: " << diff.usec() << endl;
	cout << "(beg - end) > zero: " << (diff > ACE_Time_Value::zero) << endl;
	return 0;
}


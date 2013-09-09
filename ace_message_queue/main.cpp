/* $Id$ */

#include <iostream>
#include "ace/Message_Queue.h"
#include "ace/Condition_Thread_Mutex.h"
#include "ace/Time_Value.h"
#include "ace/OS_NS_string.h"

using std::cout;
using std::endl;

/*! \brief ACE_Message_Queue errno to string */
const char* errno_to_string (size_t err)
{
	switch (err) {
	case EWOULDBLOCK:
		return "the timeout elapsed";
	case ESHUTDOWN:
		return "the queue was deactivated or pulsed";
	default:
		return "unknown";
	}
}

void test_ace_time_value_ex (size_t queue_size)
{
	cout << "begin to test: ACE_Message_Queue_Ex<int, ACE_MT_SYNCH>" << endl;
	cout << "sizeof (int) is: " << sizeof (int) << endl;

	ACE_Time_Value zero_time(ACE_Time_Value::zero);
	ACE_Message_Queue_Ex<int, ACE_MT_SYNCH> queue(queue_size, queue_size);
	for (int i = 0; i < 10; i++) {
		if (-1 == queue.enqueue_tail (new int(i), &zero_time)) {
			size_t err = errno;
			cout << "enqueue_tail failed, errno: " << err
				<< " reason: " << errno_to_string (err) << endl;
			break;
		}
		cout << "insert: " << i << endl;
		zero_time = ACE_Time_Value::zero;
	}
}

int main(int argc, char *argv[])
{
	size_t queue_size = sizeof (int) * 5;
	cout << "queue_size is: " << queue_size << endl;

	test_ace_time_value_ex (queue_size);

	return 0;
}


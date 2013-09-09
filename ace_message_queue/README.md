ACE_Message_Queue
============

Result
-
> queue_size is: 20  
> begin to test: ACE_Message_Queue_Ex<int, ACE_MT_SYNCH>  
> sizeof (int) is: 4  
> insert: 0  
> insert: 1  
> insert: 2  
> insert: 3  
> insert: 4  
> enqueue_tail failed, errno: 10035 reason: the timeout elapsed

Purpose
-
> the purpose of this code is use to ensure whether the hwm and lwm
> is determine the size of queue in bytes oritems

Conclusions
-
 - the hwm and lwm is determine the size of queue in bytes

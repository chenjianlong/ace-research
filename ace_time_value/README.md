ACE_Time_Value
============

Result
-
beg time sec: 1375768791 usec: 0
end time sec: 1375768794 usec: 0
end - beg time sec: 3 usec: 0
(end - beg) > zero: 1
beg - end time sec: -3 usec: 0
(beg - end) > zero: 0

Conclusions
-
 - ACE_Time_Value has negative value
 - A smaller ACE_Time_Value minus the greater one obtain an negative value
 - An negative ACE_Time_Value is smaller than ACE_Time_Value::zero

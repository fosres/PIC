
Problem 2 for PIC 10A

Written by Tanveer Salim

Human Readable Time

Converts seconds into time in:

year(s), and remaining day(s), and remaining hour(s), 

and remaining day(s), and remaining minute(s), and

remaining second(s).

Terms:

year_in_seconds = 1 year = 365 days

day_in_seconds = 1 day = 24 hours

hour_in_seconds = 1 hour = 60 minutes

minute_in_seconds = 1 minute = 60 seconds

Conditions:

Input Range: [0 seconds, 1000 years in seconds]

Input Rules: Make sure input concedes with Input Range
and NO FLOATING POINT NUMBERS ALLOWED.

How Program Works:


Determines max number of years by: 

input_seconds / year_in_seconds, 

and then storing remaining amount 

of seconds in remaining_seconds.

This is done by:  

remaining_seconds = input_seconds % year_in_seconds


(remaining_seconds will literally carry over remaining seconds

after input_seconds is gradually organized into year(s), 

hour(s), etc).


Program then determines max number of days by:

remaining_seconds / day_in_seconds, and then 

storing remaining amount in seconds in 

remaining_seconds once again by:

remaining_seconds %= day_in_seconds


This logical process continues until program 

prints out remaining amount of second(s).

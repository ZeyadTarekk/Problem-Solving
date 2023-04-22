# Write your MySQL query statement below
select employee_id , CASE when  (employee_id%2)!=0 and LEFT(name,1)!='M' then salary else 0 end as 'bonus'  
from Employees
order by employee_id
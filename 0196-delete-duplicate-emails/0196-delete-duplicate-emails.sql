# Please write a DELETE statement and DO NOT write a SELECT statement.
# Write your MySQL query statement below
DELETE p1.* 
from Person p1, Person p2 
WHERE p1.Email = p2.Email and p1.Id > p2.id
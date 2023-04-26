# Write your MySQL query statement below
SELECT e.name, u.unique_id
FROM Employees AS e
LEFT OUTER JOIN EmployeeUNI AS u ON(u.id = e.id);
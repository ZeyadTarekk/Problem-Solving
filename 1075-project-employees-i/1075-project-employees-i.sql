# Write your MySQL query statement below
SELECT P.project_id, ROUND(AVG(e.experience_years),2) AS 'average_years'
FROM project AS P
JOIN employee AS e ON(e.employee_id = P.employee_id)
GROUP BY P.project_id;
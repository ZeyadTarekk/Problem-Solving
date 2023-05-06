# Write your MySQL query statement below
# Using Joins
SELECT s.machine_id, ROUND(AVG(d.timestamp - s.timestamp),3) AS processing_time 
FROM Activity  AS s
INNER JOIN Activity AS d ON (s.process_id = d.process_id AND s.machine_id = d.machine_id)
WHERE s.activity_type='start' AND d.activity_type = 'end' 
GROUP BY s.machine_id;
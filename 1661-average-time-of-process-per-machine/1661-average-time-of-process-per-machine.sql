# Write your MySQL query statement below

SELECT s.machine_id, ROUND(AVG(d.timestamp - s.timestamp),3) AS processing_time 
FROM Activity  AS s, Activity  AS d
WHERE s.activity_type='start' AND d.activity_type = 'end' AND s.process_id = d.process_id AND s.machine_id = d.machine_id
GROUP BY s.machine_id;
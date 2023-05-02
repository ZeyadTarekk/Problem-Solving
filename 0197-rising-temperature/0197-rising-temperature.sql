# Write your MySQL query statement below
SELECT DISTINCT fir.id
FROM weather as fir, weather AS sec
WHERE fir.temperature > sec.temperature 
AND DATEDIFF(fir.recordDate,sec.recordDate) = 1
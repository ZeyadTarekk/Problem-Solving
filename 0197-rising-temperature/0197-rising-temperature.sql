# Write your MySQL query statement below
# SELECT DISTINCT fir.id
# FROM weather AS fir, weather AS sec
# WHERE fir.temperature > sec.temperature 
# AND DATEDIFF(fir.recordDate,sec.recordDate) = 1

SELECT fir.id
FROM weather AS fir
WHERE fir.temperature > (
    SELECT sec.temperature 
    FROM weather AS sec 
    WHERE DATEDIFF(fir.recordDate,sec.recordDate)=1 
    )
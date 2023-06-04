# Write your MySQL query statement below
SELECT query_name,ROUND(SUM(rating/position)/COUNT(*),2) AS  quality,ROUND((COUNT(case when q.rating <3 then 1 else null end)/COUNT(*))*100,2) AS poor_query_percentage 
FROM Queries AS q
GROUP BY query_name;


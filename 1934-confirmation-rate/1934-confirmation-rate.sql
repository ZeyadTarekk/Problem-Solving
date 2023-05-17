# Write your MySQL query statement below

SELECT S.user_id, ifnull(ROUND(COUNT(case when action = 'confirmed' then 1 else null end)/ COUNT(action),2),0) AS confirmation_rate
FROM signups AS S
LEFT JOIN Confirmations AS C ON (S.user_id = C.user_id)
GROUP BY S.user_id
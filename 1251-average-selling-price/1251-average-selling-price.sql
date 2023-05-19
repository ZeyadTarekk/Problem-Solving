# Write your MySQL query statement below
SELECT p.product_id, ROUND(SUM(s.units*p.price)/SUM(s.units),2) AS 'average_price'
FROM prices AS p 
JOIN unitssold AS s ON(s.product_id = p.product_id AND s.purchase_date BETWEEN p.start_date AND p.end_date)
GROUP BY p.product_id;
# Write your MySQL query statement below
SELECT v.customer_id, COUNT(v.customer_id) AS count_no_trans 
FROM visits AS v
LEFT OUTER JOIN transactions AS t ON(v.visit_id=t.visit_id)
WHERE t.transaction_id IS NULL
GROUP BY v.customer_id;
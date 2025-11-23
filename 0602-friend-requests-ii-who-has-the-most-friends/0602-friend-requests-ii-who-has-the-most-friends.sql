SELECT id, 
       SUM(
           CASE 
               WHEN requester_id = id OR accepter_id = id THEN 1
               ELSE 0
           END
       ) AS num
FROM (
    SELECT requester_id AS id FROM RequestAccepted
    UNION
    SELECT accepter_id AS id FROM RequestAccepted
) AS AllUsers
JOIN RequestAccepted 
GROUP BY id
ORDER BY num DESC
LIMIT 1;

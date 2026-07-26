# Write your MySQL query statement below
select id 
from weather w
where w.temperature > ( select  temperature from weather w2 where w2.recordDate = DATE_SUB(w.recordDate, INTERVAL 1 DAY) ) 

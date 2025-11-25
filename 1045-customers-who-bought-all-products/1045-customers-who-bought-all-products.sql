# Write your MySQL query statement below


select prod_per_cust.customer_id  
from
(
select c.customer_id , count( distinct(c.product_key) ) as tot_per_cust
from customer as c
group by  c.customer_id

)  as prod_per_cust 

where prod_per_cust.tot_per_cust = ( select count(*) from Product) ; 

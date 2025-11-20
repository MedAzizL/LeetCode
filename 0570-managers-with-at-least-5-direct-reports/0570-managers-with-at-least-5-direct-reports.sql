# Write your MySQL query statement below
select Employee.name 
from Employee  INNER JOIN 
 ( 
select managerId,count(*) as tot
from Employee
group by( managerID) 
having (tot >= 5)    
 ) As Manag 
 ON Manag.managerId=Employee.id


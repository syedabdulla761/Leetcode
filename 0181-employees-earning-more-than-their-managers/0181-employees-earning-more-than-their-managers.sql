# Write your MySQL query statement below
select emp.name as 'Employee' from Employee emp join Employee mngr on mngr.id=emp.managerId where emp.salary>mngr.salary;


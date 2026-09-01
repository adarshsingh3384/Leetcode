# Write your MySQL query statement below
select e2.employee_id, e2.name, count(e1.employee_id) as reports_count,
round(avg(e1.age)) as average_age
from Employees as e2
join Employees as e1
on e2.employee_id = e1.reports_to
group by e2.employee_id, e2.name
order by e2.employee_id asc;
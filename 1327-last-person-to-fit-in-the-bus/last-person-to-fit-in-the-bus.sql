# Write your MySQL query statement below
select person_name 
from Queue q
where (
    select sum(q2.Weight)
    from Queue q2
    where q2.turn <= q.turn
) <= 1000
order by turn desc
limit 1;
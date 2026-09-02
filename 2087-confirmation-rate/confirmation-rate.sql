# Write your MySQL query statement below
select user_id, COALESCE(ROUND(AVG(action = 'confirmed'),2),0) as confirmation_rate
from Signups as s
left join Confirmations using (user_id)
group by s.user_id;
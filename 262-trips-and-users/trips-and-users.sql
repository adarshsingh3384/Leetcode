# Write your MySQL query statement below
SELECT 
    request_at AS Day,
    ROUND(
        SUM(status != 'completed') / COUNT(*),
        2
    ) AS `Cancellation Rate`
FROM Trips
JOIN Users u1
    ON Trips.client_id = u1.users_id
JOIN Users u2
    ON Trips.driver_id = u2.users_id
WHERE u1.banned = 'No'
  AND u2.banned = 'No'
  AND request_at BETWEEN '2013-10-01' AND '2013-10-03'
GROUP BY request_at;
-- https://leetcode.com/problems/the-latest-login-in-2020/

SELECT user_id, MAX(time_stamp) AS last_stamp
FROM Logins
WHERE time_stamp BETWEEN "2019-12-31 23:59:59" AND "2021-01-01 00:00:00"
GROUP BY user_id
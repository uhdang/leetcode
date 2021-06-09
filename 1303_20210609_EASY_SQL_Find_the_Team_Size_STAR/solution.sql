-- https://leetcode.com/problems/find-the-team-size/
-- # # Write your MySQL query statement below
SELECT a.employee_id, b.team_size FROM
    (
        SELECT employee_id, team_id, COUNT(team_id) as team_size
        FROM Employee
        GROUP BY 2
    ) b
        LEFT JOIN Employee a USING (team_id);
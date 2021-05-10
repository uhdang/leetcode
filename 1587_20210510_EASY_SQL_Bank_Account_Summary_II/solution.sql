-- Solution 1
SELECT Users.name, balance
    FROM (
        SELECT account, SUM(amount) AS balance FROM Transactions GROUP BY account
        ) AS B
        LEFT JOIN Users using (account) WHERE balance > 10000;


-- Solution #2
-- SELECT name, SUM(amount) AS balance FROM Transactions LEFT JOIN Users USING (account) GROUP BY 1 HAVING SUM(amount) > 10000;
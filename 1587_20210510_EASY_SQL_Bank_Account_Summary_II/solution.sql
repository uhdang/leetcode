SELECT Users.name, balance
    FROM (
        SELECT account, SUM(amount) AS balance FROM Transactions GROUP BY account
        ) AS B
        LEFT JOIN Users using (account) WHERE balance > 10000;
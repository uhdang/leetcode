-- https://leetcode.com/problems/find-customers-with-positive-revenue-this-year/
SELECT customer_id
FROM Customers
WHERE year = 2021 AND revenue > 0;
-- https://leetcode.com/problems/warehouse-manager/

SELECT a.name AS warehouse_name, SUM(b.volume * a.units) AS volume
FROM (
         SELECT product_id, (Width * Length * Height) AS volume
         FROM Products
     ) AS b
         JOIN Warehouse AS a USING (product_id)
GROUP BY warehouse_name;

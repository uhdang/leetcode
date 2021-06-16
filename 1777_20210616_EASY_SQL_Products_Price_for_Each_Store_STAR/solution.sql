-- // https://leetcode.com/problems/products-price-for-each-store/

SELECT p.product_id, s1.price AS store1, s2.price AS store2, s3.price AS store3
FROM (
         SELECT product_id
         FROM Products
     ) p
         LEFT JOIN
     (
         SELECT product_id, price
         FROM Products
         WHERE store = "store1"
     ) s1
     USING (product_id)
         LEFT JOIN
     (
         SELECT product_id, price
         FROM Products
         WHERE store = "store2"
     ) s2
     USING (product_id)
         LEFT JOIN
     (
         SELECT product_id, price
         FROM Products
         WHERE store = "store3"
     ) s3
     USING (product_id)
GROUP BY product_id;
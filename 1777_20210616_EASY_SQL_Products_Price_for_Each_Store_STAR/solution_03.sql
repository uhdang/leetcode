SELECT product_id
     , SUM(CASE WHEN store = 'Store1' THEN Price else null end) as store1
     , SUM(CASE WHEN store = 'Store2' THEN Price else null end) as store2
     , SUM(CASE WHEN store = 'Store3' THEN Price else null end) as store3
FROM Products
GROUP BY Product_id

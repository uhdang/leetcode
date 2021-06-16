select distinct product_id,
                sum(case when store = 'store1' then coalesce(price, 0) end) as store1,
                sum(case when store = 'store2' then coalesce(price, 0) end) as store2,
                sum(case when store = 'store3' then coalesce(price, 0) end) as store3
from products
group by product_id


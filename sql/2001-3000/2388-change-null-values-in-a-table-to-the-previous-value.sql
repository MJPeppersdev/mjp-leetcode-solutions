SELECT
    id,
    CASE
        WHEN drink IS NOT NULL THEN @cur := drink
        ELSE @cur
    END AS drink
FROM CoffeeShop;

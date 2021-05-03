# Mysql on Docker

## 1. Run server
```
docker run --name leetcode -e MYSQL_ROOT_PASSWORD=my-leetcode-pw -d mysql:5.7
```

## 2. Exec in to the server
```
docker exec -it leetcode bash
```

## 3. Login to mysql server
$ mysql -u root --password=my-leetcode-pw


## Commands
```
SHOW DATABASES;
CREATE DATABASE <name>;
DROP DATABASE <name>;
USE <databasename>;    # Use specific database
SELECT database();      # Show currently using database

SHOW TABLES;
DESC <tablename>
```
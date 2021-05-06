# Separate Review - @ uhdang.com

## C++

* compile
$ g++ [FILE.cpp]
  
* execute
$ ./a.out


## SQL

### Local MySQL Server
1. Run server
```
docker run --name leetcode -e MYSQL_ROOT_PASSWORD=my-leetcode-pw -d mysql:5.7
```

2. Exec in to the server
```
docker exec -it leetcode bash
```

3. Login to mysql server
$ mysql -u root --password=my-leetcode-pw


4. Import Schema + Content by sql file
$ mysql -u root -p [DB_NAME] < to/file/path.sql


[Commands]
```
SHOW DATABASES;
CREATE DATABASE <name>; # i.e. CREATE DATABASE leetcode_main
DROP DATABASE <name>;
USE <databasename>;    # Use specific database
SELECT database();      # Show currently using database

SHOW TABLES;
DESC <tablename>
```
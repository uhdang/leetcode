## C++

* compile
$ g++ [FILE.cpp]
  
* execute
$ ./a.out
  
### Note
- Reference 1470, 1119 for refactoring `class` with `header`.
  - ref: https://docs.microsoft.com/en-us/cpp/cpp/header-files-cpp?view=msvc-160
- Make sure to compile all used cpp files. i.e. for 1119, 
  $ c++ test.cpp Solution.cpp




## Java

1. Include main function to the java code
```
class Solution {
    public static void main(String[] args) {
        System.out.println("Solution main function");
    }
    
    ...
}
```

2. Compile the program
$ javac /path/to/Solution.java
   
3. Run compiled binary (Need to go to the directory)
$ java Solution




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
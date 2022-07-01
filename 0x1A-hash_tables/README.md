0x1A. C - Hash tables
Tasks
0-hash_table_create.c
betty hash_tables.h;

betty 0-hash_table_create.c; gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-hash_table_create.c -o a; ./a

1-djb2.c
betty 1-djb2.c; gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-djb2.c -o b; ./b

2-key_index.c
betty 2-key_index.c; gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 1-djb2.c 2-key_index.c -o c; ./c

3-hash_table_set.c
betty 3-hash_table_set.c; gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c -o d; ./d

4-hash_table_get.c
betty 4-hash_table_get.c; gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c -o e; ./e

5-hash_table_print.c
betty 5-hash_table_print.c; gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c 5-hash_table_print.c -o f; ./f

6-hash_table_delete.c
betty 6-hash_table_delete.c; gcc -Wall -pedantic -Werror -Wextra 6-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c 5-hash_table_print.c 6-hash_table_delete.c -o g; ./g

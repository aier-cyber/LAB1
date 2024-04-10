Команды для сборки; с double (всё делается из папки build)

cmake -DTYPE_DOUBLE=ON ..

ИЛИ без double (можно просто не указывать параметр TYPE_DOUBLE)

cmake -DTYPE_DOUBLE=OFF ..

Потом собираем проект и запускаем екзешник;

cmake --build . --config Release --target testname
Release\testname.exe
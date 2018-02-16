# Введение

Это шаблонный проект для конфигурирования сборки на CMake начиная с версии 3.5. Он влючает в себя 2 примера в виде application и library. 
Подпроекты объеденены родительским файлом CMakeLists.txt в корневой дирректории.

- library - пример динамической библиотеки c использованием qt.
- application - пример исполняемого графического приложения с использованием qt.

Проект создан для заимствования его как шаблона и создании на основе его своих проектов.

# Сборка проекта в консоли

Необходимо наличие путей в переменной окружения PATH до gcc, Cmake и Qt.
Если путь до Qt не задан то его можно задать в переменной  QT_DIR (-DQT_DIR="C:/Qt/Qt5.9.0/5.9/mingw53_32/").
Для сборки под другую версию библиотеки Qt нужно указать конктретную версию через переменную QT_VERSION (-DQT_VERSION=5.9.0)

**под Windows:**
```
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Debug [Release|Debug] -DCMAKE_INSTALL_PREFIX="install directory" -G "MinGW Makefile" ..
cmake --build . --target all
cmake --build .	--target install
```
**под Linux:**
Можно выполнить команды как и под Windows или следующие
```
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Debug [Release|Debug] -DCMAKE_INSTALL_PREFIX="install directory" ..
make
make install
```


# Настройка среды в QtCreator

Шаг 1. Настройка
Версии среды разработки: Qt 5.9, QtCreator 4.3.1, MinGW 5.3, CMake 3.8
Необходимо добавить в дирректорию PATH пути до
- Qt (C:\Qt\Qt5.9.0\5.9\mingw53_32\bin)
- MainGw (C:\Qt\Qt5.9.0\Tools\mingw530_32\bin)
- CMake (C:\Program Files (x86)\CMake\bin)

Настройка среды QtCreator осуществляется в "Инструмены"->"Параметры..", как показано на рисунке
![Image QtCreator settings](qt_creator_settings.jpg)

Дирректория установки задается в переменной окружения CMAKE_INSTALL_PREFIX

Шаг 2. Сборка проекта
Необходимо убрать теневую дирректорию сборки и указать путь с исходниками.
После открытия корневого файла CMakeLists.txt, необходимо выполнить CMake ("Сборка"->"Запустить CMake").
Далее можно собрать и установить.

Шаг 3. Установка
Можно настроить установку проекта по команде сmake -- target install. В настройках проекта в разделе запуск, добавить этап сборка с установленным параметром install. После этого будет доступен пункт "Сборка"->"Установить проект".


# Настройка среды в VisualStudio

Необходимо наличие путей в переменной окружения PATH до msvs компилятора, Cmake и Qt.
Если путь до Qt не задан то его можно задать в переменной  QT_DIR (-DQT_DIR="C:/Qt/Qt5.9.0/5.9/mingw53_32/").
Для сборки под другую версию библиотеки Qt нужно указать конктретную версию через переменную QT_VERSION (-DQT_VERSION=5.9.0)

Шаг 1. Необходимо из CMakeLists.txt собрать проектный файл для VS.

```
D:\tmp\CMake-VisualStudio-Example> mkdir build
D:\tmp\CMake-VisualStudio-Example> cd build
D:\tmp\CMake-VisualStudio-Example\_build> cmake .. -G "Visual Studio 15 2017 Win64"
```

"D:\tmp\CMake-VisualStudio-Example" корнивая дирректория с проектом. Для просмотра доступных генераторов Cmake --help. 
Шаг 2. В дирректории build будет создан *.sln файл для VS, которые можно открыть и работать в привычной среде.




# Введение и полезные ссылки

OpenScada QuickStart \ Быстрый старт  
Желательно посмотреть перед использованием и установкой:  
https://www.youtube.com/watch?v=laIyxYoT79Y

Статья на Хабре - стоит почитать после минимального использования:  
https://habrahabr.ru/post/238537/

Общее описание программы OpenSCADA на одной странице  
http://wiki.oscada.org/Doc/OpisanieProgrammy?v=146v#h920-16

Варианты работы и конфигурации openSCADA:  
http://wiki.oscada.org/Doc/OpisanieProgrammy/part3

Прочее:  
1. http://oscada.org/ru/forum/posts/raznoe/openscada_kak_posrednik_poseredine/  
2. http://oscada.org/ru/forum/posts/raznoe/2_proekta_na_raznykh_mashinakh/  
3. http://oscada.org/ru/forum/posts/vnedrenie_i_razrabotka_v_openscada/zapusk_proekta_s_udalennogo_servera/  


# Установка OpenSCADA:

**(!!! ВНИМАНИЕ !!!) Не забываем, что в инструкции по установке от автора, имеется только описание по установке для Ubuntu версий 12.04, 14.04, 16.04. Не пытайтесь ставить на Ubuntu 17 !!! (Предупреждение актуально на 01.02.2018)**

```
sudo apt update
sudo apt upgrade
```
We will follow the instruction from the author's web-site:  
http://oscada.org/ru/glavnaja/zagruzit/

Software & Updates -> Other Software -> Add  
"deb ftp://ftp.oscada.org/OpenSCADA/Work/Ubuntu/16.04 ./"

Software & Updates -> Other Software -> Authentication -> Import Key File  
Save file with Key from the Website "APTSignKey"  
Add it to the Keys in the  Authentication-edit-window  

Check if openscada is present:  
```
sudo su
root@our_user:/home/our_user# apt update
root@our_user:/home/our_user# apt-cache search openscada
root@our_user:/home/our_user# exit
```
```
sudo apt install openscada
```

(!) IF PROBLEM WITH: libmysqlclient18 appears

(The following packages have unmet dependencies:  
 openscada : Depends: libmysqlclient18 (>= 5.5.24+dfsg-1) but it is not installable  
 E: Unable to correct problems, you have held broken packages.)

Download .deb file from here:  
https://packages.debian.org/jessie/amd64/libmysqlclient18/download

launch and install the deb-file for libmysqlclient18


Reinsall openscada again and correctly:
```
sudo apt install openscada
```

If you also wanto to install the project AGLKS-station use this command after openSCADA is installed:
```
sudo apt install openscada-model-aglks
```


# Варианты настройки для использования

Термины и обозначения:  
- Источник данных (далее **Источник**) = Сервер = Slave (в терминах ModBus)
- Посредник ретранслятор (далее (*)**Ретранслятор**) 
- Получатель данных (далее **Получатель**) = Клиент = Master (в терминах ModBus)

(*)**Ретранслятор** – Одновременно и Получатель, ибо получает данные от Источника, и Источник для ещё одного стороннего / конечного Получателя

# Вариант 1 
**Источник (Modbus Emulator) -> Получатель (openSCADA)**

# Вариант 2
**Источник (openSCADA) -> Получатель (openSCADA)**

# Вариант 3
**Источник (Modbus Emulator) -> Ретранслятор (openSCADA) -> Получатель (openSCADA)** 

На Ретрансляторе: 
- Транспорты Сокеты
- Добавляем Входной транспорт
- Внутри указываем адрес: `TCP::10005:1`

(В принципе такой транспорт уже создан по умолчанию в системе, и называется «Self», можем пользоваться им)

На клиенте настраивается раздел:
- Жмём на «Транспорты»
- Справа открорется вкладка «Подсистема Транспорты», в которой видим перечень Внешних хостов  
(или Системные внешние хосты (галочка установлена))

Добавляем запись во внешние хосты:
- Вводим **ИМЯ_ХОСТА**
- Вводим id.
- Далее в поле адрес для сокета вводим: `TCP:192.168.1.10:10005` (`192.168.1.10` - ip адрес ретранслятора).
- Так же вводим логин и пароль для доступа к серверу. (по умолчанию log: roman, pass: roman)
- Столбец "Режим" выставляем "Пользователь и Система"

На Клиенте в разделе 
- Интерфейсы Пользователя  
- Рабочий пользовательский интерфейс (QT)  
- Выбрали пользователя (дефолтный roman)
- Ввели его пароль (дефолтный roman)
- Станция движка СВУ выбираем (**ИМЯ_ХОСТА**) имя станции-сервера созданной в разделе системные внешние хосты.
 
Далее запускаем рабочий пользовательский интерфейс. Все!

Если в разделе Транспорты-перечень внешних хостов 
галочка "Системные внешние хосты" не установлена и введено название и параметры связи с сервером, то в списке станций на клиенте   появляется проект, запущенный на сервере. Его можно редактировать с клиента.





# MFC All Controls App
MFC Project with most used Interface elements shown on one Dialog-window with russian translation for everyone who is not familiar with the Interface-Elements in a Software-Product.



apt update 
apt upgrade
apt-get upgrade

apt install ifconfig net-tools openssh-server

apt install mc



mkdir develop
cd develop/
svn co http://oscada.org/svn/trunk/OpenSCADA/

cd OpenSCADA/
autoreconf -if
./configure
make
install



make clean



wget -O - http://ftp.oscada.org/Misc/pkgSignKey | sudo apt-key add 

wget -m ftp://ftp.oscada.org/OpenSCADA/Work/Ubuntu/16.04 /home/superuser/Downloads

wget http://ftp.oscada.org/Misc/pkgSignKey
apt-key add pkgSignKey
apt update

nano /etc/apt/sources.list

apt-cache search SCADA



apt-get install openscada-Model.AGLKS
apt-get install openscada-Model.AGLKS --allow-unauthenticated
apt-get install openscada-Model.AGLKS --allow-unauthenticated


chmod +x open-scada-install-depend




libtool pkg-config
zlib1g-dev
libpcre3-dev
libssl-dev
libqt4-dev
bison
sqlite3
libsqlite3-dev
libmysql++-dev


---------------------- OPEN SCADA INSTALL DEPENDENCIES -------------------------

#!/usr/bin/env bash

apt update
apt install -y pkg-config libtool zlib1g-dev libpcre3-dev libssl-dev libqt4-dev bison sqlite3 libsqlite3-dev libmysql++-dev


---------------------- OPEN SCADA CONFIGURE --------------------------------------

./configure --disable-graphics --other-flags


---------------------- OPEN SCADA BUILD ------------------------------------------

#!/usr/bin/env bash

apt install autoconf pkg-config




#!/usr/bin/env bash

apt update
apt install -y libtool zlib1g-dev libpcre3-dev libssl-dev libqt4-dev bison sqlite3 libsqlite3-dev libmysql++-dev

apt-cache search gcc


apt-get install libasound2-dev portaudio19-dev libportaudio2 libportaudiocpp

apt install mc gawk libclang-dev clang-3.8 libfbclient2 firebird-dev libsnmp-dev



checking portaudio.h usability... no
SOLUTION:  https://stackoverflow.com/questions/20023131/cannot-install-pyaudio-gcc-error



    First we need to install portaudio module

    sudo apt-get install libasound-dev

    Download portaudio from http://portaudio.com/download.html

    tar -zxvf [portaudio.tgz]

    Enter the directory, ./configure && make

    sudo make install

    sudo pip install pyaudio

    Check the version of pyaudio, it should be 0.2.9


checking fftw3.h usability... no
SOLUTION:  http://www.fftw.org/download.html

sudo ./configure

sudo make install




checking for QtWebKit... no
SOLUTION:

apt install qt-sdk


sudo apt install qt5-default

apt install qtcreator



checking for gdlib... no


sudo apt-get install libglib2.0-dev

sudo apt-get install libgtk2.0-dev

apt install libgd-dev libghc-gd-dev



checking phonon/VideoPlayer presence... no

SOLUTION
apt install libphonon-dev



libphonon-dev libphonon-perl libphonon4 libphonon4qt5-4 libphonon4qt5-dev libphonon4qt5experimental-dev libqtscript4-phonon libsmokephonon3 phonon

phonon-backend-gstreamer





















./configure --disable-option-checking --prefix=/usr/local --without-netsnmp --without-gtk2 --with-ssl=/usr/local/opt/openssl --with-sqlite3=/usr/local/opt/sqlite --with-unixodbc=/usr/local/opt/unixodbc CC=/usr/local/bin/gcc-4.8 CXX=/usr/local/bin/g++-4.8 CPP=/usr/local/bin/cpp-4.8 CFLAGS=-fno-strict-aliasing
CC=/usr/local/bin/gcc-4.8 ; CXX=CC=/usr/local/bin/g++-4.8 ; CPP=/usr/local/bin/cpp-4.8 ; CFLAGS=-fno-strict-aliasing ; make menuselect/cmenuselect menuselect/nmenuselect menuselect/gmenuselect menuselect/menuselect menuselect-tree menuselect.makeopts
menuselect/menuselect --enable DISABLE_INLINE menuselect.makeopts


superuser@superuser-Z370-HD3P:~$ mkdir develop
superuser@superuser-Z370-HD3P:~$ cd develop/
superuser@superuser-Z370-HD3P:~/develop$ svn co http://oscada.org/svn/trunk/OpenSCADA/



autoreconf -if


superuser@superuser-Z370-HD3P:~/develop/OpenSCADA$ ./configure --help
-- HELPING INFORMATION HOW TO LAUNCH


superuser@superuser-Z370-HD3P:~/develop/OpenSCADA$ ./configure 
checking build system type... x86_64-pc-linux-gnu
checking host system type... x86_64-pc-linux-gnu
checking target system type... x86_64-pc-linux-gnu
checking for a BSD-compatible install... /usr/bin/install -c
checking whether build environment is sane... yes
checking for a thread-safe mkdir -p... /bin/mkdir -p
checking for gawk... no
checking for mawk... mawk
checking whether make sets $(MAKE)... yes


superuser@superuser-Z370-HD3P:~/develop/OpenSCADA$ ./configure --help



---------------------- OPEN SCADA MAKE ------------------------------------------

After Build just use

make


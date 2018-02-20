
apt-get install libmysql++-dev

sudo apt-get install sqlite3 libsqlite3-dev

sudo apt-get install firebird2.5-examples firebird2.5-dev 

sudo apt-get install postgresql postgresql-contrib

sudo apt-get install libsnmp-dev





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


#!/bin/bash
sudo java -version
read -p "Press [Enter]..."
sudo add-apt-repository ppa:webupd8team/java
sudo apt-get update
sudo apt-get install oracle-java8-set-default
echo oracle-java8-set-default shared/accepted-oracle-license-v1-1 select true | sudo /usr/bin/debconf-set-selections
sudo java -version
sudo update-alternatives --config java
echo 
echo 
echo 
echo 
echo Listo!
echo 
echo 
echo 

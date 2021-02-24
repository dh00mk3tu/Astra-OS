# Active Branch - Astra OS
Active Branch of Astra-OS; refer this file to get started.


---
##    Get Started
###   Check Version 
####  You need to check the version of all the required libraries. To do this, run the following command after cloning the repo branch 'dev'

```bash 
./version-check.sh
```
---
##### FAQ on Version Check
1. If the terminal says 'Permission Denied';
execute the following command 

```bash
chmod 777 version-check.sh
```
2. Error in Line 2 

```bash 
bin/sh does not point to bash
```
To fix this, switch to root user & enter the following command

```bash 
ln -sf bash /bin/sh
```
or enter this if you're not the root user

```bash 
sudo ln -sf bash /bin/sh
```

3. On Line 43; 

```bash
makeinfo: command not found.
```

To fix this,

```bash
apt install texinfo
```
or 
```bash 
sudo apt install texinfo
``` 

#!/bin/sh
TARGET_FILE="$1"/hard_reboot

gcc -o hard_reboot hard_reboot.c -DNODEBUG -static
mv -v hard_reboot "$TARGET_FILE"
sudo groupadd reboot
sudo usermod -aG reboot $(whoami)
sudo chown root:reboot "$TARGET_FILE"
sudo chmod 4710 "$TARGET_FILE"

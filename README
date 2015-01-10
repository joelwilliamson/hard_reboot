hard_reboot
===========

`hard_reboot` is a program that allows the rebooting of a Linux system without
accessing any hard drive except the one `hard_reboot` is installed to. This is
most useful when the root partition fails on a remote computer. The regular
shutdown techniques (on Arch) are closely tied to systemd, and fail if /
is unreadable. It is possible to hard reset without reading or writing any data
(except sudo) via

    sudo echo 1 >/proc/sys/kernel/sysrq
    sudo echo b >/proc/sysrq-trigger

This program automates that procedure, and **provides privilege escalation**.
Execute "./install install_dir", where *install_dir* is a directory on a
reliable partition. When it is necessary to reboot, execute

    install_dir/hard_reboot

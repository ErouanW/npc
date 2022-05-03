#!/bin/bash

set -e

gcc npc.c -o "npc"
sudo mv "npc" "/usr/local/bin/npc"
clear
echo "Successfully installed !"
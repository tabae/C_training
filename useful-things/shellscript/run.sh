#!/bin/bash

for i in {1..8}
do
    echo '-------------------------------'
    arg=$((10**${i}))
    ./exe ${arg}
done
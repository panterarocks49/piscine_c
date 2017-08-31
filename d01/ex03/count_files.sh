#!/bin/bash

find . -type f -o -type d | wc -l | grep -Eo '[0-9]+'

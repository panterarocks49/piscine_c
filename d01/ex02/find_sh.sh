#!/bin/bash

find . -type f -name "*.sh" -exec basename {} \; | sed 's/...$//g'  

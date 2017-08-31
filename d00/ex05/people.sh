#!/bin/bash

ldapsearch cn="z*" | grep cn: | sort -rf

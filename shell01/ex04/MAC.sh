#!/bin/bash
ifconfig | grep "ether" | sed 's/\(.*\)ether //g' | cut -b 1-17

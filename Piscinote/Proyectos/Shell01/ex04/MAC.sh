#!/bin/sh

ifconfig | grep ether | awk '{print $2}'

# Archivos con dirección MAC | selecciona los archivos ethernet | muestra solo la dirección MAC de los archivos

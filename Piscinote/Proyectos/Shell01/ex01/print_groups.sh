#!/bin/sh

id -Gn $FT_USER | tr ' ' ',' |  tr -d '\n'

# Grupos a los que pertenece el usuario | transforma ' ' por ',' | elimina (-d) los saltos de línea ('\n')

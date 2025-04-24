#!/bin/sh

find . -type f -name "*.sh" -exec basename {} .sh \;

# Encuentra (find) todos (.) los archivos de tipo "file" (-type f) cuyo nombre acabe en ".sh" (-name "*.sh") y que los ejecute (-exec) con el nombre base sin el ".sh" (basename {} .sh).

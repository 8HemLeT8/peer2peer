#pragma once
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "Node/node.h"

#define COMMA ","
#define COLON ":"

bool check_setid(Node* node, char* string);
bool check_connect(Node* node, char* string);
bool check_send(Node* node, char* string);
bool check_route(Node* node, char* string);
bool check_peers(Node* node, char* string);

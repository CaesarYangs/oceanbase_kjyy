//
// Created by CaesarYang on 2023/10/18.
//

#pragma once

#include <limits.h>
#include <algorithm>
#include <stdint.h>
#include <stdio.h>
#include <string>
#include <sstream>
#include "sql/parser/parse.h"

#include "common/log/log.h"
#include "common/lang/string.h"

RC string_to_date(const char *str ,int32_t &date);

std::string date_to_string(int32_t date);
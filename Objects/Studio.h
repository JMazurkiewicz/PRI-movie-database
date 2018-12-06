#pragma once

#include <stdbool.h>
#include "Utility/String.h"

typedef struct Studio {

    String name;
    String address;
    String contact;
    int yearOfFounding;

} Studio;

bool hasStudioThisName(const Studio* studio, StringView name);

void scanStudiosName(String name);
void scanStudio(Studio* studio);

void printStudio(const Studio* studio);

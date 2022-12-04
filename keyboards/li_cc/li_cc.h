#pragma once

#include "quantum.h"

#define LAYOUT_li_cc(E00, E01, K00, K01, K02, K03, K10, K11, K12, K13 ) \
{ {E00, E01}, { K00, K01, K02, K03 }, { K10, K11, K12, K13 } }
#define LAYOUT LAYOUT_li_cc

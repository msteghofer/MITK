/*===================================================================

The Medical Imaging Interaction Toolkit (MITK)

Copyright (c) German Cancer Research Center,
Division of Medical and Biological Informatics.
All rights reserved.

This software is distributed WITHOUT ANY WARRANTY; without
even the implied warranty of MERCHANTABILITY or FITNESS FOR
A PARTICULAR PURPOSE.

See LICENSE.txt or http://www.mitk.org for details.

===================================================================*/

#ifndef _lut_Jet_h_
#define _lut_Jet_h_

// Jet color table as known from Matlab.
// The values were procedurally generated by linear interpolation over the following colors:
static const int Jet[256][3]={
  {0,   0,   127}, // dark blue
  {0,   0,   131},
  {0,   0,   135},
  {0,   0,   139},
  {0,   0,   143},
  {0,   0,   147},
  {0,   0,   151},
  {0,   0,   155},
  {0,   0,   159},
  {0,   0,   163},
  {0,   0,   167},
  {0,   0,   171},
  {0,   0,   175},
  {0,   0,   179},
  {0,   0,   183},
  {0,   0,   187},
  {0,   0,   191},
  {0,   0,   195},
  {0,   0,   199},
  {0,   0,   203},
  {0,   0,   207},
  {0,   0,   211},
  {0,   0,   215},
  {0,   0,   219},
  {0,   0,   223},
  {0,   0,   227},
  {0,   0,   231},
  {0,   0,   235},
  {0,   0,   239},
  {0,   0,   243},
  {0,   0,   247},
  {0,   0,   255}, // blue
  {0,   3,   255},
  {0,   7,   255},
  {0,   11,  255},
  {0,   15,  255},
  {0,   19,  255},
  {0,   23,  255},
  {0,   27,  255},
  {0,   31,  255},
  {0,   35,  255},
  {0,   39,  255},
  {0,   43,  255},
  {0,   47,  255},
  {0,   51,  255},
  {0,   55,  255},
  {0,   59,  255},
  {0,   63,  255},
  {0,   67,  255},
  {0,   71,  255},
  {0,   75,  255},
  {0,   79,  255},
  {0,   83,  255},
  {0,   87,  255},
  {0,   91,  255},
  {0,   95,  255},
  {0,   99,  255},
  {0,   103, 255},
  {0,   107, 255},
  {0,   111, 255},
  {0,   115, 255},
  {0,   119, 255},
  {0,   123, 255},
  {0,   127, 255}, // azure
  {0,   131, 255},
  {0,   135, 255},
  {0,   139, 255},
  {0,   143, 255},
  {0,   147, 255},
  {0,   151, 255},
  {0,   155, 255},
  {0,   159, 255},
  {0,   163, 255},
  {0,   167, 255},
  {0,   171, 255},
  {0,   175, 255},
  {0,   179, 255},
  {0,   183, 255},
  {0,   187, 255},
  {0,   191, 255},
  {0,   195, 255},
  {0,   199, 255},
  {0,   203, 255},
  {0,   207, 255},
  {0,   211, 255},
  {0,   215, 255},
  {0,   219, 255},
  {0,   223, 255},
  {0,   227, 255},
  {0,   231, 255},
  {0,   235, 255},
  {0,   239, 255},
  {0,   243, 255},
  {0,   247, 255},
  {0,   251, 255},
  {0,   255, 255}, // cyan
  {3,   255, 251},
  {7,   255, 247},
  {11,  255, 243},
  {15,  255, 239},
  {19,  255, 235},
  {23,  255, 231},
  {27,  255, 227},
  {31,  255, 223},
  {35,  255, 219},
  {39,  255, 215},
  {43,  255, 211},
  {47,  255, 207},
  {51,  255, 203},
  {55,  255, 199},
  {59,  255, 195},
  {63,  255, 191},
  {67,  255, 187},
  {71,  255, 183},
  {75,  255, 179},
  {79,  255, 175},
  {83,  255, 171},
  {87,  255, 167},
  {91,  255, 163},
  {95,  255, 159},
  {99,  255, 155},
  {103, 255, 151},
  {107, 255, 147},
  {111, 255, 143},
  {115, 255, 139},
  {119, 255, 135},
  {123, 255, 131},
  {127, 255, 127}, // light green
  {131, 255, 124},
  {135, 255, 120},
  {139, 255, 116},
  {143, 255, 112},
  {147, 255, 108},
  {151, 255, 104},
  {155, 255, 100},
  {159, 255, 96 },
  {163, 255, 92 },
  {167, 255, 88 },
  {171, 255, 84 },
  {175, 255, 80 },
  {179, 255, 76 },
  {183, 255, 72 },
  {187, 255, 68 },
  {191, 255, 64 },
  {195, 255, 60 },
  {199, 255, 56 },
  {203, 255, 52 },
  {207, 255, 48 },
  {211, 255, 44 },
  {215, 255, 40 },
  {219, 255, 36 },
  {223, 255, 32 },
  {227, 255, 28 },
  {231, 255, 24 },
  {235, 255, 20 },
  {239, 255, 16 },
  {243, 255, 12 },
  {247, 255, 8  },
  {251, 255, 4  },
  {255, 255, 0  }, // yellow
  {255, 251, 0  },
  {255, 247, 0  },
  {255, 243, 0  },
  {255, 239, 0  },
  {255, 235, 0  },
  {255, 231, 0  },
  {255, 227, 0  },
  {255, 223, 0  },
  {255, 219, 0  },
  {255, 215, 0  },
  {255, 211, 0  },
  {255, 207, 0  },
  {255, 203, 0  },
  {255, 199, 0  },
  {255, 195, 0  },
  {255, 191, 0  },
  {255, 187, 0  },
  {255, 183, 0  },
  {255, 179, 0  },
  {255, 175, 0  },
  {255, 171, 0  },
  {255, 167, 0  },
  {255, 163, 0  },
  {255, 159, 0  },
  {255, 155, 0  },
  {255, 151, 0  },
  {255, 147, 0  },
  {255, 143, 0  },
  {255, 139, 0  },
  {255, 135, 0  },
  {255, 131, 0  },
  {255, 127, 0  }, // orange
  {255, 124, 0  },
  {255, 120, 0  },
  {255, 116, 0  },
  {255, 112, 0  },
  {255, 108, 0  },
  {255, 104, 0  },
  {255, 100, 0  },
  {255, 96,  0  },
  {255, 92,  0  },
  {255, 88,  0  },
  {255, 84,  0  },
  {255, 80,  0  },
  {255, 76,  0  },
  {255, 72,  0  },
  {255, 68,  0  },
  {255, 64,  0  },
  {255, 60,  0  },
  {255, 56,  0  },
  {255, 52,  0  },
  {255, 48,  0  },
  {255, 44,  0  },
  {255, 40,  0  },
  {255, 36,  0  },
  {255, 32,  0  },
  {255, 28,  0  },
  {255, 24,  0  },
  {255, 20,  0  },
  {255, 16,  0  },
  {255, 12,  0  },
  {255, 8,   0  },
  {255, 4,   0  },
  {255, 0,   0  }, // red
  {251, 0,   0  },
  {247, 0,   0  },
  {243, 0,   0  },
  {239, 0,   0  },
  {235, 0,   0  },
  {231, 0,   0  },
  {227, 0,   0  },
  {223, 0,   0  },
  {219, 0,   0  },
  {215, 0,   0  },
  {211, 0,   0  },
  {207, 0,   0  },
  {203, 0,   0  },
  {199, 0,   0  },
  {195, 0,   0  },
  {191, 0,   0  },
  {187, 0,   0  },
  {183, 0,   0  },
  {179, 0,   0  },
  {175, 0,   0  },
  {171, 0,   0  },
  {167, 0,   0  },
  {163, 0,   0  },
  {159, 0,   0  },
  {155, 0,   0  },
  {151, 0,   0  },
  {147, 0,   0  },
  {143, 0,   0  },
  {139, 0,   0  },
  {135, 0,   0  },
  {131, 0,   0  },
  {127, 0,   0  }}; // dark red

#endif

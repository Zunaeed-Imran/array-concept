
i: 0
j: 0

{ 12, 3, 1, 5, 18, 10, 7, 35 }

for (0) {
  for (0) {
    if (12 < 12) {
    }
  }
}

=-=-=

i: 0
j: 1

{ 12, 3, 1, 5, 18, 10, 7, 35 }
{ 3, 3, 1, 5, 18, 10, 7, 35 }
{ 3, 12, 1, 5, 18, 10, 7, 35 }

for (0) {
  for (1) {
    if (3 < 12) {
      temp: 12
      arr[0]: 3
      arr[1]: 12
    }
  }
}

=-=-=

i: 0
j: 2

{ 3, 12, 1, 5, 18, 10, 7, 35 }
{ 1, 12, 1, 5, 18, 10, 7, 35 }
{ 1, 12, 3, 5, 18, 10, 7, 35 }

for(0) {
  for (2) {
    if (1 < 3) {
      temp: 3
      arr[0]: 1
      arr[2]: 3
    }
  }
}
   
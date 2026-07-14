# CPPStudyProjects

All programs were compiled using a Bash script

```bash
#!/usr/bin/bash

FILE="$1"

g++ -std=c++17 -g -rdynamic -o2 -march=native -Wall -o Program $FILE

chmod +x Program

./Program
```

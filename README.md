# Codeforces Practice

A collection of standalone C solutions to Codeforces practice problems and contests.

## Repository layout

```text
.
├── Level 800/                 # Problems around the 800 rating level
├── CodeForces Div2/            # Div. 2 and Educational rounds
├── CodeForces DIv3/            # Div. 3 rounds
└── CodeForces Div4/            # Div. 4 rounds
```

Contest solutions are grouped by round, with files named by problem letter (for example, `ProbA.c`). Rating practice solutions are grouped in `Level 800/`.

## Compile and run a solution

Each source file is an independent program. From the repository root, compile a solution with a C compiler such as GCC:

```sh
gcc -std=c11 "CodeForces Div4/Codeforces Round 806 (Div. 4)/ProbA.c" -o solution
./solution
```

Provide input through standard input, as required by the problem. Replace the source path with the solution you want to run.

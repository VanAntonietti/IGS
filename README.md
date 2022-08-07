<div>
<p align="center">
   <img src="https://www.igs-software.com.br/img/logo.png" alt="Github-Explorer" width="500"/>
</p>
</div>
<p align="center">
  <a href="https://github.com/VanAntonietti/IGS/commits/master">
    <img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/VanAntonietti/IGS?color=01ca73">
  </a>
</p>

<div align="center">
  <sub> Technical test for a position as Software Engineer
    </a>
  </sub>
</div>

# IGS Solutions Technical Test

## Table of contents

- [Tech stack](#tech-stack)
- [How to run](#how-to-run)
- [Question 1 Pthread](#question-1-pthread)
- [License](#LICENSE)

## What is this?

This is a 5 question test, to test a constellation of skill sets in C.

## Tech stack

- ANSI C
- Makefile

## How to run

First clone this repository

```sh
git clone https://github.com/VanAntonietti/IGS.git
```

And then run

```sh
cd IGS
```

All the 5 questions are separated in folders, for example, to compile question 1 just run:

```sh
cd question-1
```

Run make command:

```sh
make
```

And after that execute the elf-binary.

```sh
./question-1
```
Change the number of the question folder to change the question compiled.

## Question 1 Pthread

The question 1 was done twice, one using normal methods and other using pthread, for a more performant code.

## License

This project is under the [GNU General Public License v3](LICENSE).

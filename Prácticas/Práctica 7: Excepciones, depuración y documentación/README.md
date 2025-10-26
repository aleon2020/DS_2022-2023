# Práctica 7: Excepciones, Depuración y Documentación

This practice requires you to complete three exercises, each related to different concepts covered in the course.

These three concepts are: Exception Handling, Debugging with GDB, and Documentation with Doxygen. Below is a brief explanation of what was done in each of them:

## Exercise 1: Exception Handling

Exceptions have been primarily used to display a message on the screen if the option entered is incorrect, or if the user data entered, either for logging into the system or for creating/deleting user data in user management, is incorrect.

## Exercise 2: Debugging with GDB

The program was also debugged with GDB by using breakpoints in some of the places indicated in the exercise.

## Exercise 3: Documentation with Doxygen

The steps to generate system documentation with Doxygen are detailed below:

- Create an empty directory called ['doxygen-doc'](https://github.com/aleon2020/DS_2022-2023/tree/main/Pr%C3%A1cticas/Pr%C3%A1ctica%207%3A%20Excepciones%2C%20depuraci%C3%B3n%20y%20documentaci%C3%B3n/src/doxygen-doc) where all documentation will be stored, both in HTML and Latex.

```bash
mkdir doxygen-doc
```

- Create the file ['Doxyfile'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%207%3A%20Excepciones%2C%20depuraci%C3%B3n%20y%20documentaci%C3%B3n/src/Doxyfile), in which the following lines have been modified according to how the documentation is to be seen:

```bash
doxygen -g Doxyfile
```

Line 35: PROJECT_NAME = “JULIO VEGANOS E HIJOS DOCUMENTATION”.

Line 47: PROJECT_BRIEF = “Doxygen documentation of my system”.

Line 61: OUTPUT_DIRECTORY = “doxygen-doc”.

Once all this is done, doxygen must be run in the directory where all the source and header files are stored, thus generating it within the directory ['doxygen-doc'](https://github.com/aleon2020/DS_2022-2023/tree/main/Pr%C3%A1cticas/Pr%C3%A1ctica%207%3A%20Excepciones%2C%20depuraci%C3%B3n%20y%20documentaci%C3%B3n/src/doxygen-doc) all system documentation, both in HTML and LaTeX.

To view the HTML documentation: Inside the repository [doxygen-doc/html](https://github.com/aleon2020/DS_2022-2023/tree/main/Pr%C3%A1cticas/Pr%C3%A1ctica%207%3A%20Excepciones%2C%20depuraci%C3%B3n%20y%20documentaci%C3%B3n/src/doxygen-doc/html), the following command must be executed in the terminal.

```bash
firefox index.html
```

To view the LATEX documentation: Inside the repository [doxygen-doc/latex](https://github.com/aleon2020/DS_2022-2023/tree/main/Pr%C3%A1cticas/Pr%C3%A1ctica%207%3A%20Excepciones%2C%20depuraci%C3%B3n%20y%20documentaci%C3%B3n/src/doxygen-doc/latex) in the file ['refman.pdf'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%207%3A%20Excepciones%2C%20depuraci%C3%B3n%20y%20documentaci%C3%B3n/src/doxygen-doc/latex/refman.pdf), the system documentation is available in PDF format.

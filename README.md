# Topic: Modularity

## Divide into files

### Summary:
The 25-pair color code, is used to identify wires in telecommunications cables.
Different codes are used for wire leads on devices such as transformers or in building wiring.
For more details refer to [This Wiki](https://en.wikipedia.org/wiki/25-pair_color_code). 

There are 25 possible pairs of colors. 

- Each pair of colors maps to a corresponding number
- Such numbers translate to a pair of colors -
a major color and a minor color

## Exercise Details:

### Modularity

The entire translation program is in a single file.
Before adding features and making it bigger,
split the file.
This exercise has a limit on the loc (lines of code)
per file. See the workflow for details.

### New Feature Request

The color coding needs to be printed as a reference manual for wiring personnel.
This manual is a mapping from the color-names to the corresponding numbers.
Add a function that would format the color coding in a form that someone can print.
Also resolve any coding guideline violations.

### To do
1. ✅ Make Cmake project
2. ✅ Add gtest
3. ✅ Seperate test
4. ✅ Line of code must be less than 50 
5. ✅ Use SRP, DRY and MOCK cout dependency injection when testing I/0 by passing function paramter.
6. ✅ Use dictionary or vector to compute color pair table first.
7. ✅ Use proper naming
8. ✅ Add explaination.txt to explain what was done.
9. ✅ seperate pure function 

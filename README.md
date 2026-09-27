# Basic Calculus Calculator

A Calculator designed to work on the basics on the differentiation and integration of variables and coefficients, it was as well designed in C language though it has a few bugs with the file handling for saving answers to ```integral.txt``` and ```differential.txt``` and loops
but works for getting answers to a question on basic differentiation and integration.

# Features
- [x] It uses structure and type definition 
- [x] It also uses multiple headers and an umbrella header in the ```library/calculus.h```
- [x] Custom made data types like ```Differentiate```, ```Monomial```, ```Monomial1```, and ```Integrate``` where Made as well
- [x] Custom made functions were created to aid in the calculations
- [x] Does file handling but there are some errors and bugs in the program which will eventually be fixed later

# How to clone and use
Note: I use a Linux based environment (mostly Ubuntu and Termux) but any Linux based environment or Linux distro works. Windows also work as well but you'll need to install the official compiler for C in it, as Linux has C pre installed 

First is to clone it by
```
git clone https://github.com/Lawrence-The-Cinarian/basic-calculus-calculator.git
```

Next change directory 
```
cd basic-calculus-calculator
```

Then finally run this
```
gcc {src/main,library/{differential,integral,libprint}}.c -o main && ./main
```

To check if your prompts or information was saved, Run this
```
nano differential.txt
```
Then to exit the editor, press this on your keyboard..
```CTRL + X```, then ```Y```, and press ```Enter```
then repeat the same process for ```integral.txt```

# Contribution
Any body can contribute to this project, as it's open sourced

©2026, Built by Lawrence The Cinarian

# CaliforniaWildfire-2013-2020
![Xcode](https://img.shields.io/badge/Xcode-007ACC?style=for-the-badge&logo=Xcode&logoColor=white)
![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
[![Licence](https://img.shields.io/github/license/Ileriayo/markdown-badges?style=for-the-badge)](./LICENSE)


## Description
In this project, we analyzed data sets for California Wildfires ranging from 2013 to 2020 and implemented sorting functions to get a better understanding on the main areas of damage, number of deaths, fatalaties, structures damaged or destroyed, etc. Through this output we were able to design special solutions to prevent wildfires in certain areas and create awareness for precautions and actions to take in the society.

## Install and Run using g++ Compiler
1. The .csv files will be read by ios and fstream.
2. We have a menu to let the user choose how they want to see the
   data. The list of buttons are 1) alphabetical order county, 2) # of injuries,
   3) # of acres destroyed, 4) two buttons: a)# of people got involved near
   river and b)# of people got involved by forest. We are going to use switch
   function, while function, case, and default function for the menu.
3. Insertion sorting list by (alphabetical order, # of injuries, # of
   acres destroyed, #acres burned per year)
4. Search by specific county
5. Unique print for sorting list descending order
6. Using cases to create a menu to allow user to choose what order they want to

## Contents
* We had used a list of built-in data types: string, int, and void
* The list of user-defined datatypes are constructor and vec for fire info.
* The strategies adopted by our team was to see a list of all the
California Wildfire’s descriptions to know the place what is happening.
* Each row and column should be printing out numbers and fire type to
know what is happening in this place. Each column should have a long
line to separate between other descriptions. Our results should have good
ascending order from top to bottom or from largest to least.

## Our Strategy
Our efficiency was to use for loop more than a vector to be more
efficient and time, but we used a vector to carry a list of numbers and
string. I was thinking about using string multidimensional array with fixed
size for more efficient and time than vector.

## Available Functions
Sorting:
* Fire with most acres burned
* Counties with most acres burned overall (2013-2020)
* Most affected county per year including acres burned.
* Fires by county listed in alphabetical order
* Fires by most fatalities
* Fires by most injuries
* Fires by most damage to structures
* Fires by most destroyed structures

# practice

There are some programs that I wrote for practice.  

### Table of Contents
- [Overview](#overview)  
- [Usage](#usage)  
  - [Windows](#windows)  
  - [macOS](#macos)  
- [Directory Structure](#directory-structure)  
- [Highlights](#highlights)  
  - [BMI Calvulator](#bmi-calculator)
  - [Number Guessing Game](#number-guessing-game)  
  - [Zoadic Sign Checker](#zoadic-sign-checker)  
  - [English Word Quiz](#english-word-quiz)  

## Overview

This is a repository of some small programs I created for practice.  
All files are simple and can be executed directly from the command line.  

Please note that all programs currently output in Japanese.

## Usage

### Windows

<details>
<summary>C files</summary>

1. Check if GCC(such as MinGW) is installed.    
    If not, download it from:  
      [MinGW-w64](https://sourceforge.net/projects/mingw-w64/)  
2. Open the Command Prompt.  
3. Navigate to the directory containing the source code:  

    ```shell
    cd path\to\c_files
    ```

4. Compile the code:  

    ```shell
    gcc file_name.c -o executable_file_name.exe
    ```

5. Run the executable file:  

    ```shell
    ./executable_file_name.exe
    ```

</details>

<details> <summary>JavaScript files</summary>

1. Check if Node.js is installed.  
    If not, download it from:  
      [Node.js official website](https://nodejs.org/ja)  
2. Open the Command Prompt.  
3. Navigate to the directory containing the script:  

    ```shell
    cd path\to\js_files
    ```

4. Run the script:  

    ```shell
    node file_name.js
    ```

</details>

<details> <summary>Python files</summary>

1. Check if Python is installed.  
    If not, download it from:  
      [Python official website](https://www.python.org/downloads/)  
2. Open the Command Prompt  
3. Navigate to the directry containing the script:  

    ```shell
    cd path\to\python_files
    ```

4. Run the script:  

    ```shell
    python ファイル名.py
    ```

</details>

### macOS

<details> <summary>C files</summary>

1. Open the Terminal.  
2. Check if GCC（Xcode command Line Tools） is installed.  
    Run the following command; if it's not installed, you'll be prompted to install it:   
      
      ```shell
      gcc --version
      ```

3. Navigate to the directory containing the source code:  

    ```shell
    cd /path/to/c_files
    ```

4. Compile teh code:  

    ```shell
    gcc file_name.c -o executable_file_name
    ```

5. Run the executable file:  

    ```shell
    ./executable_file_name
    ```

</details>

<details> <summary>JavaScript files</summary>

1. Check if Node.js is installed.  
    If not, download it from:  
      [Node.js official website](https://nodejs.org/ja)  
2. Open the Terminal.  
3. Navigate to the directory containing the script:  

    ```shell
    cd /path/to/js_files
    ```

4. Run the script:  

    ```shell
    node file_name.js
    ```

</details>

<details> <summary>Python files</summary>

1. Check if Python is installed  
    Python3 is usually pre-installed on macOS. if not, download it from:  
      [Python official website](https://www.python.org/downloads/)  
2. Open the Terminal  
3. Navigate to the directory containing the script  

    ```shell
    cd /path/to/python_files
    ```

4. Run the script  

    ```shell
    python3 file_name.py
    ```

</details>

## Directory Structure

```
c/                           # C programs for practice  
├── 1/                       # Standard output  
├── 2/                       # Data types  
├── 3/                       # Standard input  
├── 4/                       # Operators  
├── 5/                       # Conditional statements 1  
├── 6/                       # Conditional statements 2  
├── 7/                       # Random numbers  
├── 8/                       # Loops  
├── 9/                       # Arrays  
├── 10/                      # Functions  
├── 11/                      # Addrresses and pointers  
├── 12/                      # Character Arrays  
├── 13/                      # Structures  
├── 14/                      # File handling  
├── 15/                      # Multi-file programs  
├── bmi_calculator/          # BMI calculator  
└── number_guessing_game/    # Number guessing game  
  
javascript/                  # JavaScript programs for practice  
├── english_exam/            # English word quiz  
│   └── english_exam_v0.js    # Basic version  
│   └── english_exam_v1.js    # Shows incorrect answers  
│   └── english_exam_v2.js    # Display a message based on the score  
│   └── english_exam_v3.js    # Provides a hint when prompted  
└── shuffle.js               # Shuffle function  
  
python/                      # Python programs for practice  
├── todo/                    # Task manager  
│   └── todo_v0.py            # Basic version  
│   └── todo_v1.py            # Adds deadline setting  
│   └── todo_v2.py            # Adds priority setting
│   └── todo_v3.py            # Adds editing feature  
├── 2-1.py                   # Operator practice  
├── 2-2.py                   # Height estimator  
├── 2-3.py                   # Bill splitter  
├── 3.py                     # Age categorizer  
├── 4-1_v1.py                # Zoadic sign checker version 1  
├── 4-1_v2.py                # Zoadic sign checker version 2  
├── 4-2.py                   # Omikuji (fortune-telling)  
├── 5-1.py                   # Bill splitter version 2  
├── 5-2_v1.py                # Origami counter version 1  
├── 5-2_v2.py                # Origami counter version 2  
├── 5-3.py                   # Shopping budget calculator  
├── 5-4.py                   # BMI calculator  
├── 6-1.py                   # Days counter  
├── 6-2_v1.py                # Loop practice 1  
├── 6-2_v2.py                # Loop practice 2  
├── 8_v1.py                  # Caesar cipher (single character)  
├── 8_v2.py                  # Caesar cipher (encode a word)  
├── 8_v3.py                  # Caesar cipher (decode a word)  
├── 9-1.py                   # Score calculator 1  
├── 9-2_v1.py                # Caesar cipher table version 1  
├── 9-2_v2.py                # Caesar cipher table version 2  
├── 10_v1.py                 # Height estimator 2 version 1  
├── 10_v2.py                 # Height estimator 2 version 2  
├── 11_v1.py                 # Score calculator 2 version 1  
├── 11_v2.py                 # Score calculator 2 version 2  
├── 12-1.py                  # Class practice 1  
├── 12-2.py                  # Class practice 2  
├── 13-1.py                  # Score calculator 3  
├── 13-2.py                  # Area calculator  
├── calculator.py            # Four arithmetic operator
└── chatbot.py               # Chatbot  
```
## Highlights

### [BMI Calculator](c/bmi_calculator/v5.c)  
- Calculates BMI (Body Mass Index) based on height and weight input  
- If under the age of 16, calculates RI (Rohrer Index) instead of BMI  
- Written in C  

### [Number Guessing Game](c/number_guessing_game/v5.c) (Highly Recommend!)  
- A game where you guess a randomly selected number within a certain range  
- Includes 4 difficulty levels  
- Written in C  

### [Zoadic Sign Checker](python/04-1_v2.py)  
- Tells the zoadic sign based on the entered birth date  
- A simple web app version is also available in another repository: [Zoardic Checker](https://github.com/kotonekanno/zoadic-checker)  
- Written in Python 

### [Task Manager](python/todo/)
- The largest program in this repository  
- However, it contains several bugs, and version 4 is especially incomplete  
- Each version adds new features incrementally:  
    - v0: Basic features only  
    - v1: Adds a deadline setting feature  
    - v2: Adds a proprity setting feature  
    - v3: Adds an editing feature (Contains a major bug)  

### [English Word Quiz](javascript/english_exam/)  
- An english Vocabulary quiz featuring programming-related words  
- Each version has different features:  
	- v0: Displays correct/incorrect and the score 
	- v1: Shows incorrectly answered words after displaying the score  
	- v2: Gives a message based on the score  
	- v3: Provides a hint when you type "**hint**"  
- Written in JavaScript 

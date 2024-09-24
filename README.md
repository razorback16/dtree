# Directory Tree Visualizer

This project is a command-line tool that visualizes directory structures with Unicode icons for different file types.

## Features

- Displays directory structure with Unicode icons
- Supports various file types with custom icons
- Allows excluding specific patterns from the output

## Building

To build the project, make sure you have a C++17 compatible compiler and `make` installed. Then run:

```
make
```

This will create an executable named `directory_tree`.

## Usage

```
./dtree <directory> [--exclude=<pattern1>,<pattern2>,...]
```

- `<directory>`: The path to the directory you want to visualize
- `--exclude`: (Optional) Comma-separated list of patterns to exclude from the output

## Example

```
$ ./dtree . --exclude=.git,obj,.vscode                                                                                                                                                                                                                                                                                  ─╯
output:
📁 .
├─ 📎 Makefile
├─ 📝 README.md
├─ 📎 dtree
└─ 📁 src
   ├─ 📄 directory_tree.h
   ├─ 📄 icons.h
   ├─ 📄 directory_tree.cpp
   └─ 📄 main.cpp
```

This will display the directory structure of `/path/to/directory`, excluding any paths containing `.git` or `.vscode`.

## License

[MIT License](https://opensource.org/licenses/MIT)

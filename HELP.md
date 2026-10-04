# Help - Line Editor

## About the Program

The Line Editor is a simple command-line program written in C. It allows the user to manage lines of text using a menu-driven interface.

## Menu Options

### 1. Insert Line

Choose option **1** to insert a new line.

Enter the line number and then enter the text.

Example:

```text
Enter line number: 1
Enter text: Hello World
```

The new line is inserted at the specified position.

### 2. Delete Line

Choose option **2** to delete an existing line.

Enter the line number that you want to delete.

Example:

```text
Enter line number to delete: 1
```

The selected line is removed from the document.

### 3. Display Document

Choose option **3** to display all the lines currently stored in the document.

The lines are displayed with their line numbers.

### 4. Exit

Choose option **4** to exit the line editor.

## Invalid Input

If an invalid menu option is entered, the program displays an error message.

If an invalid line number is entered, the program displays:

```text
Invalid line number.
```

## Empty Document

If the document does not contain any lines and the user selects Display Document, the program shows:

```text
Document is empty.
```

## Compile and Run

Compile the program using:

```bash
gcc line_editor.c -o line_editor
```

On Windows, run:

```bash
line_editor
```

On Linux/macOS, run:

```bash
./line_editor
```

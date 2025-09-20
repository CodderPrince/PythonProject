import 'package:flutter/material.dart';

void main() {
  runApp(const SudokuSolverApp());
}

class SudokuSolverApp extends StatelessWidget {
  const SudokuSolverApp({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Sudoku Solver',
      theme: ThemeData(
        primarySwatch: Colors.deepPurple,
      ),
      home: const SudokuSolverHomePage(),
      debugShowCheckedModeBanner: false,
    );
  }
}

class SudokuSolverHomePage extends StatefulWidget {
  const SudokuSolverHomePage({Key? key}) : super(key: key);

  @override
  State<SudokuSolverHomePage> createState() => _SudokuSolverHomePageState();
}

class _SudokuSolverHomePageState extends State<SudokuSolverHomePage> {
  static const int size = 9; // Sudoku grid size
  final List<List<TextEditingController>> _controllers = List.generate(
    size,
    (_) => List.generate(size, (_) => TextEditingController()),
  );

  // Method to clear the board
  void _resetBoard() {
    setState(() {
      for (var row in _controllers) {
        for (var controller in row) {
          controller.clear();
        }
      }
    });
  }

  // Solve Sudoku with backtracking
  void _solveSudoku() {
    List<List<int>> board = List.generate(
      size,
      (i) => List.generate(size, (j) {
        String val = _controllers[i][j].text;
        return val.isEmpty ? 0 : int.parse(val);
      }),
    );

    // Helper method to check if it's safe to place a number
    bool _isSafe(List<List<int>> grid, int row, int col, int num) {
      for (int i = 0; i < size; i++) {
        if (grid[row][i] == num || grid[i][col] == num) return false;
      }
      int startRow = row - row % 3, startCol = col - col % 3;
      for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
          if (grid[i + startRow][j + startCol] == num) return false;
        }
      }
      return true;
    }

    // Backtracking solver
    bool solve(List<List<int>> grid) {
      for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
          if (grid[row][col] == 0) {
            for (int num = 1; num <= 9; num++) {
              if (_isSafe(grid, row, col, num)) {
                grid[row][col] = num;
                if (solve(grid)) return true;
                grid[row][col] = 0; // Backtrack
              }
            }
            return false; // No number fits here
          }
        }
      }
      return true; // Solved
    }

    if (solve(board)) {
      setState(() {
        for (int row = 0; row < size; row++) {
          for (int col = 0; col < size; col++) {
            _controllers[row][col].text = board[row][col].toString();
          }
        }
      });
    } else {
      ScaffoldMessenger.of(context).showSnackBar(
        const SnackBar(content: Text("No solution exists for this Sudoku!")),
      );
    }
  }

  // Build Sudoku Grid
  Widget _buildSudokuGrid() {
    return GridView.builder(
      gridDelegate: const SliverGridDelegateWithFixedCrossAxisCount(
        crossAxisCount: size, // 9x9 grid
      ),
      itemCount: size * size,
      itemBuilder: (context, index) {
        final row = index ~/ size;
        final col = index % size;

        // Determine the color for 3x3 blocks
        final blockColor = (row ~/ 3 + col ~/ 3) % 2 == 0
            ? Colors.purple.shade50
            : Colors.deepPurple.shade100;

        return Container(
          margin: const EdgeInsets.all(2),
          color: blockColor,
          child: TextField(
            controller: _controllers[row][col],
            textAlign: TextAlign.center,
            keyboardType: TextInputType.number,
            maxLength: 1,
            style: const TextStyle(fontSize: 20, fontWeight: FontWeight.bold),
            decoration: const InputDecoration(
              border: InputBorder.none,
              counterText: '',
            ),
          ),
        );
      },
    );
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text('Sudoku Solver'),
      ),
      body: Column(
        children: [
          Expanded(
            child: Padding(
              padding: const EdgeInsets.all(8.0),
              child: _buildSudokuGrid(),
            ),
          ),
          Row(
            mainAxisAlignment: MainAxisAlignment.spaceEvenly,
            children: [
              ElevatedButton(
                onPressed: _solveSudoku,
                child: const Text('Solve'),
              ),
              ElevatedButton(
                onPressed: _resetBoard,
                style: ElevatedButton.styleFrom(
                  backgroundColor: Colors.redAccent,
                ),
                child: const Text('Reset'),
              ),
            ],
          ),
          const SizedBox(height: 20),
        ],
      ),
    );
  }
}

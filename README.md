# Switch ESM Lustre Implementation

## Files
- `switch.lus`: Lustre code for the Switch state machine.
- `Makefile`: Targets to simulate with luciole (`make sim`) or run the executable (`make exe`).

## Requirements
- Lustre V6 compiler and tools. Follow environment setup instructions as provided.

## Usage
- `make sim`: Launches the luciole GUI for simulation.
- `make exe`: Compiles and runs the executable, which reads inputs (0 or 1) from the command line.
/* LICAT - License Concatenator
 * Copyright (C) 2023 Jeiel C. M. dos Santos
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>

int main(int argc, char* argv[]) {

  if (argc == 1) {
    fprintf(stderr, "USAGE: licat [options] [args] [file1, file2, ...]\n"
                    "HELP: `-h` or `--help` for more information.\n");
    exit(EXIT_FAILURE);
  }
  
  return EXIT_SUCCESS;
}

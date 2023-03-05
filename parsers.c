/*   LICAT- License Concatenator
 *   Copyright (C) 2023 Jeiel C. M. dos Santos 

 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.

 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.

 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include "parsers.h"
#include <string.h>

//Finds the pointer to the first character after '.'

inline const char* scan_filename(const char filename[static 1]) {

  return strrchr(filename, '.') + 1;
}

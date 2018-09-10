/* Compare two wide strings.
   Copyright (C) 1999, 2011-2018 Free Software Foundation, Inc.
   Written by Bruno Haible <bruno@clisp.org>, 1999.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

int
wcscmp (const wchar_t *s1, const wchar_t *s2)
{
  for (;;)
    {
      wchar_t wc1 = *s1++;
      wchar_t wc2 = *s2++;
      if (wc1 != (wchar_t)'\0' && wc1 == wc2)
        continue;
      /* Note that wc1 and wc2 each have at most 31 bits.  */
      return (int)wc1 - (int)wc2;
             /* > 0 if wc1 > wc2, < 0 if wc1 < wc2,
                = 0 if wc1 and wc2 are both '\0'.  */
    }
}

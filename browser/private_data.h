/**
 * @file
 * Private state data for the Browser
 *
 * @authors
 * Copyright (C) 2021 Richard Russon <rich@flatcap.org>
 *
 * @copyright
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 2 of the License, or (at your option) any later
 * version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef MUTT_BROWSER_PRIVATE_DATA_H
#define MUTT_BROWSER_PRIVATE_DATA_H

#include <stdbool.h>
#include <limits.h>
#include "lib.h"

struct Buffer;
struct Menu;
struct MuttWindow;

/**
 * struct BrowserPrivateData - Private state data for the Browser
 */
struct BrowserPrivateData
{
  // params
  struct Buffer *file;            ///< XXX
  struct Mailbox *mailbox;        ///< XXX
  char ***files;                  ///< XXX
  int *numfiles;                  ///< XXX

  // state
  struct BrowserState state;      ///< XXX
  struct Menu *menu;              ///< XXX
  bool kill_prefix;               ///< XXX
  bool multiple;                  ///< XXX
  bool folder;                    ///< XXX
  /* Keeps in memory the directory we were in when hitting '='
   * to go directly to $folder (`$folder`) */
  char goto_swapper[PATH_MAX];    ///< XXX
  struct Buffer *OldLastDir;      ///< XXX
  struct Buffer *prefix;          ///< XXX
  int last_selected_mailbox;      ///< XXX
  struct MuttWindow *sbar;        ///< XXX
  struct MuttWindow *win_browser; ///< XXX
};

void                       browser_private_data_free(struct BrowserPrivateData **ptr);
struct BrowserPrivateData *browser_private_data_new (void);

#endif /* MUTT_BROWSER_PRIVATE_DATA_H */

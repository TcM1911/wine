/*
 * TTY clipboard driver
 *
 * Copyright 1998-1999 Patrik Stridvall
 */

#include "heap.h"
#include "ttydrv.h"
#include "win.h"

/**********************************************************************/

char *TTYDRV_CLIPBOARD_szSelection = NULL;

/***********************************************************************
 *		TTYDRV_CLIPBOARD_EmptyClipboard
 */
void TTYDRV_CLIPBOARD_Empty()
{
  if(TTYDRV_CLIPBOARD_szSelection)
    {
      HeapFree(SystemHeap, 0, TTYDRV_CLIPBOARD_szSelection);
      TTYDRV_CLIPBOARD_szSelection = NULL;
    }
}

/***********************************************************************
 *		TTYDRV_CLIPBOARD_SetData
 */
void TTYDRV_CLIPBOARD_SetData(UINT wFormat)
{
}

/***********************************************************************
 *		TTYDRV_CLIPBOARD_GetData
 */
BOOL TTYDRV_CLIPBOARD_GetData(UINT wFormat)
{
  return FALSE;
}

/***********************************************************************
 *		TTYDRV_CLIPBOARD_ResetOwner
 */
void TTYDRV_CLIPBOARD_ResetOwner(WND *pWnd, BOOL bFooBar)
{
}

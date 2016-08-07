/*
 * General and utility routiens for workspace handling
 */
#ifndef _CTWM_WORKSPACE_UTILS_H
#define _CTWM_WORKSPACE_UTILS_H

void GotoWorkSpaceByName(VirtualScreen *vs, char *wname);
void GotoWorkSpaceByNumber(VirtualScreen *vs, int workspacenum);
void GotoPrevWorkSpace(VirtualScreen *vs);
void GotoNextWorkSpace(VirtualScreen *vs);
void GotoRightWorkSpace(VirtualScreen *vs);
void GotoLeftWorkSpace(VirtualScreen *vs);
void GotoUpWorkSpace(VirtualScreen *vs);
void GotoDownWorkSpace(VirtualScreen *vs);
void GotoWorkSpace(VirtualScreen *vs, WorkSpace *ws);

char *GetCurrentWorkSpaceName(VirtualScreen *vs);
WorkSpace *GetWorkspace(char *wname);

void ShowBackground(VirtualScreen *vs, int state);

void ws_set_useBackgroundInfo(bool newval);

#endif /* _CTWM_WORKSPACE_UTILS_H */

/* 
 * This file is generated automatically from the default
 * twm bindings file system.twmrc by the twm Imakefile.
 */

char *defTwmrc[] = {
    "",
    "NoGrabServer",
    "RestartPreviousState",
    "DecorateTransients",
    "TitleFont \"-adobe-helvetica-bold-r-normal--*-120-*-*-*-*-*-*\"",
    "ResizeFont \"-adobe-helvetica-bold-r-normal--*-120-*-*-*-*-*-*\"",
    "MenuFont \"-adobe-helvetica-bold-r-normal--*-120-*-*-*-*-*-*\"",
    "IconFont \"-adobe-helvetica-bold-r-normal--*-100-*-*-*-*-*-*\"",
    "IconManagerFont \"-adobe-helvetica-bold-r-normal--*-100-*-*-*\"",
    "",
    "workspacemanagergeometry        \"360x60+60-0\" 4",
    "WorkSpaces {",
    "    \"One\"   {\"#686B9F\" \"white\" \"DeepSkyBlue3\" \"white\" \"xlogo16\"}",
    "    \"Two\"   {\"#619AAE\" \"white\" \"firebrick\"}",
    "    \"Three\" {\"#727786\" \"white\" \"brown\"}",
    "    \"Four\"  {\"#8C5b7A\" \"white\" \"MidnightBlue\"}",
    "",
    "    \"Five\"  {\"#727786\" \"white\" \"DeepSkyBlue3\" \"white\" \"plaid\"}",
    "    \"Six\"   {\"#619AAE\" \"white\" \"DeepSkyBlue3\" \"white\" \"letters\"}",
    "    \"Seven\" {\"#8C5b7A\" \"white\" \"chartreuse4\"}",
    "    \"Eight\" {\"#686B9F\" \"white\" \"MidnightBlue\"}",
    "}",
    "",
    "Color",
    "{",
    "    BorderColor \"slategrey\"",
    "    DefaultBackground \"maroon\"",
    "    DefaultForeground \"gray85\"",
    "    TitleBackground \"maroon\"",
    "    TitleForeground \"gray85\"",
    "    MenuBackground \"maroon\"",
    "    MenuForeground \"gray85\"",
    "    MenuTitleBackground \"gray70\"",
    "    MenuTitleForeground \"maroon\"",
    "    IconBackground \"maroon\"",
    "    IconForeground \"gray85\"",
    "    IconBorderColor \"gray85\"",
    "    IconManagerBackground \"maroon\"",
    "    IconManagerForeground \"gray85\"",
    "}",
    "",
    "IconManagerDontShow {",
    "    \"WorkSpaceManager\"",
    "}",
    "",
    "NoTitle {                  # little programs that look like icons",
    "    \"TWM Icon Manager\"",
    "    \"WorkSpaceManager\"",
    "}",
    "MoveDelta 3",
    "Function \"move-or-lower\" { f.move f.deltastop f.lower }",
    "Function \"move-or-raise\" { f.move f.deltastop f.raise }",
    "Function \"move-or-iconify\" { f.move f.deltastop f.iconify }",
    "",
    "Button1 = : root : f.menu \"defops\"",
    "",
    "Button1 = m : window|icon : f.function \"move-or-lower\"",
    "Button2 = m : window|icon : f.iconify",
    "Button3 = m : window|icon : f.function \"move-or-raise\"",
    "",
    "Button1 = : title : f.function \"move-or-raise\"",
    "Button2 = : title : f.raiselower",
    "",
    "Button1 = : icon : f.function \"move-or-iconify\"",
    "Button2 = : icon : f.iconify",
    "",
    "Button1 = : iconmgr : f.iconify",
    "Button2 = : iconmgr : f.iconify",
    "",
    "menu \"defops\"",
    "{",
    "\"Twm\"	f.title",
    "\"Iconify\"	f.iconify",
    "\"Resize\"	f.resize",
    "\"Move\"		f.move",
    "\"Raise\"		f.raise",
    "\"Lower\"		f.lower",
    "\"Occupy...\"	f.occupy",
    "\"Occupy all\"	f.occupyall",
    "\"\"		f.nop",
    "\"Focus\"		f.focus",
    "\"Unfocus\"	f.unfocus",
    "\"Show Iconmgr\"	f.showiconmgr",
    "\"Hide Iconmgr\"	f.hideiconmgr",
    "\"\"		f.nop",
    "\"Kill\"		f.destroy",
    "\"Delete\"	f.delete",
    "\"\"		f.nop",
    "\"Restart\"	f.restart",
    "\"Exit\"		f.quit",
    "}",
    (char *) 0 };

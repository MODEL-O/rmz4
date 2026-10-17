; undefined FUN_08001574(void)
; entry 0x8001574  size 22 bytes

08001574: 00b5         push {lr}
08001576: 0548         ldr r0,[0x0800158c]
08001578: 054a         ldr r2,[0x08001590]
0800157A: 8178         ldrb r1,[r0,#0x2]
0800157C: 8900         lsl r1,r1,#0x2
0800157E: 8918         add r1,r1,r2
08001580: 0968         ldr r1,[r1,#0x0]
08001582: 27f1fdfc     bl 0x08128f80
08001586: 01bc         pop {r0}
08001588: 0047         bx r0

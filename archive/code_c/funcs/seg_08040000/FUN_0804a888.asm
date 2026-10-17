; undefined FUN_0804a888(void)
; entry 0x804a888  size 20 bytes

0804A888: 00b5         push {lr}
0804A88A: 044a         ldr r2,[0x0804a89c]
0804A88C: 017c         ldrb r1,[r0,#0x10]
0804A88E: 8900         lsl r1,r1,#0x2
0804A890: 8918         add r1,r1,r2
0804A892: 0968         ldr r1,[r1,#0x0]
0804A894: def074fb     bl 0x08128f80
0804A898: 01bc         pop {r0}
0804A89A: 0047         bx r0

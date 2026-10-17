; undefined FUN_0804a8b8(void)
; entry 0x804a8b8  size 20 bytes

0804A8B8: 00b5         push {lr}
0804A8BA: 044a         ldr r2,[0x0804a8cc]
0804A8BC: 017c         ldrb r1,[r0,#0x10]
0804A8BE: 8900         lsl r1,r1,#0x2
0804A8C0: 8918         add r1,r1,r2
0804A8C2: 0968         ldr r1,[r1,#0x0]
0804A8C4: def05cfb     bl 0x08128f80
0804A8C8: 01bc         pop {r0}
0804A8CA: 0047         bx r0

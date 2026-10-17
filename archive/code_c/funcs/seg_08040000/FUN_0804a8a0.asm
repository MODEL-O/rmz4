; undefined FUN_0804a8a0(void)
; entry 0x804a8a0  size 20 bytes

0804A8A0: 00b5         push {lr}
0804A8A2: 044a         ldr r2,[0x0804a8b4]
0804A8A4: 017c         ldrb r1,[r0,#0x10]
0804A8A6: 8900         lsl r1,r1,#0x2
0804A8A8: 8918         add r1,r1,r2
0804A8AA: 0968         ldr r1,[r1,#0x0]
0804A8AC: def068fb     bl 0x08128f80
0804A8B0: 01bc         pop {r0}
0804A8B2: 0047         bx r0

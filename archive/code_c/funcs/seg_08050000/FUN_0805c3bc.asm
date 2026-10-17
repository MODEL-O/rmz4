; undefined FUN_0805c3bc(void)
; entry 0x805c3bc  size 20 bytes

0805C3BC: 00b5         push {lr}
0805C3BE: 044a         ldr r2,[0x0805c3d0]
0805C3C0: 017c         ldrb r1,[r0,#0x10]
0805C3C2: 8900         lsl r1,r1,#0x2
0805C3C4: 8918         add r1,r1,r2
0805C3C6: 0968         ldr r1,[r1,#0x0]
0805C3C8: ccf0dafd     bl 0x08128f80
0805C3CC: 01bc         pop {r0}
0805C3CE: 0047         bx r0

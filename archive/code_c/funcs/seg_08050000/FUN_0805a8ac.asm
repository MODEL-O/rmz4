; undefined FUN_0805a8ac(void)
; entry 0x805a8ac  size 20 bytes

0805A8AC: 00b5         push {lr}
0805A8AE: 044a         ldr r2,[0x0805a8c0]
0805A8B0: 817b         ldrb r1,[r0,#0xe]
0805A8B2: 8900         lsl r1,r1,#0x2
0805A8B4: 8918         add r1,r1,r2
0805A8B6: 0968         ldr r1,[r1,#0x0]
0805A8B8: cef062fb     bl 0x08128f80
0805A8BC: 01bc         pop {r0}
0805A8BE: 0047         bx r0

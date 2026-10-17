; undefined FUN_0805a3d4(void)
; entry 0x805a3d4  size 20 bytes

0805A3D4: 00b5         push {lr}
0805A3D6: 044a         ldr r2,[0x0805a3e8]
0805A3D8: 817b         ldrb r1,[r0,#0xe]
0805A3DA: 8900         lsl r1,r1,#0x2
0805A3DC: 8918         add r1,r1,r2
0805A3DE: 0968         ldr r1,[r1,#0x0]
0805A3E0: cef0cefd     bl 0x08128f80
0805A3E4: 01bc         pop {r0}
0805A3E6: 0047         bx r0

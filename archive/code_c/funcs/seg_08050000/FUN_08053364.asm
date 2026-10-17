; undefined FUN_08053364(void)
; entry 0x8053364  size 20 bytes

08053364: 00b5         push {lr}
08053366: 044a         ldr r2,[0x08053378]
08053368: 817b         ldrb r1,[r0,#0xe]
0805336A: 8900         lsl r1,r1,#0x2
0805336C: 8918         add r1,r1,r2
0805336E: 0968         ldr r1,[r1,#0x0]
08053370: d5f006fe     bl 0x08128f80
08053374: 01bc         pop {r0}
08053376: 0047         bx r0

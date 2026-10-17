; undefined FUN_08055554(void)
; entry 0x8055554  size 20 bytes

08055554: 00b5         push {lr}
08055556: 044a         ldr r2,[0x08055568]
08055558: 817b         ldrb r1,[r0,#0xe]
0805555A: 8900         lsl r1,r1,#0x2
0805555C: 8918         add r1,r1,r2
0805555E: 0968         ldr r1,[r1,#0x0]
08055560: d3f00efd     bl 0x08128f80
08055564: 01bc         pop {r0}
08055566: 0047         bx r0

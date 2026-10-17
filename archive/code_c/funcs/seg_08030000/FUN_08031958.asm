; undefined FUN_08031958(void)
; entry 0x8031958  size 20 bytes

08031958: 00b5         push {lr}
0803195A: 044a         ldr r2,[0x0803196c]
0803195C: c17b         ldrb r1,[r0,#0xf]
0803195E: 8900         lsl r1,r1,#0x2
08031960: 8918         add r1,r1,r2
08031962: 0968         ldr r1,[r1,#0x0]
08031964: f7f00cfb     bl 0x08128f80
08031968: 01bc         pop {r0}
0803196A: 0047         bx r0

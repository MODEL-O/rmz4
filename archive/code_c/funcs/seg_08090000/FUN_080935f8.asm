; undefined FUN_080935f8(void)
; entry 0x80935f8  size 20 bytes

080935F8: 00b5         push {lr}
080935FA: 044a         ldr r2,[0x0809360c]
080935FC: 817b         ldrb r1,[r0,#0xe]
080935FE: 8900         lsl r1,r1,#0x2
08093600: 8918         add r1,r1,r2
08093602: 0968         ldr r1,[r1,#0x0]
08093604: 95f0bcfc     bl 0x08128f80
08093608: 01bc         pop {r0}
0809360A: 0047         bx r0

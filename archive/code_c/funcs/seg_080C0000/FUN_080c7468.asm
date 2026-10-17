; undefined FUN_080c7468(void)
; entry 0x80c7468  size 20 bytes

080C7468: 00b5         push {lr}
080C746A: 044a         ldr r2,[0x080c747c]
080C746C: 017c         ldrb r1,[r0,#0x10]
080C746E: 8900         lsl r1,r1,#0x2
080C7470: 8918         add r1,r1,r2
080C7472: 0968         ldr r1,[r1,#0x0]
080C7474: 61f084fd     bl 0x08128f80
080C7478: 01bc         pop {r0}
080C747A: 0047         bx r0

; undefined FUN_080333f4(void)
; entry 0x80333f4  size 26 bytes

080333F4: 00b5         push {lr}
080333F6: 064a         ldr r2,[0x08033410]
080333F8: 8023         mov r3,#0x80
080333FA: 5b00         lsl r3,r3,#0x1
080333FC: c118         add r1,r0,r3
080333FE: 0978         ldrb r1,[r1,#0x0]
08033400: 8900         lsl r1,r1,#0x2
08033402: 8918         add r1,r1,r2
08033404: 0968         ldr r1,[r1,#0x0]
08033406: f5f0bbfd     bl 0x08128f80
0803340A: 01bc         pop {r0}
0803340C: 0047         bx r0

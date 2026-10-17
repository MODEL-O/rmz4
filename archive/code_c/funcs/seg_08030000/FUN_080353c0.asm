; undefined FUN_080353c0(void)
; entry 0x80353c0  size 24 bytes

080353C0: 00b5         push {lr}
080353C2: 054a         ldr r2,[0x080353d8]
080353C4: 054b         ldr r3,[0x080353dc]
080353C6: c118         add r1,r0,r3
080353C8: 0978         ldrb r1,[r1,#0x0]
080353CA: 8900         lsl r1,r1,#0x2
080353CC: 8918         add r1,r1,r2
080353CE: 0968         ldr r1,[r1,#0x0]
080353D0: f3f0d6fd     bl 0x08128f80
080353D4: 01bc         pop {r0}
080353D6: 0047         bx r0

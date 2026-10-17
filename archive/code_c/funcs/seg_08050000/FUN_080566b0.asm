; undefined FUN_080566b0(void)
; entry 0x80566b0  size 20 bytes

080566B0: 00b5         push {lr}
080566B2: 044a         ldr r2,[0x080566c4]
080566B4: 817b         ldrb r1,[r0,#0xe]
080566B6: 8900         lsl r1,r1,#0x2
080566B8: 8918         add r1,r1,r2
080566BA: 0968         ldr r1,[r1,#0x0]
080566BC: d2f060fc     bl 0x08128f80
080566C0: 01bc         pop {r0}
080566C2: 0047         bx r0

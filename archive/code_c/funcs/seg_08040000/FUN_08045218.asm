; undefined FUN_08045218(void)
; entry 0x8045218  size 20 bytes

08045218: 00b5         push {lr}
0804521A: 044a         ldr r2,[0x0804522c]
0804521C: 017c         ldrb r1,[r0,#0x10]
0804521E: 8900         lsl r1,r1,#0x2
08045220: 8918         add r1,r1,r2
08045222: 0968         ldr r1,[r1,#0x0]
08045224: e3f0acfe     bl 0x08128f80
08045228: 01bc         pop {r0}
0804522A: 0047         bx r0

; undefined FUN_080da104(void)
; entry 0x80da104  size 20 bytes

080DA104: 00b5         push {lr}
080DA106: 044a         ldr r2,[0x080da118]
080DA108: 417c         ldrb r1,[r0,#0x11]
080DA10A: 8900         lsl r1,r1,#0x2
080DA10C: 8918         add r1,r1,r2
080DA10E: 0968         ldr r1,[r1,#0x0]
080DA110: 4ef036ff     bl 0x08128f80
080DA114: 01bc         pop {r0}
080DA116: 0047         bx r0

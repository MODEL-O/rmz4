; undefined FUN_080c7ff4(void)
; entry 0x80c7ff4  size 20 bytes

080C7FF4: 00b5         push {lr}
080C7FF6: 044a         ldr r2,[0x080c8008]
080C7FF8: 017c         ldrb r1,[r0,#0x10]
080C7FFA: 8900         lsl r1,r1,#0x2
080C7FFC: 8918         add r1,r1,r2
080C7FFE: 0968         ldr r1,[r1,#0x0]
080C8000: 60f0beff     bl 0x08128f80
080C8004: 01bc         pop {r0}
080C8006: 0047         bx r0

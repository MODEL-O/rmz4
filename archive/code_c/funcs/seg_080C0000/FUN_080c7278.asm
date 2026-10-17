; undefined FUN_080c7278(void)
; entry 0x80c7278  size 20 bytes

080C7278: 00b5         push {lr}
080C727A: 044a         ldr r2,[0x080c728c]
080C727C: 017c         ldrb r1,[r0,#0x10]
080C727E: 8900         lsl r1,r1,#0x2
080C7280: 8918         add r1,r1,r2
080C7282: 0968         ldr r1,[r1,#0x0]
080C7284: 61f07cfe     bl 0x08128f80
080C7288: 01bc         pop {r0}
080C728A: 0047         bx r0

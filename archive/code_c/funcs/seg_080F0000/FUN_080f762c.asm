; undefined FUN_080f762c(void)
; entry 0x80f762c  size 20 bytes

080F762C: 00b5         push {lr}
080F762E: 044a         ldr r2,[0x080f7640]
080F7630: 017c         ldrb r1,[r0,#0x10]
080F7632: 8900         lsl r1,r1,#0x2
080F7634: 8918         add r1,r1,r2
080F7636: 0968         ldr r1,[r1,#0x0]
080F7638: 31f0a2fc     bl 0x08128f80
080F763C: 01bc         pop {r0}
080F763E: 0047         bx r0

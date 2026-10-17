; undefined FUN_080ed7b0(void)
; entry 0x80ed7b0  size 20 bytes

080ED7B0: 00b5         push {lr}
080ED7B2: 044a         ldr r2,[0x080ed7c4]
080ED7B4: 017c         ldrb r1,[r0,#0x10]
080ED7B6: 8900         lsl r1,r1,#0x2
080ED7B8: 8918         add r1,r1,r2
080ED7BA: 0968         ldr r1,[r1,#0x0]
080ED7BC: 3bf0e0fb     bl 0x08128f80
080ED7C0: 01bc         pop {r0}
080ED7C2: 0047         bx r0

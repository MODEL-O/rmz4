; undefined FUN_080d5af0(void)
; entry 0x80d5af0  size 20 bytes

080D5AF0: 00b5         push {lr}
080D5AF2: 044a         ldr r2,[0x080d5b04]
080D5AF4: 017c         ldrb r1,[r0,#0x10]
080D5AF6: 8900         lsl r1,r1,#0x2
080D5AF8: 8918         add r1,r1,r2
080D5AFA: 0968         ldr r1,[r1,#0x0]
080D5AFC: 53f040fa     bl 0x08128f80
080D5B00: 01bc         pop {r0}
080D5B02: 0047         bx r0

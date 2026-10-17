; undefined FUN_080a32e4(void)
; entry 0x80a32e4  size 20 bytes

080A32E4: 00b5         push {lr}
080A32E6: 044a         ldr r2,[0x080a32f8]
080A32E8: 017c         ldrb r1,[r0,#0x10]
080A32EA: 8900         lsl r1,r1,#0x2
080A32EC: 8918         add r1,r1,r2
080A32EE: 0968         ldr r1,[r1,#0x0]
080A32F0: 85f046fe     bl 0x08128f80
080A32F4: 01bc         pop {r0}
080A32F6: 0047         bx r0

; undefined FUN_080f7e80(void)
; entry 0x80f7e80  size 20 bytes

080F7E80: 00b5         push {lr}
080F7E82: 044a         ldr r2,[0x080f7e94]
080F7E84: 417b         ldrb r1,[r0,#0xd]
080F7E86: 8900         lsl r1,r1,#0x2
080F7E88: 8918         add r1,r1,r2
080F7E8A: 0968         ldr r1,[r1,#0x0]
080F7E8C: 31f078f8     bl 0x08128f80
080F7E90: 01bc         pop {r0}
080F7E92: 0047         bx r0

; undefined FUN_080b3f2c(void)
; entry 0x80b3f2c  size 24 bytes

080B3F2C: 00b5         push {lr}
080B3F2E: 011c         add r1,r0,#0x0
080B3F30: 887c         ldrb r0,[r1,#0x12]
080B3F32: 0028         cmp r0,#0x0
080B3F34: 03d0         beq 0x080b3f3e
080B3F36: 0138         sub r0,#0x1
080B3F38: 8874         strb r0,[r1,#0x12]
080B3F3A: 0020         mov r0,#0x0
080B3F3C: 00e0         b 0x080b3f40
080B3F3E: 0120         mov r0,#0x1
080B3F40: 02bc         pop {r1}
080B3F42: 0847         bx r1

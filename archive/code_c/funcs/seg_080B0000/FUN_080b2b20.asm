; undefined FUN_080b2b20(void)
; entry 0x80b2b20  size 24 bytes

080B2B20: 00b5         push {lr}
080B2B22: 011c         add r1,r0,#0x0
080B2B24: 887c         ldrb r0,[r1,#0x12]
080B2B26: 0028         cmp r0,#0x0
080B2B28: 03d0         beq 0x080b2b32
080B2B2A: 0138         sub r0,#0x1
080B2B2C: 8874         strb r0,[r1,#0x12]
080B2B2E: 0020         mov r0,#0x0
080B2B30: 00e0         b 0x080b2b34
080B2B32: 0120         mov r0,#0x1
080B2B34: 02bc         pop {r1}
080B2B36: 0847         bx r1

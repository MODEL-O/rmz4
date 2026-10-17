; undefined FUN_080b1a8c(void)
; entry 0x80b1a8c  size 24 bytes

080B1A8C: 00b5         push {lr}
080B1A8E: 011c         add r1,r0,#0x0
080B1A90: 887c         ldrb r0,[r1,#0x12]
080B1A92: 0028         cmp r0,#0x0
080B1A94: 03d0         beq 0x080b1a9e
080B1A96: 0138         sub r0,#0x1
080B1A98: 8874         strb r0,[r1,#0x12]
080B1A9A: 0020         mov r0,#0x0
080B1A9C: 00e0         b 0x080b1aa0
080B1A9E: 0120         mov r0,#0x1
080B1AA0: 02bc         pop {r1}
080B1AA2: 0847         bx r1

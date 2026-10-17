; undefined FUN_080e6b44(void)
; entry 0x80e6b44  size 24 bytes

080E6B44: 00b5         push {lr}
080E6B46: 011c         add r1,r0,#0x0
080E6B48: 887c         ldrb r0,[r1,#0x12]
080E6B4A: 0028         cmp r0,#0x0
080E6B4C: 03d0         beq 0x080e6b56
080E6B4E: 0138         sub r0,#0x1
080E6B50: 8874         strb r0,[r1,#0x12]
080E6B52: 0020         mov r0,#0x0
080E6B54: 00e0         b 0x080e6b58
080E6B56: 0120         mov r0,#0x1
080E6B58: 02bc         pop {r1}
080E6B5A: 0847         bx r1

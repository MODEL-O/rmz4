; undefined FUN_080e25e8(void)
; entry 0x80e25e8  size 24 bytes

080E25E8: 00b5         push {lr}
080E25EA: 011c         add r1,r0,#0x0
080E25EC: 887c         ldrb r0,[r1,#0x12]
080E25EE: 0028         cmp r0,#0x0
080E25F0: 03d0         beq 0x080e25fa
080E25F2: 0138         sub r0,#0x1
080E25F4: 8874         strb r0,[r1,#0x12]
080E25F6: 0020         mov r0,#0x0
080E25F8: 00e0         b 0x080e25fc
080E25FA: 0120         mov r0,#0x1
080E25FC: 02bc         pop {r1}
080E25FE: 0847         bx r1

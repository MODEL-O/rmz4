; undefined FUN_080aab30(void)
; entry 0x80aab30  size 24 bytes

080AAB30: 00b5         push {lr}
080AAB32: 011c         add r1,r0,#0x0
080AAB34: c87c         ldrb r0,[r1,#0x13]
080AAB36: 0028         cmp r0,#0x0
080AAB38: 03d0         beq 0x080aab42
080AAB3A: 0138         sub r0,#0x1
080AAB3C: c874         strb r0,[r1,#0x13]
080AAB3E: 0020         mov r0,#0x0
080AAB40: 00e0         b 0x080aab44
080AAB42: 0120         mov r0,#0x1
080AAB44: 02bc         pop {r1}
080AAB46: 0847         bx r1

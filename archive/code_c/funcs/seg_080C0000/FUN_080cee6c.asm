; undefined FUN_080cee6c(void)
; entry 0x80cee6c  size 24 bytes

080CEE6C: 00b5         push {lr}
080CEE6E: 011c         add r1,r0,#0x0
080CEE70: 887c         ldrb r0,[r1,#0x12]
080CEE72: 0028         cmp r0,#0x0
080CEE74: 03d0         beq 0x080cee7e
080CEE76: 0138         sub r0,#0x1
080CEE78: 8874         strb r0,[r1,#0x12]
080CEE7A: 0020         mov r0,#0x0
080CEE7C: 00e0         b 0x080cee80
080CEE7E: 0120         mov r0,#0x1
080CEE80: 02bc         pop {r1}
080CEE82: 0847         bx r1

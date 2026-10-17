; undefined FUN_080b2158(void)
; entry 0x80b2158  size 24 bytes

080B2158: 00b5         push {lr}
080B215A: 011c         add r1,r0,#0x0
080B215C: 887c         ldrb r0,[r1,#0x12]
080B215E: 0028         cmp r0,#0x0
080B2160: 03d0         beq 0x080b216a
080B2162: 0138         sub r0,#0x1
080B2164: 8874         strb r0,[r1,#0x12]
080B2166: 0020         mov r0,#0x0
080B2168: 00e0         b 0x080b216c
080B216A: 0120         mov r0,#0x1
080B216C: 02bc         pop {r1}
080B216E: 0847         bx r1

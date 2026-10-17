; undefined FUN_08128f3c(void)
; entry 0x8128f3c  size 62 bytes

08128F3C: 70b5         push {r4,r5,r6,lr}
08128F3E: 0d1c         add r5,r1,#0x0
08128F40: 0004         lsl r0,r0,#0x10
08128F42: 040c         lsr r4,r0,#0x10
08128F44: 0026         mov r6,#0x0
08128F46: 02e0         b 0x08128f4e
08128F48: 701c         add r0,r6,#0x1
08128F4A: 0006         lsl r0,r0,#0x18
08128F4C: 060e         lsr r6,r0,#0x18
08128F4E: 022e         cmp r6,#0x2
08128F50: 0fd8         bhi 0x08128f72
08128F52: 201c         add r0,r4,#0x0
08128F54: 291c         add r1,r5,#0x0
08128F56: fff70bff     bl 0x08128d70
08128F5A: 0004         lsl r0,r0,#0x10
08128F5C: 020c         lsr r2,r0,#0x10
08128F5E: 002a         cmp r2,#0x0
08128F60: f2d1         bne 0x08128f48
08128F62: 201c         add r0,r4,#0x0
08128F64: 291c         add r1,r5,#0x0
08128F66: fff7bdff     bl 0x08128ee4
08128F6A: 0004         lsl r0,r0,#0x10
08128F6C: 020c         lsr r2,r0,#0x10
08128F6E: 002a         cmp r2,#0x0
08128F70: ead1         bne 0x08128f48
08128F72: 101c         add r0,r2,#0x0
08128F74: 70bc         pop {r4,r5,r6}
08128F76: 02bc         pop {r1}
08128F78: 0847         bx r1

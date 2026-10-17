; undefined FUN_08036f3c(void)
; entry 0x8036f3c  size 44 bytes

08036F3C: 10b5         push {r4,lr}
08036F3E: 041c         add r4,r0,#0x0
08036F40: 03f02cf9     bl 0x0803a19c
08036F44: 011c         add r1,r0,#0x0
08036F46: 0029         cmp r1,#0x0
08036F48: 04d1         bne 0x08036f54
08036F4A: 8022         mov r2,#0x80
08036F4C: 5200         lsl r2,r2,#0x1
08036F4E: a018         add r0,r4,r2
08036F50: 0170         strb r1,[r0,#0x0]
08036F52: 06e0         b 0x08036f62
08036F54: 0448         ldr r0,[0x08036f68]
08036F56: 2118         add r1,r4,r0
08036F58: 0120         mov r0,#0x1
08036F5A: 0870         strb r0,[r1,#0x0]
08036F5C: 201c         add r0,r4,#0x0
08036F5E: 00f005f8     bl 0x08036f6c
08036F62: 10bc         pop {r4}
08036F64: 01bc         pop {r0}
08036F66: 0047         bx r0

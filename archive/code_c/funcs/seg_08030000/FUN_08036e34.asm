; undefined FUN_08036e34(void)
; entry 0x8036e34  size 20 bytes

08036E34: 00b5         push {lr}
08036E36: 8021         mov r1,#0x80
08036E38: 4900         lsl r1,r1,#0x1
08036E3A: 4218         add r2,r0,r1
08036E3C: 0121         mov r1,#0x1
08036E3E: 1170         strb r1,[r2,#0x0]
08036E40: 00f002f8     bl 0x08036e48
08036E44: 01bc         pop {r0}
08036E46: 0047         bx r0

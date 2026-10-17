; undefined FUN_08034a80(void)
; entry 0x8034a80  size 20 bytes

08034A80: 00b5         push {lr}
08034A82: 8021         mov r1,#0x80
08034A84: 4900         lsl r1,r1,#0x1
08034A86: 4218         add r2,r0,r1
08034A88: 0121         mov r1,#0x1
08034A8A: 1170         strb r1,[r2,#0x0]
08034A8C: 00f002f8     bl 0x08034a94
08034A90: 01bc         pop {r0}
08034A92: 0047         bx r0

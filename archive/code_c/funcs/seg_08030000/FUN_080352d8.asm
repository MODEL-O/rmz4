; undefined FUN_080352d8(void)
; entry 0x80352d8  size 20 bytes

080352D8: 00b5         push {lr}
080352DA: 8021         mov r1,#0x80
080352DC: 4900         lsl r1,r1,#0x1
080352DE: 4218         add r2,r0,r1
080352E0: 0121         mov r1,#0x1
080352E2: 1170         strb r1,[r2,#0x0]
080352E4: 00f002f8     bl 0x080352ec
080352E8: 01bc         pop {r0}
080352EA: 0047         bx r0

; undefined FUN_08037bc8(void)
; entry 0x8037bc8  size 20 bytes

08037BC8: 00b5         push {lr}
08037BCA: 8021         mov r1,#0x80
08037BCC: 4900         lsl r1,r1,#0x1
08037BCE: 4218         add r2,r0,r1
08037BD0: 0121         mov r1,#0x1
08037BD2: 1170         strb r1,[r2,#0x0]
08037BD4: 00f002f8     bl 0x08037bdc
08037BD8: 01bc         pop {r0}
08037BDA: 0047         bx r0

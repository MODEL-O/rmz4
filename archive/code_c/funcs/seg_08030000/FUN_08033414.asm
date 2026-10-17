; undefined FUN_08033414(void)
; entry 0x8033414  size 20 bytes

08033414: 00b5         push {lr}
08033416: 8021         mov r1,#0x80
08033418: 4900         lsl r1,r1,#0x1
0803341A: 4218         add r2,r0,r1
0803341C: 0121         mov r1,#0x1
0803341E: 1170         strb r1,[r2,#0x0]
08033420: 00f002f8     bl 0x08033428
08033424: 01bc         pop {r0}
08033426: 0047         bx r0

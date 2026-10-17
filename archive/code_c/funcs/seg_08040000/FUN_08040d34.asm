; undefined FUN_08040d34(void)
; entry 0x8040d34  size 28 bytes

08040D34: 00b5         push {lr}
08040D36: 021c         add r2,r0,#0x0
08040D38: be32         add r2,#0xbe
08040D3A: 0021         mov r1,#0x0
08040D3C: 1170         strb r1,[r2,#0x0]
08040D3E: 044a         ldr r2,[0x08040d50]
08040D40: 017c         ldrb r1,[r0,#0x10]
08040D42: 8900         lsl r1,r1,#0x2
08040D44: 8918         add r1,r1,r2
08040D46: 0968         ldr r1,[r1,#0x0]
08040D48: e8f01af9     bl 0x08128f80
08040D4C: 01bc         pop {r0}
08040D4E: 0047         bx r0

; undefined FUN_080880d4(void)
; entry 0x80880d4  size 20 bytes

080880D4: 00b5         push {lr}
080880D6: 044a         ldr r2,[0x080880e8]
080880D8: 817b         ldrb r1,[r0,#0xe]
080880DA: 8900         lsl r1,r1,#0x2
080880DC: 8918         add r1,r1,r2
080880DE: 0968         ldr r1,[r1,#0x0]
080880E0: a0f04eff     bl 0x08128f80
080880E4: 01bc         pop {r0}
080880E6: 0047         bx r0

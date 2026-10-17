; undefined FUN_080334dc(void)
; entry 0x80334dc  size 26 bytes

080334DC: 00b5         push {lr}
080334DE: 064a         ldr r2,[0x080334f8]
080334E0: a223         mov r3,#0xa2
080334E2: 5b00         lsl r3,r3,#0x1
080334E4: c118         add r1,r0,r3
080334E6: 0978         ldrb r1,[r1,#0x0]
080334E8: 8900         lsl r1,r1,#0x2
080334EA: 8918         add r1,r1,r2
080334EC: 0968         ldr r1,[r1,#0x0]
080334EE: f5f047fd     bl 0x08128f80
080334F2: 01bc         pop {r0}
080334F4: 0047         bx r0

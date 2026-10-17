; undefined FUN_080e2ee4(void)
; entry 0x80e2ee4  size 20 bytes

080E2EE4: 00b5         push {lr}
080E2EE6: 044a         ldr r2,[0x080e2ef8]
080E2EE8: 017c         ldrb r1,[r0,#0x10]
080E2EEA: 8900         lsl r1,r1,#0x2
080E2EEC: 8918         add r1,r1,r2
080E2EEE: 0968         ldr r1,[r1,#0x0]
080E2EF0: 46f046f8     bl 0x08128f80
080E2EF4: 01bc         pop {r0}
080E2EF6: 0047         bx r0

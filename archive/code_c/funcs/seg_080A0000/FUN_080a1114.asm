; undefined FUN_080a1114(void)
; entry 0x80a1114  size 20 bytes

080A1114: 00b5         push {lr}
080A1116: 044a         ldr r2,[0x080a1128]
080A1118: 017c         ldrb r1,[r0,#0x10]
080A111A: 8900         lsl r1,r1,#0x2
080A111C: 8918         add r1,r1,r2
080A111E: 0968         ldr r1,[r1,#0x0]
080A1120: 87f02eff     bl 0x08128f80
080A1124: 01bc         pop {r0}
080A1126: 0047         bx r0

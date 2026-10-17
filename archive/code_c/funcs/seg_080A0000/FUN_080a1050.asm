; undefined FUN_080a1050(void)
; entry 0x80a1050  size 20 bytes

080A1050: 00b5         push {lr}
080A1052: 044a         ldr r2,[0x080a1064]
080A1054: 017c         ldrb r1,[r0,#0x10]
080A1056: 8900         lsl r1,r1,#0x2
080A1058: 8918         add r1,r1,r2
080A105A: 0968         ldr r1,[r1,#0x0]
080A105C: 87f090ff     bl 0x08128f80
080A1060: 01bc         pop {r0}
080A1062: 0047         bx r0

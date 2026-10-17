; undefined FUN_080a32fc(void)
; entry 0x80a32fc  size 20 bytes

080A32FC: 00b5         push {lr}
080A32FE: 044a         ldr r2,[0x080a3310]
080A3300: 017c         ldrb r1,[r0,#0x10]
080A3302: 8900         lsl r1,r1,#0x2
080A3304: 8918         add r1,r1,r2
080A3306: 0968         ldr r1,[r1,#0x0]
080A3308: 85f03afe     bl 0x08128f80
080A330C: 01bc         pop {r0}
080A330E: 0047         bx r0

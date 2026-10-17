; undefined FUN_080f2250(void)
; entry 0x80f2250  size 28 bytes

080F2250: 00b5         push {lr}
080F2252: 064a         ldr r2,[0x080f226c]
080F2254: 417a         ldrb r1,[r0,#0x9]
080F2256: 8900         lsl r1,r1,#0x2
080F2258: 8918         add r1,r1,r2
080F225A: 0222         mov r2,#0x2
080F225C: c260         str r2,[r0,#0xc]
080F225E: 0968         ldr r1,[r1,#0x0]
080F2260: 8968         ldr r1,[r1,#0x8]
080F2262: 4161         str r1,[r0,#0x14]
080F2264: fff7d8ff     bl 0x080f2218
080F2268: 01bc         pop {r0}
080F226A: 0047         bx r0

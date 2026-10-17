; undefined FUN_0804c084(void)
; entry 0x804c084  size 20 bytes

0804C084: 00b5         push {lr}
0804C086: 044a         ldr r2,[0x0804c098]
0804C088: 017c         ldrb r1,[r0,#0x10]
0804C08A: 8900         lsl r1,r1,#0x2
0804C08C: 8918         add r1,r1,r2
0804C08E: 0968         ldr r1,[r1,#0x0]
0804C090: dcf076ff     bl 0x08128f80
0804C094: 01bc         pop {r0}
0804C096: 0047         bx r0

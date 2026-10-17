; undefined FUN_080534fc(void)
; entry 0x80534fc  size 20 bytes

080534FC: 00b5         push {lr}
080534FE: 044a         ldr r2,[0x08053510]
08053500: 817b         ldrb r1,[r0,#0xe]
08053502: 8900         lsl r1,r1,#0x2
08053504: 8918         add r1,r1,r2
08053506: 0968         ldr r1,[r1,#0x0]
08053508: d5f03afd     bl 0x08128f80
0805350C: 01bc         pop {r0}
0805350E: 0047         bx r0

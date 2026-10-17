; undefined FUN_08070538(void)
; entry 0x8070538  size 20 bytes

08070538: 00b5         push {lr}
0807053A: 044a         ldr r2,[0x0807054c]
0807053C: 817b         ldrb r1,[r0,#0xe]
0807053E: 8900         lsl r1,r1,#0x2
08070540: 8918         add r1,r1,r2
08070542: 0968         ldr r1,[r1,#0x0]
08070544: b8f01cfd     bl 0x08128f80
08070548: 01bc         pop {r0}
0807054A: 0047         bx r0

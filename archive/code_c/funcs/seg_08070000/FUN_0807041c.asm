; undefined FUN_0807041c(void)
; entry 0x807041c  size 20 bytes

0807041C: 00b5         push {lr}
0807041E: 044a         ldr r2,[0x08070430]
08070420: 817b         ldrb r1,[r0,#0xe]
08070422: 8900         lsl r1,r1,#0x2
08070424: 8918         add r1,r1,r2
08070426: 0968         ldr r1,[r1,#0x0]
08070428: b8f0aafd     bl 0x08128f80
0807042C: 01bc         pop {r0}
0807042E: 0047         bx r0

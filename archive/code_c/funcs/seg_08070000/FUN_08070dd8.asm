; undefined FUN_08070dd8(void)
; entry 0x8070dd8  size 20 bytes

08070DD8: 00b5         push {lr}
08070DDA: 044a         ldr r2,[0x08070dec]
08070DDC: 817b         ldrb r1,[r0,#0xe]
08070DDE: 8900         lsl r1,r1,#0x2
08070DE0: 8918         add r1,r1,r2
08070DE2: 0968         ldr r1,[r1,#0x0]
08070DE4: b8f0ccf8     bl 0x08128f80
08070DE8: 01bc         pop {r0}
08070DEA: 0047         bx r0

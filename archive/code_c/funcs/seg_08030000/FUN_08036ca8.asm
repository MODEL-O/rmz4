; undefined FUN_08036ca8(void)
; entry 0x8036ca8  size 24 bytes

08036CA8: 00b5         push {lr}
08036CAA: 054a         ldr r2,[0x08036cc0]
08036CAC: 054b         ldr r3,[0x08036cc4]
08036CAE: c118         add r1,r0,r3
08036CB0: 0978         ldrb r1,[r1,#0x0]
08036CB2: 8900         lsl r1,r1,#0x2
08036CB4: 8918         add r1,r1,r2
08036CB6: 0968         ldr r1,[r1,#0x0]
08036CB8: f2f062f9     bl 0x08128f80
08036CBC: 01bc         pop {r0}
08036CBE: 0047         bx r0

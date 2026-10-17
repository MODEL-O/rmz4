; undefined FUN_08087534(void)
; entry 0x8087534  size 20 bytes

08087534: 00b5         push {lr}
08087536: 044a         ldr r2,[0x08087548]
08087538: 817b         ldrb r1,[r0,#0xe]
0808753A: 8900         lsl r1,r1,#0x2
0808753C: 8918         add r1,r1,r2
0808753E: 0968         ldr r1,[r1,#0x0]
08087540: a1f01efd     bl 0x08128f80
08087544: 01bc         pop {r0}
08087546: 0047         bx r0

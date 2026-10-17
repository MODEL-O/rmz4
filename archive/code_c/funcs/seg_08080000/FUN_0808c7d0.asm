; undefined FUN_0808c7d0(void)
; entry 0x808c7d0  size 20 bytes

0808C7D0: 00b5         push {lr}
0808C7D2: 044a         ldr r2,[0x0808c7e4]
0808C7D4: 817b         ldrb r1,[r0,#0xe]
0808C7D6: 8900         lsl r1,r1,#0x2
0808C7D8: 8918         add r1,r1,r2
0808C7DA: 0968         ldr r1,[r1,#0x0]
0808C7DC: 9cf0d0fb     bl 0x08128f80
0808C7E0: 01bc         pop {r0}
0808C7E2: 0047         bx r0

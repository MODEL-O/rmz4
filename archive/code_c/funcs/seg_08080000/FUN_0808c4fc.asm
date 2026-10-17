; undefined FUN_0808c4fc(void)
; entry 0x808c4fc  size 20 bytes

0808C4FC: 00b5         push {lr}
0808C4FE: 044a         ldr r2,[0x0808c510]
0808C500: 017c         ldrb r1,[r0,#0x10]
0808C502: 8900         lsl r1,r1,#0x2
0808C504: 8918         add r1,r1,r2
0808C506: 0968         ldr r1,[r1,#0x0]
0808C508: 9cf03afd     bl 0x08128f80
0808C50C: 01bc         pop {r0}
0808C50E: 0047         bx r0

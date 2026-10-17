; undefined FUN_0808ff80(void)
; entry 0x808ff80  size 20 bytes

0808FF80: 00b5         push {lr}
0808FF82: 044a         ldr r2,[0x0808ff94]
0808FF84: 017c         ldrb r1,[r0,#0x10]
0808FF86: 8900         lsl r1,r1,#0x2
0808FF88: 8918         add r1,r1,r2
0808FF8A: 0968         ldr r1,[r1,#0x0]
0808FF8C: 98f0f8ff     bl 0x08128f80
0808FF90: 01bc         pop {r0}
0808FF92: 0047         bx r0

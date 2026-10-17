; undefined FUN_0808c188(void)
; entry 0x808c188  size 28 bytes

0808C188: 827a         ldrb r2,[r0,#0xa]
0808C18A: fe21         mov r1,#0xfe
0808C18C: 1140         and r1,r2
0808C18E: 8172         strb r1,[r0,#0xa]
0808C190: 044a         ldr r2,[0x0808c1a4]
0808C192: 417a         ldrb r1,[r0,#0x9]
0808C194: 8900         lsl r1,r1,#0x2
0808C196: 8918         add r1,r1,r2
0808C198: 0422         mov r2,#0x4
0808C19A: c260         str r2,[r0,#0xc]
0808C19C: 0968         ldr r1,[r1,#0x0]
0808C19E: 0969         ldr r1,[r1,#0x10]
0808C1A0: 4161         str r1,[r0,#0x14]
0808C1A2: 7047         bx lr

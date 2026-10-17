; undefined FUN_0808dc8c(void)
; entry 0x808dc8c  size 20 bytes

0808DC8C: 00b5         push {lr}
0808DC8E: 044a         ldr r2,[0x0808dca0]
0808DC90: 017c         ldrb r1,[r0,#0x10]
0808DC92: 8900         lsl r1,r1,#0x2
0808DC94: 8918         add r1,r1,r2
0808DC96: 0968         ldr r1,[r1,#0x0]
0808DC98: 9bf072f9     bl 0x08128f80
0808DC9C: 01bc         pop {r0}
0808DC9E: 0047         bx r0

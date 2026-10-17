; undefined FUN_0808e6e0(void)
; entry 0x808e6e0  size 20 bytes

0808E6E0: 00b5         push {lr}
0808E6E2: 044a         ldr r2,[0x0808e6f4]
0808E6E4: 017c         ldrb r1,[r0,#0x10]
0808E6E6: 8900         lsl r1,r1,#0x2
0808E6E8: 8918         add r1,r1,r2
0808E6EA: 0968         ldr r1,[r1,#0x0]
0808E6EC: 9af048fc     bl 0x08128f80
0808E6F0: 01bc         pop {r0}
0808E6F2: 0047         bx r0

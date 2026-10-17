; undefined FUN_0808df7c(void)
; entry 0x808df7c  size 20 bytes

0808DF7C: 00b5         push {lr}
0808DF7E: 044a         ldr r2,[0x0808df90]
0808DF80: 017c         ldrb r1,[r0,#0x10]
0808DF82: 8900         lsl r1,r1,#0x2
0808DF84: 8918         add r1,r1,r2
0808DF86: 0968         ldr r1,[r1,#0x0]
0808DF88: 9af0faff     bl 0x08128f80
0808DF8C: 01bc         pop {r0}
0808DF8E: 0047         bx r0

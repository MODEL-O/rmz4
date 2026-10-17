; undefined FUN_0808f3a8(void)
; entry 0x808f3a8  size 20 bytes

0808F3A8: 00b5         push {lr}
0808F3AA: 044a         ldr r2,[0x0808f3bc]
0808F3AC: 817b         ldrb r1,[r0,#0xe]
0808F3AE: 8900         lsl r1,r1,#0x2
0808F3B0: 8918         add r1,r1,r2
0808F3B2: 0968         ldr r1,[r1,#0x0]
0808F3B4: 99f0e4fd     bl 0x08128f80
0808F3B8: 01bc         pop {r0}
0808F3BA: 0047         bx r0

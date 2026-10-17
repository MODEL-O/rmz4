; undefined FUN_0808d28c(void)
; entry 0x808d28c  size 32 bytes

0808D28C: 10b5         push {r4,lr}
0808D28E: 82b0         sub sp,#0x8
0808D290: 041c         add r4,r0,#0x0
0808D292: a07b         ldrb r0,[r4,#0xe]
0808D294: 0728         cmp r0,#0x7
0808D296: 00d9         bls 0x0808d29a
0808D298: 8be0         b 0x0808d3b2
0808D29A: 8000         lsl r0,r0,#0x2
0808D29C: 0149         ldr r1,[0x0808d2a4]
0808D29E: 4018         add r0,r0,r1
0808D2A0: 0068         ldr r0,[r0,#0x0]
0808D2A2: 8746         mov pc,r0
0808D3B2: 02b0         add sp,#0x8
0808D3B4: 10bc         pop {r4}
0808D3B6: 01bc         pop {r0}
0808D3B8: 0047         bx r0

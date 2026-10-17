; undefined FUN_0808d3c4(void)
; entry 0x808d3c4  size 32 bytes

0808D3C4: f0b5         push {r4,r5,r6,r7,lr}
0808D3C6: 84b0         sub sp,#0x10
0808D3C8: 051c         add r5,r0,#0x0
0808D3CA: a87b         ldrb r0,[r5,#0xe]
0808D3CC: 0b28         cmp r0,#0xb
0808D3CE: 00d9         bls 0x0808d3d2
0808D3D0: f6e0         b 0x0808d5c0
0808D3D2: 8000         lsl r0,r0,#0x2
0808D3D4: 0149         ldr r1,[0x0808d3dc]
0808D3D6: 4018         add r0,r0,r1
0808D3D8: 0068         ldr r0,[r0,#0x0]
0808D3DA: 8746         mov pc,r0
0808D5C0: 04b0         add sp,#0x10
0808D5C2: f0bc         pop {r4,r5,r6,r7}
0808D5C4: 01bc         pop {r0}
0808D5C6: 0047         bx r0

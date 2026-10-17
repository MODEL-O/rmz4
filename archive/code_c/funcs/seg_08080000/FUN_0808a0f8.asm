; undefined FUN_0808a0f8(void)
; entry 0x808a0f8  size 20 bytes

0808A0F8: 00b5         push {lr}
0808A0FA: 044a         ldr r2,[0x0808a10c]
0808A0FC: 417b         ldrb r1,[r0,#0xd]
0808A0FE: 8900         lsl r1,r1,#0x2
0808A100: 8918         add r1,r1,r2
0808A102: 0968         ldr r1,[r1,#0x0]
0808A104: 9ef03cff     bl 0x08128f80
0808A108: 01bc         pop {r0}
0808A10A: 0047         bx r0

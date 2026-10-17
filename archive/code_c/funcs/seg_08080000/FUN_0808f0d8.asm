; undefined FUN_0808f0d8(void)
; entry 0x808f0d8  size 20 bytes

0808F0D8: 00b5         push {lr}
0808F0DA: 044a         ldr r2,[0x0808f0ec]
0808F0DC: 817b         ldrb r1,[r0,#0xe]
0808F0DE: 8900         lsl r1,r1,#0x2
0808F0E0: 8918         add r1,r1,r2
0808F0E2: 0968         ldr r1,[r1,#0x0]
0808F0E4: 99f04cff     bl 0x08128f80
0808F0E8: 01bc         pop {r0}
0808F0EA: 0047         bx r0

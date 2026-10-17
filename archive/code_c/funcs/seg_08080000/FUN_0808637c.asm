; undefined FUN_0808637c(void)
; entry 0x808637c  size 62 bytes

0808637C: 00b5         push {lr}
0808637E: 021c         add r2,r0,#0x0
08086380: 0e48         ldr r0,[0x080863bc]
08086382: 0368         ldr r3,[r0,#0x0]
08086384: 506e         ldr r0,[r2,#0x64]
08086386: 596d         ldr r1,[r3,#0x54]
08086388: 401a         sub r0,r0,r1
0808638A: f021         mov r1,#0xf0
0808638C: 0902         lsl r1,r1,#0x8
0808638E: 4018         add r0,r0,r1
08086390: f021         mov r1,#0xf0
08086392: 4902         lsl r1,r1,#0x9
08086394: 8842         cmp r0,r1
08086396: 09d8         bhi 0x080863ac
08086398: 906e         ldr r0,[r2,#0x68]
0808639A: 996d         ldr r1,[r3,#0x58]
0808639C: 401a         sub r0,r0,r1
0808639E: c421         mov r1,#0xc4
080863A0: 0902         lsl r1,r1,#0x8
080863A2: 4018         add r0,r0,r1
080863A4: a021         mov r1,#0xa0
080863A6: 4902         lsl r1,r1,#0x9
080863A8: 8842         cmp r0,r1
080863AA: 04d9         bls 0x080863b6
080863AC: 0021         mov r1,#0x0
080863AE: 0320         mov r0,#0x3
080863B0: 5073         strb r0,[r2,#0xd]
080863B2: 9173         strb r1,[r2,#0xe]
080863B4: d173         strb r1,[r2,#0xf]
080863B6: 01bc         pop {r0}
080863B8: 0047         bx r0

; undefined FUN_08087164(void)
; entry 0x8087164  size 26 bytes

08087164: 00b5         push {lr}
08087166: 021c         add r2,r0,#0x0
08087168: b930         add r0,#0xb9
0808716A: 0078         ldrb r0,[r0,#0x0]
0808716C: 0028         cmp r0,#0x0
0808716E: 04d0         beq 0x0808717a
08087170: 0021         mov r1,#0x0
08087172: 0720         mov r0,#0x7
08087174: 5073         strb r0,[r2,#0xd]
08087176: 9173         strb r1,[r2,#0xe]
08087178: d173         strb r1,[r2,#0xf]
0808717A: 01bc         pop {r0}
0808717C: 0047         bx r0

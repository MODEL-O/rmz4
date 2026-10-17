; undefined FUN_08087148(void)
; entry 0x8087148  size 26 bytes

08087148: 00b5         push {lr}
0808714A: 021c         add r2,r0,#0x0
0808714C: b930         add r0,#0xb9
0808714E: 0078         ldrb r0,[r0,#0x0]
08087150: 0028         cmp r0,#0x0
08087152: 04d0         beq 0x0808715e
08087154: 0021         mov r1,#0x0
08087156: 0720         mov r0,#0x7
08087158: 5073         strb r0,[r2,#0xd]
0808715A: 9173         strb r1,[r2,#0xe]
0808715C: d173         strb r1,[r2,#0xf]
0808715E: 01bc         pop {r0}
08087160: 0047         bx r0

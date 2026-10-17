; undefined FUN_0808712c(void)
; entry 0x808712c  size 26 bytes

0808712C: 00b5         push {lr}
0808712E: 021c         add r2,r0,#0x0
08087130: b930         add r0,#0xb9
08087132: 0078         ldrb r0,[r0,#0x0]
08087134: 0028         cmp r0,#0x0
08087136: 04d0         beq 0x08087142
08087138: 0021         mov r1,#0x0
0808713A: 0720         mov r0,#0x7
0808713C: 5073         strb r0,[r2,#0xd]
0808713E: 9173         strb r1,[r2,#0xe]
08087140: d173         strb r1,[r2,#0xf]
08087142: 01bc         pop {r0}
08087144: 0047         bx r0

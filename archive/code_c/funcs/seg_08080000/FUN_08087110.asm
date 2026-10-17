; undefined FUN_08087110(void)
; entry 0x8087110  size 26 bytes

08087110: 00b5         push {lr}
08087112: 021c         add r2,r0,#0x0
08087114: b930         add r0,#0xb9
08087116: 0078         ldrb r0,[r0,#0x0]
08087118: 0028         cmp r0,#0x0
0808711A: 04d0         beq 0x08087126
0808711C: 0021         mov r1,#0x0
0808711E: 0720         mov r0,#0x7
08087120: 5073         strb r0,[r2,#0xd]
08087122: 9173         strb r1,[r2,#0xe]
08087124: d173         strb r1,[r2,#0xf]
08087126: 01bc         pop {r0}
08087128: 0047         bx r0

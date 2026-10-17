; undefined FUN_08087180(void)
; entry 0x8087180  size 26 bytes

08087180: 00b5         push {lr}
08087182: 021c         add r2,r0,#0x0
08087184: b930         add r0,#0xb9
08087186: 0078         ldrb r0,[r0,#0x0]
08087188: 0028         cmp r0,#0x0
0808718A: 04d0         beq 0x08087196
0808718C: 0021         mov r1,#0x0
0808718E: 0720         mov r0,#0x7
08087190: 5073         strb r0,[r2,#0xd]
08087192: 9173         strb r1,[r2,#0xe]
08087194: d173         strb r1,[r2,#0xf]
08087196: 01bc         pop {r0}
08087198: 0047         bx r0

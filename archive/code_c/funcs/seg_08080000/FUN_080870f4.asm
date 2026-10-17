; undefined FUN_080870f4(void)
; entry 0x80870f4  size 26 bytes

080870F4: 00b5         push {lr}
080870F6: 021c         add r2,r0,#0x0
080870F8: b930         add r0,#0xb9
080870FA: 0078         ldrb r0,[r0,#0x0]
080870FC: 0028         cmp r0,#0x0
080870FE: 04d0         beq 0x0808710a
08087100: 0021         mov r1,#0x0
08087102: 0720         mov r0,#0x7
08087104: 5073         strb r0,[r2,#0xd]
08087106: 9173         strb r1,[r2,#0xe]
08087108: d173         strb r1,[r2,#0xf]
0808710A: 01bc         pop {r0}
0808710C: 0047         bx r0

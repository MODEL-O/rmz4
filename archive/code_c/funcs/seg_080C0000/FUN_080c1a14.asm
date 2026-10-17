; undefined FUN_080c1a14(void)
; entry 0x80c1a14  size 24 bytes

080C1A14: 00b5         push {lr}
080C1A16: 021c         add r2,r0,#0x0
080C1A18: b430         add r0,#0xb4
080C1A1A: 0178         ldrb r1,[r0,#0x0]
080C1A1C: 0029         cmp r1,#0x0
080C1A1E: 03d1         bne 0x080c1a28
080C1A20: 0320         mov r0,#0x3
080C1A22: 5073         strb r0,[r2,#0xd]
080C1A24: 9173         strb r1,[r2,#0xe]
080C1A26: d173         strb r1,[r2,#0xf]
080C1A28: 01bc         pop {r0}
080C1A2A: 0047         bx r0

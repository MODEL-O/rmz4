; undefined FUN_080fb038(void)
; entry 0x80fb038  size 42 bytes

080FB038: 00b5         push {lr}
080FB03A: 021c         add r2,r0,#0x0
080FB03C: d17b         ldrb r1,[r2,#0xf]
080FB03E: 0029         cmp r1,#0x0
080FB040: 03d1         bne 0x080fb04a
080FB042: 8020         mov r0,#0x80
080FB044: 5066         str r0,[r2,#0x64]
080FB046: 481c         add r0,r1,#0x1
080FB048: d073         strb r0,[r2,#0xf]
080FB04A: 506e         ldr r0,[r2,#0x64]
080FB04C: 0138         sub r0,#0x1
080FB04E: 5066         str r0,[r2,#0x64]
080FB050: 0028         cmp r0,#0x0
080FB052: 04dc         bgt 0x080fb05e
080FB054: 0021         mov r1,#0x0
080FB056: 0120         mov r0,#0x1
080FB058: 5073         strb r0,[r2,#0xd]
080FB05A: 9173         strb r1,[r2,#0xe]
080FB05C: d173         strb r1,[r2,#0xf]
080FB05E: 01bc         pop {r0}
080FB060: 0047         bx r0

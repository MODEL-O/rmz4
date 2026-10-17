; undefined FUN_080fb0cc(void)
; entry 0x80fb0cc  size 48 bytes

080FB0CC: 00b5         push {lr}
080FB0CE: 021c         add r2,r0,#0x0
080FB0D0: d17b         ldrb r1,[r2,#0xf]
080FB0D2: 0029         cmp r1,#0x0
080FB0D4: 06d1         bne 0x080fb0e4
080FB0D6: b530         add r0,#0xb5
080FB0D8: 0170         strb r1,[r0,#0x0]
080FB0DA: 8020         mov r0,#0x80
080FB0DC: 5066         str r0,[r2,#0x64]
080FB0DE: d07b         ldrb r0,[r2,#0xf]
080FB0E0: 0130         add r0,#0x1
080FB0E2: d073         strb r0,[r2,#0xf]
080FB0E4: 506e         ldr r0,[r2,#0x64]
080FB0E6: 0138         sub r0,#0x1
080FB0E8: 5066         str r0,[r2,#0x64]
080FB0EA: 0028         cmp r0,#0x0
080FB0EC: 04dc         bgt 0x080fb0f8
080FB0EE: 0021         mov r1,#0x0
080FB0F0: 0120         mov r0,#0x1
080FB0F2: 5073         strb r0,[r2,#0xd]
080FB0F4: 9173         strb r1,[r2,#0xe]
080FB0F6: d173         strb r1,[r2,#0xf]
080FB0F8: 01bc         pop {r0}
080FB0FA: 0047         bx r0

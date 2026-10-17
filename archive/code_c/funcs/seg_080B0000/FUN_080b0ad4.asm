; undefined FUN_080b0ad4(void)
; entry 0x80b0ad4  size 50 bytes

080B0AD4: 10b5         push {r4,lr}
080B0AD6: 041c         add r4,r0,#0x0
080B0AD8: a07b         ldrb r0,[r4,#0xe]
080B0ADA: 0028         cmp r0,#0x0
080B0ADC: 07d1         bne 0x080b0aee
080B0ADE: 201c         add r0,r4,#0x0
080B0AE0: 00f0f4f8     bl 0x080b0ccc
080B0AE4: 1e20         mov r0,#0x1e
080B0AE6: a074         strb r0,[r4,#0x12]
080B0AE8: a07b         ldrb r0,[r4,#0xe]
080B0AEA: 0130         add r0,#0x1
080B0AEC: a073         strb r0,[r4,#0xe]
080B0AEE: a27c         ldrb r2,[r4,#0x12]
080B0AF0: 111c         add r1,r2,#0x0
080B0AF2: 0029         cmp r1,#0x0
080B0AF4: 02d1         bne 0x080b0afc
080B0AF6: 0320         mov r0,#0x3
080B0AF8: 6073         strb r0,[r4,#0xd]
080B0AFA: a173         strb r1,[r4,#0xe]
080B0AFC: 501e         sub r0,r2,#0x1
080B0AFE: a074         strb r0,[r4,#0x12]
080B0B00: 10bc         pop {r4}
080B0B02: 01bc         pop {r0}
080B0B04: 0047         bx r0

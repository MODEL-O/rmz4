; undefined FUN_080b2ad4(void)
; entry 0x80b2ad4  size 68 bytes

080B2AD4: 30b5         push {r4,r5,lr}
080B2AD6: 041c         add r4,r0,#0x0
080B2AD8: 00f05cf8     bl 0x080b2b94
080B2ADC: 251c         add r5,r4,#0x0
080B2ADE: c035         add r5,#0xc0
080B2AE0: 2868         ldr r0,[r5,#0x0]
080B2AE2: 78f77ffc     bl 0x0802b3e4
080B2AE6: 0028         cmp r0,#0x0
080B2AE8: 16d0         beq 0x080b2b18
080B2AEA: 201c         add r0,r4,#0x0
080B2AEC: 7430         add r0,#0x74
080B2AEE: 0649         ldr r1,[0x080b2b08]
080B2AF0: 52f748fe     bl 0x08005784
080B2AF4: 0021         mov r1,#0x0
080B2AF6: 2960         str r1,[r5,#0x0]
080B2AF8: 607c         ldrb r0,[r4,#0x11]
080B2AFA: 0128         cmp r0,#0x1
080B2AFC: 06d8         bhi 0x080b2b0c
080B2AFE: 0320         mov r0,#0x3
080B2B00: 6073         strb r0,[r4,#0xd]
080B2B02: a173         strb r1,[r4,#0xe]
080B2B04: 08e0         b 0x080b2b18
080B2B0C: 6173         strb r1,[r4,#0xd]
080B2B0E: 0120         mov r0,#0x1
080B2B10: e073         strb r0,[r4,#0xf]
080B2B12: a173         strb r1,[r4,#0xe]
080B2B14: 1820         mov r0,#0x18
080B2B16: a074         strb r0,[r4,#0x12]
080B2B18: 30bc         pop {r4,r5}
080B2B1A: 01bc         pop {r0}
080B2B1C: 0047         bx r0

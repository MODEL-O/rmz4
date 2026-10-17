; undefined FUN_080675b8(void)
; entry 0x80675b8  size 62 bytes

080675B8: 10b5         push {r4,lr}
080675BA: 041c         add r4,r0,#0x0
080675BC: a07b         ldrb r0,[r4,#0xe]
080675BE: 0028         cmp r0,#0x0
080675C0: 08d1         bne 0x080675d4
080675C2: 0d49         ldr r1,[0x080675f8]
080675C4: 201c         add r0,r4,#0x0
080675C6: b5f79bfc     bl 0x0801cf00
080675CA: 4020         mov r0,#0x40
080675CC: a074         strb r0,[r4,#0x12]
080675CE: a07b         ldrb r0,[r4,#0xe]
080675D0: 0130         add r0,#0x1
080675D2: a073         strb r0,[r4,#0xe]
080675D4: 201c         add r0,r4,#0x0
080675D6: b5f70bfd     bl 0x0801cff0
080675DA: a07c         ldrb r0,[r4,#0x12]
080675DC: 0138         sub r0,#0x1
080675DE: a074         strb r0,[r4,#0x12]
080675E0: 0006         lsl r0,r0,#0x18
080675E2: 000e         lsr r0,r0,#0x18
080675E4: ff28         cmp r0,#0xff
080675E6: 03d1         bne 0x080675f0
080675E8: 0c20         mov r0,#0xc
080675EA: 6073         strb r0,[r4,#0xd]
080675EC: 0020         mov r0,#0x0
080675EE: a073         strb r0,[r4,#0xe]
080675F0: 10bc         pop {r4}
080675F2: 01bc         pop {r0}
080675F4: 0047         bx r0

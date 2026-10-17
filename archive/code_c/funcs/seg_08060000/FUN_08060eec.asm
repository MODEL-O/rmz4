; undefined FUN_08060eec(void)
; entry 0x8060eec  size 62 bytes

08060EEC: 10b5         push {r4,lr}
08060EEE: 041c         add r4,r0,#0x0
08060EF0: a07b         ldrb r0,[r4,#0xe]
08060EF2: 0028         cmp r0,#0x0
08060EF4: 08d1         bne 0x08060f08
08060EF6: 0d49         ldr r1,[0x08060f2c]
08060EF8: 201c         add r0,r4,#0x0
08060EFA: bcf701f8     bl 0x0801cf00
08060EFE: 4020         mov r0,#0x40
08060F00: a074         strb r0,[r4,#0x12]
08060F02: a07b         ldrb r0,[r4,#0xe]
08060F04: 0130         add r0,#0x1
08060F06: a073         strb r0,[r4,#0xe]
08060F08: 201c         add r0,r4,#0x0
08060F0A: bcf771f8     bl 0x0801cff0
08060F0E: a07c         ldrb r0,[r4,#0x12]
08060F10: 0138         sub r0,#0x1
08060F12: a074         strb r0,[r4,#0x12]
08060F14: 0006         lsl r0,r0,#0x18
08060F16: 000e         lsr r0,r0,#0x18
08060F18: ff28         cmp r0,#0xff
08060F1A: 03d1         bne 0x08060f24
08060F1C: 1a20         mov r0,#0x1a
08060F1E: 6073         strb r0,[r4,#0xd]
08060F20: 0020         mov r0,#0x0
08060F22: a073         strb r0,[r4,#0xe]
08060F24: 10bc         pop {r4}
08060F26: 01bc         pop {r0}
08060F28: 0047         bx r0

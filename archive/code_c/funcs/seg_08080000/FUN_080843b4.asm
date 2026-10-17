; undefined FUN_080843b4(void)
; entry 0x80843b4  size 56 bytes

080843B4: 10b5         push {r4,lr}
080843B6: 041c         add r4,r0,#0x0
080843B8: a07b         ldrb r0,[r4,#0xe]
080843BA: 0028         cmp r0,#0x0
080843BC: 08d1         bne 0x080843d0
080843BE: 0b49         ldr r1,[0x080843ec]
080843C0: 201c         add r0,r4,#0x0
080843C2: 98f79dfd     bl 0x0801cf00
080843C6: 0820         mov r0,#0x8
080843C8: a074         strb r0,[r4,#0x12]
080843CA: a07b         ldrb r0,[r4,#0xe]
080843CC: 0130         add r0,#0x1
080843CE: a073         strb r0,[r4,#0xe]
080843D0: a07c         ldrb r0,[r4,#0x12]
080843D2: 0138         sub r0,#0x1
080843D4: a074         strb r0,[r4,#0x12]
080843D6: 0006         lsl r0,r0,#0x18
080843D8: 000e         lsr r0,r0,#0x18
080843DA: ff28         cmp r0,#0xff
080843DC: 03d1         bne 0x080843e6
080843DE: 0220         mov r0,#0x2
080843E0: 6073         strb r0,[r4,#0xd]
080843E2: 0020         mov r0,#0x0
080843E4: a073         strb r0,[r4,#0xe]
080843E6: 10bc         pop {r4}
080843E8: 01bc         pop {r0}
080843EA: 0047         bx r0

; undefined FUN_080df6d4(void)
; entry 0x80df6d4  size 64 bytes

080DF6D4: 10b5         push {r4,lr}
080DF6D6: 041c         add r4,r0,#0x0
080DF6D8: 607b         ldrb r0,[r4,#0xd]
080DF6DA: 0028         cmp r0,#0x0
080DF6DC: 08d1         bne 0x080df6f0
080DF6DE: 0d49         ldr r1,[0x080df714]
080DF6E0: 201c         add r0,r4,#0x0
080DF6E2: 3df70dfc     bl 0x0801cf00
080DF6E6: 1420         mov r0,#0x14
080DF6E8: a074         strb r0,[r4,#0x12]
080DF6EA: 607b         ldrb r0,[r4,#0xd]
080DF6EC: 0130         add r0,#0x1
080DF6EE: 6073         strb r0,[r4,#0xd]
080DF6F0: a07c         ldrb r0,[r4,#0x12]
080DF6F2: 0138         sub r0,#0x1
080DF6F4: a074         strb r0,[r4,#0x12]
080DF6F6: 0006         lsl r0,r0,#0x18
080DF6F8: 0028         cmp r0,#0x0
080DF6FA: 08d1         bne 0x080df70e
080DF6FC: 0649         ldr r1,[0x080df718]
080DF6FE: 607a         ldrb r0,[r4,#0x9]
080DF700: 8000         lsl r0,r0,#0x2
080DF702: 4018         add r0,r0,r1
080DF704: 0221         mov r1,#0x2
080DF706: e160         str r1,[r4,#0xc]
080DF708: 0068         ldr r0,[r0,#0x0]
080DF70A: 8068         ldr r0,[r0,#0x8]
080DF70C: 6061         str r0,[r4,#0x14]
080DF70E: 10bc         pop {r4}
080DF710: 01bc         pop {r0}
080DF712: 0047         bx r0

; undefined FUN_080ecbb0(void)
; entry 0x80ecbb0  size 36 bytes

080ECBB0: 10b5         push {r4,lr}
080ECBB2: 041c         add r4,r0,#0x0
080ECBB4: e07b         ldrb r0,[r4,#0xf]
080ECBB6: 0028         cmp r0,#0x0
080ECBB8: 06d1         bne 0x080ecbc8
080ECBBA: 0649         ldr r1,[0x080ecbd4]
080ECBBC: 201c         add r0,r4,#0x0
080ECBBE: 30f79ff9     bl 0x0801cf00
080ECBC2: e07b         ldrb r0,[r4,#0xf]
080ECBC4: 0130         add r0,#0x1
080ECBC6: e073         strb r0,[r4,#0xf]
080ECBC8: 201c         add r0,r4,#0x0
080ECBCA: 30f711fa     bl 0x0801cff0
080ECBCE: 10bc         pop {r4}
080ECBD0: 01bc         pop {r0}
080ECBD2: 0047         bx r0

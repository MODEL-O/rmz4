; undefined FUN_080bc884(void)
; entry 0x80bc884  size 62 bytes

080BC884: 10b5         push {r4,lr}
080BC886: 041c         add r4,r0,#0x0
080BC888: b430         add r0,#0xb4
080BC88A: 0078         ldrb r0,[r0,#0x0]
080BC88C: 0028         cmp r0,#0x0
080BC88E: 06d1         bne 0x080bc89e
080BC890: 201c         add r0,r4,#0x0
080BC892: 00f077f8     bl 0x080bc984
080BC896: 201c         add r0,r4,#0x0
080BC898: 60f7aafb     bl 0x0801cff0
080BC89C: 0ee0         b 0x080bc8bc
080BC89E: 201c         add r0,r4,#0x0
080BC8A0: 8c30         add r0,#0x8c
080BC8A2: 0021         mov r1,#0x0
080BC8A4: 0160         str r1,[r0,#0x0]
080BC8A6: 0430         add r0,#0x4
080BC8A8: 0160         str r1,[r0,#0x0]
080BC8AA: 0430         add r0,#0x4
080BC8AC: 0170         strb r1,[r0,#0x0]
080BC8AE: a17a         ldrb r1,[r4,#0xa]
080BC8B0: fb20         mov r0,#0xfb
080BC8B2: 0840         and r0,r1
080BC8B4: a072         strb r0,[r4,#0xa]
080BC8B6: 201c         add r0,r4,#0x0
080BC8B8: 00f0bef8     bl 0x080bca38
080BC8BC: 10bc         pop {r4}
080BC8BE: 01bc         pop {r0}
080BC8C0: 0047         bx r0

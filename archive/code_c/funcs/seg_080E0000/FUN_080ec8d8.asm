; undefined FUN_080ec8d8(void)
; entry 0x80ec8d8  size 70 bytes

080EC8D8: 30b5         push {r4,r5,lr}
080EC8DA: 051c         add r5,r0,#0x0
080EC8DC: e87b         ldrb r0,[r5,#0xf]
080EC8DE: 0028         cmp r0,#0x0
080EC8E0: 07d1         bne 0x080ec8f2
080EC8E2: b821         mov r1,#0xb8
080EC8E4: 8900         lsl r1,r1,#0x2
080EC8E6: 0a20         mov r0,#0xa
080EC8E8: 15f7d8fd     bl 0x0800249c
080EC8EC: e87b         ldrb r0,[r5,#0xf]
080EC8EE: 0130         add r0,#0x1
080EC8F0: e873         strb r0,[r5,#0xf]
080EC8F2: 0a20         mov r0,#0xa
080EC8F4: 15f770fe     bl 0x080025d8
080EC8F8: 041c         add r4,r0,#0x0
080EC8FA: 2406         lsl r4,r4,#0x18
080EC8FC: 240e         lsr r4,r4,#0x18
080EC8FE: 281c         add r0,r5,#0x0
080EC900: 30f776fb     bl 0x0801cff0
080EC904: 033c         sub r4,#0x3
080EC906: 012c         cmp r4,#0x1
080EC908: 06d8         bhi 0x080ec918
080EC90A: 0a20         mov r0,#0xa
080EC90C: 15f78afe     bl 0x08002624
080EC910: 0020         mov r0,#0x0
080EC912: 6873         strb r0,[r5,#0xd]
080EC914: a873         strb r0,[r5,#0xe]
080EC916: e873         strb r0,[r5,#0xf]
080EC918: 30bc         pop {r4,r5}
080EC91A: 01bc         pop {r0}
080EC91C: 0047         bx r0

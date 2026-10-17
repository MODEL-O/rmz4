; undefined FUN_080ec6d4(void)
; entry 0x80ec6d4  size 70 bytes

080EC6D4: 30b5         push {r4,r5,lr}
080EC6D6: 051c         add r5,r0,#0x0
080EC6D8: e87b         ldrb r0,[r5,#0xf]
080EC6DA: 0028         cmp r0,#0x0
080EC6DC: 07d1         bne 0x080ec6ee
080EC6DE: b021         mov r1,#0xb0
080EC6E0: 8900         lsl r1,r1,#0x2
080EC6E2: 0720         mov r0,#0x7
080EC6E4: 15f7dafe     bl 0x0800249c
080EC6E8: e87b         ldrb r0,[r5,#0xf]
080EC6EA: 0130         add r0,#0x1
080EC6EC: e873         strb r0,[r5,#0xf]
080EC6EE: 0720         mov r0,#0x7
080EC6F0: 15f772ff     bl 0x080025d8
080EC6F4: 041c         add r4,r0,#0x0
080EC6F6: 2406         lsl r4,r4,#0x18
080EC6F8: 240e         lsr r4,r4,#0x18
080EC6FA: 281c         add r0,r5,#0x0
080EC6FC: 30f778fc     bl 0x0801cff0
080EC700: 033c         sub r4,#0x3
080EC702: 012c         cmp r4,#0x1
080EC704: 06d8         bhi 0x080ec714
080EC706: 0720         mov r0,#0x7
080EC708: 15f78cff     bl 0x08002624
080EC70C: 0020         mov r0,#0x0
080EC70E: 6873         strb r0,[r5,#0xd]
080EC710: a873         strb r0,[r5,#0xe]
080EC712: e873         strb r0,[r5,#0xf]
080EC714: 30bc         pop {r4,r5}
080EC716: 01bc         pop {r0}
080EC718: 0047         bx r0

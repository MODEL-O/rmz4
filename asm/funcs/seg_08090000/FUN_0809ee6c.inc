@ FUN_0809ee6c  entry 0x0809ee6c  size 66
.thumb
.org 0x9ee6c
FUN_0809ee6c:
	push {r4, lr}	@ 0009ee6c 10b5
.org 0x9ee6e
	adds r4, r0, #0	@ 0009ee6e 041c
.org 0x9ee70
	adds r1, r4, #0	@ 0009ee70 211c
.org 0x9ee72
	adds r1, #84	@ 0009ee72 5431
.org 0x9ee74
	movs r0, #2	@ 0009ee74 0220
.org 0x9ee76
	bl 0xd0c88	@ 0009ee76 31f007ff
.org 0x9ee7a
	adds r0, r4, #0	@ 0009ee7a 201c
.org 0x9ee7c
	adds r0, #140	@ 0009ee7c 8c30
.org 0x9ee7e
	movs r1, #0	@ 0009ee7e 0021
.org 0x9ee80
	str r1, [r0, #0]	@ 0009ee80 0160
.org 0x9ee82
	adds r0, #4	@ 0009ee82 0430
.org 0x9ee84
	str r1, [r0, #0]	@ 0009ee84 0160
.org 0x9ee86
	adds r0, #4	@ 0009ee86 0430
.org 0x9ee88
	strb r1, [r0, #0]	@ 0009ee88 0170
.org 0x9ee8a
	ldrb r1, [r4, #10]	@ 0009ee8a a17a
.org 0x9ee8c
	movs r0, #251	@ 0009ee8c fb20
.org 0x9ee8e
	ands r0, r1	@ 0009ee8e 0840
.org 0x9ee90
	movs r1, #254	@ 0009ee90 fe21
.org 0x9ee92
	ands r0, r1	@ 0009ee92 0840
.org 0x9ee94
	strb r0, [r4, #10]	@ 0009ee94 a072
.org 0x9ee96
	ldr r1, [pc, #24]	@ 0009ee96 0649
.org 0x9ee98
	ldrb r0, [r4, #9]	@ 0009ee98 607a
.org 0x9ee9a
	lsls r0, r0, #2	@ 0009ee9a 8000
.org 0x9ee9c
	adds r0, r0, r1	@ 0009ee9c 4018
.org 0x9ee9e
	movs r1, #4	@ 0009ee9e 0421
.org 0x9eea0
	str r1, [r4, #12]	@ 0009eea0 e160
.org 0x9eea2
	ldr r0, [r0, #0]	@ 0009eea2 0068
.org 0x9eea4
	ldr r0, [r0, #16]	@ 0009eea4 0069
.org 0x9eea6
	str r0, [r4, #20]	@ 0009eea6 6061
.org 0x9eea8
	pop {r4}	@ 0009eea8 10bc
.org 0x9eeaa
	pop {r0}	@ 0009eeaa 01bc
.org 0x9eeac
	bx r0	@ 0009eeac 0047

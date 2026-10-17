@ FUN_080d2a60  entry 0x080d2a60  size 92
.thumb
.org 0xd2a60
FUN_080d2a60:
	push {r4, lr}	@ 000d2a60 10b5
.org 0xd2a62
	adds r4, r0, #0	@ 000d2a62 041c
.org 0xd2a64
	ldr r3, [r4, #40]	@ 000d2a64 a36a
.org 0xd2a66
	movs r0, #0	@ 000d2a66 0020
.org 0xd2a68
	movs r2, #16	@ 000d2a68 1022
.org 0xd2a6a
	strb r2, [r4, #18]	@ 000d2a6a a274
.org 0xd2a6c
	strb r0, [r4, #19]	@ 000d2a6c e074
.org 0xd2a6e
	strb r0, [r4, #17]	@ 000d2a6e 6074
.org 0xd2a70
	ldr r1, [pc, #28]	@ 000d2a70 0749
.org 0xd2a72
	movs r0, #4	@ 000d2a72 0420
.org 0xd2a74
	strb r0, [r1, #2]	@ 000d2a74 8870
.org 0xd2a76
	ldr r0, [r3, #84]	@ 000d2a76 586d
.org 0xd2a78
	ldr r1, [r3, #88]	@ 000d2a78 996d
.org 0xd2a7a
	str r0, [r4, #84]	@ 000d2a7a 6065
.org 0xd2a7c
	str r1, [r4, #88]	@ 000d2a7c a165
.org 0xd2a7e
	ldrb r0, [r3, #10]	@ 000d2a7e 987a
.org 0xd2a80
	ands r2, r0	@ 000d2a80 0240
.org 0xd2a82
	cmp r2, #0	@ 000d2a82 002a
.org 0xd2a84
	beq.n 0xd2a94	@ 000d2a84 06d0
.org 0xd2a86
	ldr r0, [r4, #84]	@ 000d2a86 606d
.org 0xd2a88
	ldr r1, [r4, #92]	@ 000d2a88 e16d
.org 0xd2a8a
	subs r0, r0, r1	@ 000d2a8a 401a
.org 0xd2a8c
	b.n 0xd2a9a	@ 000d2a8c 05e0
.org 0xd2a8e
	.byte 0x00	@ 000d2a8e data
.org 0xd2a8f
	.byte 0x00	@ 000d2a8f data
.org 0xd2a90
	.byte 0x50,0xed,0x02,0x02	@ 000d2a90 data
.org 0xd2a94
	ldr r0, [r4, #84]	@ 000d2a94 606d
.org 0xd2a96
	ldr r1, [r4, #92]	@ 000d2a96 e16d
.org 0xd2a98
	adds r0, r0, r1	@ 000d2a98 4018
.org 0xd2a9a
	str r0, [r4, #84]	@ 000d2a9a 6065
.org 0xd2a9c
	ldr r0, [r4, #88]	@ 000d2a9c a06d
.org 0xd2a9e
	ldr r1, [r4, #96]	@ 000d2a9e 216e
.org 0xd2aa0
	adds r0, r0, r1	@ 000d2aa0 4018
.org 0xd2aa2
	str r0, [r4, #88]	@ 000d2aa2 a065
.org 0xd2aa4
	ldr r1, [pc, #28]	@ 000d2aa4 0749
.org 0xd2aa6
	ldrb r0, [r4, #9]	@ 000d2aa6 607a
.org 0xd2aa8
	lsls r0, r0, #2	@ 000d2aa8 8000
.org 0xd2aaa
	adds r0, r0, r1	@ 000d2aaa 4018
.org 0xd2aac
	movs r1, #1	@ 000d2aac 0121
.org 0xd2aae
	str r1, [r4, #12]	@ 000d2aae e160
.org 0xd2ab0
	ldr r0, [r0, #0]	@ 000d2ab0 0068
.org 0xd2ab2
	ldr r0, [r0, #4]	@ 000d2ab2 4068
.org 0xd2ab4
	str r0, [r4, #20]	@ 000d2ab4 6061
.org 0xd2ab6
	adds r0, r4, #0	@ 000d2ab6 201c
.org 0xd2ab8
	bl 0xd2a30	@ 000d2ab8 fff7baff

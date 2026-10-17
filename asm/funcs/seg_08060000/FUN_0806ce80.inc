@ FUN_0806ce80  entry 0x0806ce80  size 84
.thumb
.org 0x6ce80
FUN_0806ce80:
	push {r4, r5, lr}	@ 0006ce80 30b5
.org 0x6ce82
	adds r4, r0, #0	@ 0006ce82 041c
.org 0x6ce84
	ldrb r5, [r4, #14]	@ 0006ce84 a57b
.org 0x6ce86
	cmp r5, #0	@ 0006ce86 002d
.org 0x6ce88
	bne.n 0x6cea8	@ 0006ce88 0ed1
.org 0x6ce8a
	ldr r1, [pc, #72]	@ 0006ce8a 1249
.org 0x6ce8c
	bl 0x1cf00	@ 0006ce8c b0f738f8
.org 0x6ce90
	movs r0, #206	@ 0006ce90 ce20
.org 0x6ce92
	bl 0x2b10	@ 0006ce92 95f73dfe
.org 0x6ce96
	adds r0, r4, #0	@ 0006ce96 201c
.org 0x6ce98
	movs r1, #1	@ 0006ce98 0121
.org 0x6ce9a
	movs r2, #1	@ 0006ce9a 0122
.org 0x6ce9c
	bl 0xca4c4	@ 0006ce9c 5df012fb
.org 0x6cea0
	str r5, [r4, #96]	@ 0006cea0 2566
.org 0x6cea2
	ldrb r0, [r4, #14]	@ 0006cea2 a07b
.org 0x6cea4
	adds r0, #1	@ 0006cea4 0130
.org 0x6cea6
	strb r0, [r4, #14]	@ 0006cea6 a073
.org 0x6cea8
	adds r0, r4, #0	@ 0006cea8 201c
.org 0x6ceaa
	bl 0x1cff0	@ 0006ceaa b0f7a1f8
.org 0x6ceae
	ldr r0, [r4, #88]	@ 0006ceae a06d
.org 0x6ceb0
	ldr r1, [r4, #96]	@ 0006ceb0 216e
.org 0x6ceb2
	adds r0, r0, r1	@ 0006ceb2 4018
.org 0x6ceb4
	str r0, [r4, #88]	@ 0006ceb4 a065
.org 0x6ceb6
	adds r1, #64	@ 0006ceb6 4031
.org 0x6ceb8
	str r1, [r4, #96]	@ 0006ceb8 2166
.org 0x6ceba
	adds r1, r4, #0	@ 0006ceba 211c
.org 0x6cebc
	adds r1, #180	@ 0006cebc b431
.org 0x6cebe
	ldr r1, [r1, #4]	@ 0006cebe 4968
.org 0x6cec0
	cmp r0, r1	@ 0006cec0 8842
.org 0x6cec2
	ble.n 0x6cece	@ 0006cec2 04dd
.org 0x6cec4
	str r1, [r4, #88]	@ 0006cec4 a165
.org 0x6cec6
	movs r1, #0	@ 0006cec6 0021
.org 0x6cec8
	movs r0, #33	@ 0006cec8 2120
.org 0x6ceca
	strb r0, [r4, #13]	@ 0006ceca 6073
.org 0x6cecc
	strb r1, [r4, #14]	@ 0006cecc a173
.org 0x6cece
	pop {r4, r5}	@ 0006cece 30bc
.org 0x6ced0
	pop {r0}	@ 0006ced0 01bc
.org 0x6ced2
	bx r0	@ 0006ced2 0047

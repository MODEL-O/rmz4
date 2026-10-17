@ FUN_080aca54  entry 0x080aca54  size 94
.thumb
.org 0xaca54
FUN_080aca54:
	push {r4, r5, lr}	@ 000aca54 30b5
.org 0xaca56
	adds r4, r0, #0	@ 000aca56 041c
.org 0xaca58
	ldr r5, [r4, #40]	@ 000aca58 a56a
.org 0xaca5a
	ldrb r0, [r4, #15]	@ 000aca5a e07b
.org 0xaca5c
	cmp r0, #0	@ 000aca5c 0028
.org 0xaca5e
	bne.n 0xaca7e	@ 000aca5e 0ed1
.org 0xaca60
	ldrb r1, [r4, #10]	@ 000aca60 a17a
.org 0xaca62
	movs r0, #1	@ 000aca62 0120
.org 0xaca64
	orrs r0, r1	@ 000aca64 0843
.org 0xaca66
	strb r0, [r4, #10]	@ 000aca66 a072
.org 0xaca68
	adds r1, r4, #0	@ 000aca68 211c
.org 0xaca6a
	adds r1, #184	@ 000aca6a b831
.org 0xaca6c
	movs r0, #1	@ 000aca6c 0120
.org 0xaca6e
	strb r0, [r1, #0]	@ 000aca6e 0870
.org 0xaca70
	ldr r1, [pc, #48]	@ 000aca70 0c49
.org 0xaca72
	adds r0, r4, #0	@ 000aca72 201c
.org 0xaca74
	bl 0x1cf00	@ 000aca74 70f744fa
.org 0xaca78
	ldrb r0, [r4, #15]	@ 000aca78 e07b
.org 0xaca7a
	adds r0, #1	@ 000aca7a 0130
.org 0xaca7c
	strb r0, [r4, #15]	@ 000aca7c e073
.org 0xaca7e
	adds r0, r4, #0	@ 000aca7e 201c
.org 0xaca80
	bl 0x1cff0	@ 000aca80 70f7b6fa
.org 0xaca84
	ldr r0, [r5, #84]	@ 000aca84 686d
.org 0xaca86
	ldr r1, [r5, #88]	@ 000aca86 a96d
.org 0xaca88
	str r0, [r4, #84]	@ 000aca88 6065
.org 0xaca8a
	str r1, [r4, #88]	@ 000aca8a a165
.org 0xaca8c
	adds r0, r4, #0	@ 000aca8c 201c
.org 0xaca8e
	bl 0xacb5c	@ 000aca8e 00f065f8
.org 0xaca92
	adds r0, r4, #0	@ 000aca92 201c
.org 0xaca94
	adds r0, #115	@ 000aca94 7330
.org 0xaca96
	ldrb r0, [r0, #0]	@ 000aca96 0078
.org 0xaca98
	cmp r0, #4	@ 000aca98 0428
.org 0xaca9a
	bne.n 0xacaa8	@ 000aca9a 05d1
.org 0xaca9c
	adds r1, r4, #0	@ 000aca9c 211c
.org 0xaca9e
	adds r1, #180	@ 000aca9e b431
.org 0xacaa0
	movs r0, #1	@ 000acaa0 0120
.org 0xacaa2
	b.n 0xacaae	@ 000acaa2 04e0
.org 0xacaa4
	.byte 0x01,0xb0,0x00,0x00	@ 000acaa4 data
.org 0xacaa8
	adds r1, r4, #0	@ 000acaa8 211c
.org 0xacaaa
	adds r1, #180	@ 000acaaa b431
.org 0xacaac
	movs r0, #0	@ 000acaac 0020
.org 0xacaae
	strb r0, [r1, #0]	@ 000acaae 0870
.org 0xacab0
	pop {r4, r5}	@ 000acab0 30bc

@ FUN_08074a60  entry 0x08074a60  size 158
.thumb
.org 0x74a60
FUN_08074a60:
	push {r4, r5, r6, lr}	@ 00074a60 70b5
.org 0x74a62
	adds r4, r0, #0	@ 00074a62 041c
.org 0x74a64
	ldrb r0, [r4, #14]	@ 00074a64 a07b
.org 0x74a66
	cmp r0, #0	@ 00074a66 0028
.org 0x74a68
	bne.n 0x74aaa	@ 00074a68 1fd1
.org 0x74a6a
	ldr r1, [pc, #28]	@ 00074a6a 0749
.org 0x74a6c
	adds r0, r4, #0	@ 00074a6c 201c
.org 0x74a6e
	bl 0x1cf00	@ 00074a6e a8f747fa
.org 0x74a72
	adds r1, r4, #0	@ 00074a72 211c
.org 0x74a74
	adds r1, #180	@ 00074a74 b431
.org 0x74a76
	adds r0, r4, #0	@ 00074a76 201c
.org 0x74a78
	adds r0, #226	@ 00074a78 e230
.org 0x74a7a
	ldrb r0, [r0, #0]	@ 00074a7a 0078
.org 0x74a7c
	cmp r0, #0	@ 00074a7c 0028
.org 0x74a7e
	bne.n 0x74a8c	@ 00074a7e 05d1
.org 0x74a80
	movs r0, #128	@ 00074a80 8020
.org 0x74a82
	lsls r0, r0, #2	@ 00074a82 8000
.org 0x74a84
	b.n 0x74a90	@ 00074a84 04e0
.org 0x74a86
	.byte 0x00	@ 00074a86 data
.org 0x74a87
	.byte 0x00	@ 00074a87 data
.org 0x74a88
	.byte 0x01,0x93,0x00,0x00	@ 00074a88 data
.org 0x74a8c
	movs r0, #254	@ 00074a8c fe20
.org 0x74a8e
	lsls r0, r0, #8	@ 00074a8e 0002
.org 0x74a90
	strh r0, [r1, #20]	@ 00074a90 8882
.org 0x74a92
	strh r0, [r1, #22]	@ 00074a92 c882
.org 0x74a94
	adds r1, r4, #0	@ 00074a94 211c
.org 0x74a96
	adds r1, #180	@ 00074a96 b431
.org 0x74a98
	movs r2, #0	@ 00074a98 0022
.org 0x74a9a
	movs r0, #0	@ 00074a9a 0020
.org 0x74a9c
	strh r0, [r1, #40]	@ 00074a9c 0885
.org 0x74a9e
	ldrh r0, [r1, #20]	@ 00074a9e 888a
.org 0x74aa0
	strh r0, [r1, #22]	@ 00074aa0 c882
.org 0x74aa2
	strb r2, [r4, #15]	@ 00074aa2 e273
.org 0x74aa4
	ldrb r0, [r4, #14]	@ 00074aa4 a07b
.org 0x74aa6
	adds r0, #1	@ 00074aa6 0130
.org 0x74aa8
	strb r0, [r4, #14]	@ 00074aa8 a073
.org 0x74aaa
	adds r3, r4, #0	@ 00074aaa 231c
.org 0x74aac
	adds r3, #224	@ 00074aac e033
.org 0x74aae
	ldrb r1, [r3, #0]	@ 00074aae 1978
.org 0x74ab0
	movs r0, #127	@ 00074ab0 7f20
.org 0x74ab2
	ands r0, r1	@ 00074ab2 0840
.org 0x74ab4
	adds r2, r4, #0	@ 00074ab4 221c
.org 0x74ab6
	adds r2, #180	@ 00074ab6 b432
.org 0x74ab8
	cmp r0, #0	@ 00074ab8 0028
.org 0x74aba
	beq.n 0x74ad6	@ 00074aba 0cd0
.org 0x74abc
	ldr r1, [pc, #56]	@ 00074abc 0e49
.org 0x74abe
	ldrb r0, [r3, #0]	@ 00074abe 1878
.org 0x74ac0
	lsls r0, r0, #1	@ 00074ac0 4000
.org 0x74ac2
	adds r0, r0, r1	@ 00074ac2 4018
.org 0x74ac4
	movs r5, #0	@ 00074ac4 0025
.org 0x74ac6
	ldrsh r1, [r0, r5]	@ 00074ac6 415f
.org 0x74ac8
	lsls r1, r1, #2	@ 00074ac8 8900
.org 0x74aca
	ldr r0, [r2, #4]	@ 00074aca 5068
.org 0x74acc
	adds r0, r0, r1	@ 00074acc 4018
.org 0x74ace
	str r0, [r4, #88]	@ 00074ace a065
.org 0x74ad0
	ldrb r0, [r3, #0]	@ 00074ad0 1878
.org 0x74ad2
	adds r0, #1	@ 00074ad2 0130
.org 0x74ad4
	strb r0, [r3, #0]	@ 00074ad4 1870
.org 0x74ad6
	ldrh r3, [r2, #16]	@ 00074ad6 138a
.org 0x74ad8
	ldrh r0, [r2, #20]	@ 00074ad8 908a
.org 0x74ada
	adds r0, r3, r0	@ 00074ada 1818
.org 0x74adc
	strh r0, [r2, #16]	@ 00074adc 1082
.org 0x74ade
	ldrh r0, [r2, #22]	@ 00074ade d08a
.org 0x74ae0
	ldrh r1, [r2, #18]	@ 00074ae0 518a
.org 0x74ae2
	adds r0, r0, r1	@ 00074ae2 4018
.org 0x74ae4
	strh r0, [r2, #18]	@ 00074ae4 5082
.org 0x74ae6
	ldrb r0, [r4, #15]	@ 00074ae6 e07b
.org 0x74ae8
	cmp r0, #5	@ 00074ae8 0528
.org 0x74aea
	bls.n 0x74aee	@ 00074aea 00d9
.org 0x74aec
	b.n 0x74cfe	@ 00074aec 07e1
.org 0x74aee
	lsls r0, r0, #2	@ 00074aee 8000
.org 0x74af0
	ldr r1, [pc, #8]	@ 00074af0 0249
.org 0x74af2
	adds r0, r0, r1	@ 00074af2 4018
.org 0x74af4
	ldr r0, [r0, #0]	@ 00074af4 0068
.org 0x74af6
	mov pc, r0	@ 00074af6 8746
.org 0x74af8
	.byte 0x0c,0x93,0x12,0x08	@ 00074af8 data
.org 0x74afc
	.byte 0x00,0x4b,0x07,0x08	@ 00074afc data

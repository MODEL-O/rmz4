@ FUN_08098fb0  entry 0x08098fb0  size 140
.thumb
.org 0x98fb0
FUN_08098fb0:
	push {r4, r5, lr}	@ 00098fb0 30b5
.org 0x98fb2
	sub sp, #8	@ 00098fb2 82b0
.org 0x98fb4
	adds r4, r0, #0	@ 00098fb4 041c
.org 0x98fb6
	ldrb r0, [r4, #14]	@ 00098fb6 a07b
.org 0x98fb8
	cmp r0, #0	@ 00098fb8 0028
.org 0x98fba
	bne.n 0x9902a	@ 00098fba 36d1
.org 0x98fbc
	adds r0, r4, #0	@ 00098fbc 201c
.org 0x98fbe
	adds r0, #189	@ 00098fbe bd30
.org 0x98fc0
	ldrb r0, [r0, #0]	@ 00098fc0 0078
.org 0x98fc2
	cmp r0, #0	@ 00098fc2 0028
.org 0x98fc4
	beq.n 0x98fd0	@ 00098fc4 04d0
.org 0x98fc6
	movs r0, #2	@ 00098fc6 0220
.org 0x98fc8
	strb r0, [r4, #13]	@ 00098fc8 6073
.org 0x98fca
	adds r5, r4, #0	@ 00098fca 251c
.org 0x98fcc
	adds r5, #140	@ 00098fcc 8c35
.org 0x98fce
	b.n 0x9900e	@ 00098fce 1ee0
.org 0x98fd0
	adds r1, r4, #0	@ 00098fd0 211c
.org 0x98fd2
	adds r1, #140	@ 00098fd2 8c31
.org 0x98fd4
	ldr r2, [r1, #0]	@ 00098fd4 0a68
.org 0x98fd6
	movs r0, #128	@ 00098fd6 8020
.org 0x98fd8
	lsls r0, r0, #9	@ 00098fd8 4002
.org 0x98fda
	ands r2, r0	@ 00098fda 0240
.org 0x98fdc
	adds r5, r1, #0	@ 00098fdc 0d1c
.org 0x98fde
	cmp r2, #0	@ 00098fde 002a
.org 0x98fe0
	beq.n 0x9900c	@ 00098fe0 14d0
.org 0x98fe2
	ldr r0, [r4, #84]	@ 00098fe2 606d
.org 0x98fe4
	str r0, [sp, #0]	@ 00098fe4 0090
.org 0x98fe6
	ldr r0, [r4, #88]	@ 00098fe6 a06d
.org 0x98fe8
	ldr r1, [pc, #28]	@ 00098fe8 0749
.org 0x98fea
	adds r0, r0, r1	@ 00098fea 4018
.org 0x98fec
	str r0, [sp, #4]	@ 00098fec 0190
.org 0x98fee
	movs r2, #128	@ 00098fee 8022
.org 0x98ff0
	lsls r2, r2, #2	@ 00098ff0 9200
.org 0x98ff2
	adds r0, r4, #0	@ 00098ff2 201c
.org 0x98ff4
	adds r0, #188	@ 00098ff4 bc30
.org 0x98ff6
	ldrb r3, [r0, #0]	@ 00098ff6 0378
.org 0x98ff8
	movs r0, #0	@ 00098ff8 0020
.org 0x98ffa
	mov r1, sp	@ 00098ffa 6946
.org 0x98ffc
	bl 0xd0dc4	@ 00098ffc 37f0e2fe
.org 0x99000
	movs r0, #1	@ 00099000 0120
.org 0x99002
	strb r0, [r4, #13]	@ 00099002 6073
.org 0x99004
	b.n 0x9900e	@ 00099004 03e0
.org 0x99006
	.byte 0x00	@ 00099006 data
.org 0x99007
	.byte 0x00	@ 00099007 data
.org 0x99008
	.byte 0x00,0xec,0xff,0xff	@ 00099008 data
.org 0x9900c
	strb r2, [r4, #13]	@ 0009900c 6273
.org 0x9900e
	movs r1, #0	@ 0009900e 0021
.org 0x99010
	str r1, [r5, #0]	@ 00099010 2960
.org 0x99012
	adds r0, r4, #0	@ 00099012 201c
.org 0x99014
	adds r0, #144	@ 00099014 9030
.org 0x99016
	str r1, [r0, #0]	@ 00099016 0160
.org 0x99018
	adds r0, #4	@ 00099018 0430
.org 0x9901a
	strb r1, [r0, #0]	@ 0009901a 0170
.org 0x9901c
	ldrb r1, [r4, #10]	@ 0009901c a17a
.org 0x9901e
	movs r0, #251	@ 0009901e fb20
.org 0x99020
	ands r0, r1	@ 00099020 0840
.org 0x99022
	strb r0, [r4, #10]	@ 00099022 a072
.org 0x99024
	ldrb r0, [r4, #14]	@ 00099024 a07b
.org 0x99026
	adds r0, #1	@ 00099026 0130
.org 0x99028
	strb r0, [r4, #14]	@ 00099028 a073
.org 0x9902a
	ldr r0, [pc, #24]	@ 0009902a 0648
.org 0x9902c
	ldrb r1, [r4, #13]	@ 0009902c 617b
.org 0x9902e
	lsls r1, r1, #2	@ 0009902e 8900
.org 0x99030
	adds r1, r1, r0	@ 00099030 0918
.org 0x99032
	ldr r1, [r1, #0]	@ 00099032 0968
.org 0x99034
	adds r0, r4, #0	@ 00099034 201c
.org 0x99036
	bl 0x128f80	@ 00099036 8ff0a3ff
.org 0x9903a
	add sp, #8	@ 0009903a 02b0

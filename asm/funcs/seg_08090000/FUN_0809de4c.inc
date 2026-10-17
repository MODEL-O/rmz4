@ FUN_0809de4c  entry 0x0809de4c  size 136
.thumb
.org 0x9de4c
FUN_0809de4c:
	push {r4, lr}	@ 0009de4c 10b5
.org 0x9de4e
	adds r4, r0, #0	@ 0009de4e 041c
.org 0x9de50
	ldrb r0, [r4, #14]	@ 0009de50 a07b
.org 0x9de52
	cmp r0, #0	@ 0009de52 0028
.org 0x9de54
	bne.n 0x9de66	@ 0009de54 07d1
.org 0x9de56
	movs r1, #220	@ 0009de56 dc21
.org 0x9de58
	lsls r1, r1, #7	@ 0009de58 c901
.org 0x9de5a
	adds r0, r4, #0	@ 0009de5a 201c
.org 0x9de5c
	bl 0x1cf00	@ 0009de5c 7ff750f8
.org 0x9de60
	ldrb r0, [r4, #14]	@ 0009de60 a07b
.org 0x9de62
	adds r0, #1	@ 0009de62 0130
.org 0x9de64
	strb r0, [r4, #14]	@ 0009de64 a073
.org 0x9de66
	ldrb r0, [r4, #18]	@ 0009de66 a07c
.org 0x9de68
	adds r1, r0, #0	@ 0009de68 011c
.org 0x9de6a
	cmp r1, #0	@ 0009de6a 0029
.org 0x9de6c
	bne.n 0x9de76	@ 0009de6c 03d1
.org 0x9de6e
	ldrb r0, [r4, #15]	@ 0009de6e e07b
.org 0x9de70
	strb r0, [r4, #13]	@ 0009de70 6073
.org 0x9de72
	strb r1, [r4, #14]	@ 0009de72 a173
.org 0x9de74
	b.n 0x9dece	@ 0009de74 2be0
.org 0x9de76
	subs r0, #1	@ 0009de76 0138
.org 0x9de78
	strb r0, [r4, #18]	@ 0009de78 a074
.org 0x9de7a
	adds r0, r4, #0	@ 0009de7a 201c
.org 0x9de7c
	adds r0, #189	@ 0009de7c bd30
.org 0x9de7e
	ldrb r0, [r0, #0]	@ 0009de7e 0078
.org 0x9de80
	cmp r0, #0	@ 0009de80 0028
.org 0x9de82
	bne.n 0x9dece	@ 0009de82 24d1
.org 0x9de84
	adds r0, r4, #0	@ 0009de84 201c
.org 0x9de86
	bl 0x9e124	@ 0009de86 00f04df9
.org 0x9de8a
	lsls r0, r0, #24	@ 0009de8a 0006
.org 0x9de8c
	lsrs r0, r0, #24	@ 0009de8c 000e
.org 0x9de8e
	cmp r0, #1	@ 0009de8e 0128
.org 0x9de90
	beq.n 0x9dece	@ 0009de90 1dd0
.org 0x9de92
	ldrb r0, [r4, #18]	@ 0009de92 a07c
.org 0x9de94
	cmp r0, #25	@ 0009de94 1928
.org 0x9de96
	bne.n 0x9dece	@ 0009de96 1ad1
.org 0x9de98
	ldrb r2, [r4, #10]	@ 0009de98 a27a
.org 0x9de9a
	lsrs r0, r2, #4	@ 0009de9a 1009
.org 0x9de9c
	movs r1, #1	@ 0009de9c 0121
.org 0x9de9e
	bics r1, r0	@ 0009de9e 8143
.org 0x9dea0
	cmp r1, #0	@ 0009dea0 0029
.org 0x9dea2
	beq.n 0x9deaa	@ 0009dea2 02d0
.org 0x9dea4
	movs r0, #16	@ 0009dea4 1020
.org 0x9dea6
	orrs r0, r2	@ 0009dea6 1043
.org 0x9dea8
	b.n 0x9deae	@ 0009dea8 01e0
.org 0x9deaa
	movs r0, #239	@ 0009deaa ef20
.org 0x9deac
	ands r0, r2	@ 0009deac 1040
.org 0x9deae
	strb r0, [r4, #10]	@ 0009deae a072
.org 0x9deb0
	adds r0, r4, #0	@ 0009deb0 201c
.org 0x9deb2
	adds r0, #76	@ 0009deb2 4c30
.org 0x9deb4
	strb r1, [r0, #0]	@ 0009deb4 0170
.org 0x9deb6
	adds r3, r4, #0	@ 0009deb6 231c
.org 0x9deb8
	adds r3, #74	@ 0009deb8 4a33
.org 0x9deba
	lsls r1, r1, #4	@ 0009deba 0901
.org 0x9debc
	ldrb r2, [r3, #0]	@ 0009debc 1a78
.org 0x9debe
	movs r0, #17	@ 0009debe 1120
.org 0x9dec0
	negs r0, r0	@ 0009dec0 4042
.org 0x9dec2
	ands r0, r2	@ 0009dec2 1040
.org 0x9dec4
	orrs r0, r1	@ 0009dec4 0843
.org 0x9dec6
	strb r0, [r3, #0]	@ 0009dec6 1870
.org 0x9dec8
	adds r0, r4, #0	@ 0009dec8 201c
.org 0x9deca
	bl 0x9e1d0	@ 0009deca 00f081f9
.org 0x9dece
	pop {r4}	@ 0009dece 10bc
.org 0x9ded0
	pop {r0}	@ 0009ded0 01bc
.org 0x9ded2
	bx r0	@ 0009ded2 0047

@ FUN_08057fcc  entry 0x08057fcc  size 110
.thumb
.org 0x57fcc
FUN_08057fcc:
	push {r4, lr}	@ 00057fcc 10b5
.org 0x57fce
	adds r4, r0, #0	@ 00057fce 041c
.org 0x57fd0
	ldrb r0, [r4, #15]	@ 00057fd0 e07b
.org 0x57fd2
	cmp r0, #0	@ 00057fd2 0028
.org 0x57fd4
	bne.n 0x57fe6	@ 00057fd4 07d1
.org 0x57fd6
	movs r1, #160	@ 00057fd6 a021
.org 0x57fd8
	lsls r1, r1, #8	@ 00057fd8 0902
.org 0x57fda
	adds r0, r4, #0	@ 00057fda 201c
.org 0x57fdc
	bl 0x1cf00	@ 00057fdc c4f790ff
.org 0x57fe0
	ldrb r0, [r4, #15]	@ 00057fe0 e07b
.org 0x57fe2
	adds r0, #1	@ 00057fe2 0130
.org 0x57fe4
	strb r0, [r4, #15]	@ 00057fe4 e073
.org 0x57fe6
	adds r0, r4, #0	@ 00057fe6 201c
.org 0x57fe8
	bl 0x1cff0	@ 00057fe8 c5f702f8
.org 0x57fec
	adds r0, r4, #0	@ 00057fec 201c
.org 0x57fee
	adds r0, #116	@ 00057fee 7430
.org 0x57ff0
	ldr r3, [pc, #72]	@ 00057ff0 124b
.org 0x57ff2
	ldrb r1, [r4, #30]	@ 00057ff2 a17f
.org 0x57ff4
	lsls r1, r1, #8	@ 00057ff4 0902
.org 0x57ff6
	adds r2, r4, #0	@ 00057ff6 221c
.org 0x57ff8
	adds r2, #112	@ 00057ff8 7032
.org 0x57ffa
	ldrb r2, [r2, #0]	@ 00057ffa 1278
.org 0x57ffc
	orrs r1, r2	@ 00057ffc 1143
.org 0x57ffe
	ldr r2, [pc, #64]	@ 00057ffe 104a
.org 0x58000
	adds r1, r1, r2	@ 00058000 8918
.org 0x58002
	lsls r1, r1, #2	@ 00058002 8900
.org 0x58004
	adds r1, r1, r3	@ 00058004 c918
.org 0x58006
	adds r2, r4, #0	@ 00058006 221c
.org 0x58008
	adds r2, #113	@ 00058008 7132
.org 0x5800a
	ldrb r2, [r2, #0]	@ 0005800a 1278
.org 0x5800c
	lsls r2, r2, #24	@ 0005800c 1206
.org 0x5800e
	asrs r2, r2, #24	@ 0005800e 1216
.org 0x58010
	ldr r1, [r1, #0]	@ 00058010 0968
.org 0x58012
	lsls r2, r2, #2	@ 00058012 9200
.org 0x58014
	adds r2, r2, r1	@ 00058014 5218
.org 0x58016
	ldr r1, [r2, #0]	@ 00058016 1168
.org 0x58018
	ldrb r2, [r1, #0]	@ 00058018 0a78
.org 0x5801a
	lsls r1, r2, #1	@ 0005801a 5100
.org 0x5801c
	adds r1, r1, r2	@ 0005801c 8918
.org 0x5801e
	lsls r1, r1, #3	@ 0005801e c900
.org 0x58020
	ldr r2, [pc, #32]	@ 00058020 084a
.org 0x58022
	adds r1, r1, r2	@ 00058022 8918
.org 0x58024
	bl 0x5784	@ 00058024 adf7aefb
.org 0x58028
	ldr r1, [r4, #44]	@ 00058028 e16a
.org 0x5802a
	cmp r1, #0	@ 0005802a 0029
.org 0x5802c
	bne.n 0x58034	@ 0005802c 02d1
.org 0x5802e
	movs r0, #2	@ 0005802e 0220
.org 0x58030
	strb r0, [r4, #14]	@ 00058030 a073
.org 0x58032
	strb r1, [r4, #15]	@ 00058032 e173
.org 0x58034
	pop {r4}	@ 00058034 10bc
.org 0x58036
	pop {r0}	@ 00058036 01bc
.org 0x58038
	bx r0	@ 00058038 0047

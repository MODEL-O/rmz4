@ FUN_080a1f98  entry 0x080a1f98  size 144
.thumb
.org 0xa1f98
FUN_080a1f98:
	push {r4, lr}	@ 000a1f98 10b5
.org 0xa1f9a
	adds r4, r0, #0	@ 000a1f9a 041c
.org 0xa1f9c
	adds r0, #115	@ 000a1f9c 7330
.org 0xa1f9e
	ldrb r0, [r0, #0]	@ 000a1f9e 0078
.org 0xa1fa0
	cmp r0, #3	@ 000a1fa0 0328
.org 0xa1fa2
	beq.n 0xa1faa	@ 000a1fa2 02d0
.org 0xa1fa4
	ldrb r0, [r4, #18]	@ 000a1fa4 a07c
.org 0xa1fa6
	cmp r0, #0	@ 000a1fa6 0028
.org 0xa1fa8
	bne.n 0xa1ffc	@ 000a1fa8 28d1
.org 0xa1faa
	ldrb r0, [r4, #14]	@ 000a1faa a07b
.org 0xa1fac
	cmp r0, #1	@ 000a1fac 0128
.org 0xa1fae
	bhi.n 0xa1fe0	@ 000a1fae 17d8
.org 0xa1fb0
	ldr r3, [pc, #40]	@ 000a1fb0 0a4b
.org 0xa1fb2
	adds r0, r4, #0	@ 000a1fb2 201c
.org 0xa1fb4
	adds r0, #180	@ 000a1fb4 b430
.org 0xa1fb6
	ldrb r0, [r0, #0]	@ 000a1fb6 0078
.org 0xa1fb8
	lsls r0, r0, #1	@ 000a1fb8 4000
.org 0xa1fba
	ldrb r1, [r4, #14]	@ 000a1fba a17b
.org 0xa1fbc
	ldrb r2, [r4, #16]	@ 000a1fbc 227c
.org 0xa1fbe
	adds r1, r1, r2	@ 000a1fbe 8918
.org 0xa1fc0
	lsls r1, r1, #2	@ 000a1fc0 8900
.org 0xa1fc2
	adds r0, r0, r1	@ 000a1fc2 4018
.org 0xa1fc4
	adds r0, r0, r3	@ 000a1fc4 c018
.org 0xa1fc6
	ldrh r1, [r0, #0]	@ 000a1fc6 0188
.org 0xa1fc8
	adds r0, r4, #0	@ 000a1fc8 201c
.org 0xa1fca
	bl 0x1cf00	@ 000a1fca 7af799ff
.org 0xa1fce
	movs r0, #48	@ 000a1fce 3020
.org 0xa1fd0
	strb r0, [r4, #18]	@ 000a1fd0 a074
.org 0xa1fd2
	ldrb r0, [r4, #14]	@ 000a1fd2 a07b
.org 0xa1fd4
	adds r0, #1	@ 000a1fd4 0130
.org 0xa1fd6
	strb r0, [r4, #14]	@ 000a1fd6 a073
.org 0xa1fd8
	b.n 0xa1ffc	@ 000a1fd8 10e0
.org 0xa1fda
	.byte 0x00	@ 000a1fda data
.org 0xa1fdb
	.byte 0x00	@ 000a1fdb data
.org 0xa1fdc
	.byte 0xb4,0x1b,0x86,0x08	@ 000a1fdc data
.org 0xa1fe0
	movs r2, #0	@ 000a1fe0 0022
.org 0xa1fe2
	strb r2, [r4, #13]	@ 000a1fe2 6273
.org 0xa1fe4
	strb r2, [r4, #14]	@ 000a1fe4 a273
.org 0xa1fe6
	adds r1, r4, #0	@ 000a1fe6 211c
.org 0xa1fe8
	adds r1, #180	@ 000a1fe8 b431
.org 0xa1fea
	ldrb r0, [r1, #0]	@ 000a1fea 0878
.org 0xa1fec
	cmp r0, #0	@ 000a1fec 0028
.org 0xa1fee
	bne.n 0xa1ff8	@ 000a1fee 03d1
.org 0xa1ff0
	ldrb r0, [r4, #19]	@ 000a1ff0 e07c
.org 0xa1ff2
	adds r0, #1	@ 000a1ff2 0130
.org 0xa1ff4
	strb r0, [r4, #19]	@ 000a1ff4 e074
.org 0xa1ff6
	b.n 0xa2028	@ 000a1ff6 17e0
.org 0xa1ff8
	strb r2, [r1, #0]	@ 000a1ff8 0a70
.org 0xa1ffa
	b.n 0xa2028	@ 000a1ffa 15e0
.org 0xa1ffc
	ldrb r0, [r4, #14]	@ 000a1ffc a07b
.org 0xa1ffe
	cmp r0, #1	@ 000a1ffe 0128
.org 0xa2000
	bne.n 0xa2022	@ 000a2000 0fd1
.org 0xa2002
	ldrb r0, [r4, #18]	@ 000a2002 a07c
.org 0xa2004
	cmp r0, #0	@ 000a2004 0028
.org 0xa2006
	beq.n 0xa2022	@ 000a2006 0cd0
.org 0xa2008
	adds r1, r4, #0	@ 000a2008 211c
.org 0xa200a
	adds r1, #84	@ 000a200a 5431
.org 0xa200c
	movs r0, #2	@ 000a200c 0220
.org 0xa200e
	bl 0x1fe64	@ 000a200e 7df729ff
.org 0xa2012
	ldrb r1, [r4, #18]	@ 000a2012 a17c
.org 0xa2014
	movs r0, #3	@ 000a2014 0320
.org 0xa2016
	ands r0, r1	@ 000a2016 0840
.org 0xa2018
	cmp r0, #0	@ 000a2018 0028
.org 0xa201a
	bne.n 0xa2022	@ 000a201a 02d1
.org 0xa201c
	adds r0, r4, #0	@ 000a201c 201c
.org 0xa201e
	bl 0xa20b8	@ 000a201e 00f04bf8
.org 0xa2022
	ldrb r0, [r4, #18]	@ 000a2022 a07c
.org 0xa2024
	subs r0, #1	@ 000a2024 0138
.org 0xa2026
	strb r0, [r4, #18]	@ 000a2026 a074

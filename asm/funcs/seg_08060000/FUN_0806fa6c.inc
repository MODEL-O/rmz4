@ FUN_0806fa6c  entry 0x0806fa6c  size 272
.thumb
.org 0x6fa6c
FUN_0806fa6c:
	push {r4, r5, lr}	@ 0006fa6c 30b5
.org 0x6fa6e
	adds r4, r0, #0	@ 0006fa6e 041c
.org 0x6fa70
	ldrb r5, [r4, #14]	@ 0006fa70 a57b
.org 0x6fa72
	cmp r5, #0	@ 0006fa72 002d
.org 0x6fa74
	bne.n 0x6faca	@ 0006fa74 29d1
.org 0x6fa76
	movs r1, #141	@ 0006fa76 8d21
.org 0x6fa78
	lsls r1, r1, #8	@ 0006fa78 0902
.org 0x6fa7a
	bl 0x1cf00	@ 0006fa7a adf741fa
.org 0x6fa7e
	movs r1, #160	@ 0006fa7e a021
.org 0x6fa80
	lsls r1, r1, #2	@ 0006fa80 8900
.org 0x6fa82
	movs r0, #114	@ 0006fa82 7220
.org 0x6fa84
	bl 0x249c	@ 0006fa84 92f70afd
.org 0x6fa88
	movs r1, #168	@ 0006fa88 a821
.org 0x6fa8a
	lsls r1, r1, #2	@ 0006fa8a 8900
.org 0x6fa8c
	movs r0, #148	@ 0006fa8c 9420
.org 0x6fa8e
	bl 0x249c	@ 0006fa8e 92f705fd
.org 0x6fa92
	movs r0, #115	@ 0006fa92 7320
.org 0x6fa94
	movs r1, #64	@ 0006fa94 4021
.org 0x6fa96
	bl 0x249c	@ 0006fa96 92f701fd
.org 0x6fa9a
	movs r0, #219	@ 0006fa9a db20
.org 0x6fa9c
	movs r1, #0	@ 0006fa9c 0021
.org 0x6fa9e
	bl 0x249c	@ 0006fa9e 92f7fdfc
.org 0x6faa2
	movs r0, #114	@ 0006faa2 7220
.org 0x6faa4
	bl 0x25d8	@ 0006faa4 92f798fd
.org 0x6faa8
	movs r0, #148	@ 0006faa8 9420
.org 0x6faaa
	bl 0x25d8	@ 0006faaa 92f795fd
.org 0x6faae
	movs r0, #115	@ 0006faae 7320
.org 0x6fab0
	bl 0x25d8	@ 0006fab0 92f792fd
.org 0x6fab4
	movs r0, #219	@ 0006fab4 db20
.org 0x6fab6
	bl 0x25d8	@ 0006fab6 92f78ffd
.org 0x6faba
	adds r1, r4, #0	@ 0006faba 211c
.org 0x6fabc
	adds r1, #180	@ 0006fabc b431
.org 0x6fabe
	movs r0, #1	@ 0006fabe 0120
.org 0x6fac0
	strb r0, [r1, #25]	@ 0006fac0 4876
.org 0x6fac2
	strb r5, [r4, #15]	@ 0006fac2 e573
.org 0x6fac4
	ldrb r0, [r4, #14]	@ 0006fac4 a07b
.org 0x6fac6
	adds r0, #1	@ 0006fac6 0130
.org 0x6fac8
	strb r0, [r4, #14]	@ 0006fac8 a073
.org 0x6faca
	adds r0, r4, #0	@ 0006faca 201c
.org 0x6facc
	bl 0x1cff0	@ 0006facc adf790fa
.org 0x6fad0
	ldrb r0, [r4, #15]	@ 0006fad0 e07b
.org 0x6fad2
	cmp r0, #1	@ 0006fad2 0128
.org 0x6fad4
	beq.n 0x6fb04	@ 0006fad4 16d0
.org 0x6fad6
	cmp r0, #1	@ 0006fad6 0128
.org 0x6fad8
	bgt.n 0x6fae0	@ 0006fad8 02dc
.org 0x6fada
	cmp r0, #0	@ 0006fada 0028
.org 0x6fadc
	beq.n 0x6faea	@ 0006fadc 05d0
.org 0x6fade
	b.n 0x6fb7a	@ 0006fade 4ce0
.org 0x6fae0
	cmp r0, #2	@ 0006fae0 0228
.org 0x6fae2
	beq.n 0x6fb18	@ 0006fae2 19d0
.org 0x6fae4
	cmp r0, #3	@ 0006fae4 0328
.org 0x6fae6
	beq.n 0x6fb66	@ 0006fae6 3ed0
.org 0x6fae8
	b.n 0x6fb7a	@ 0006fae8 47e0
.org 0x6faea
	ldr r0, [pc, #20]	@ 0006faea 0548
.org 0x6faec
	ldr r0, [r0, #56]	@ 0006faec 806b
.org 0x6faee
	movs r1, #128	@ 0006faee 8021
.org 0x6faf0
	lsls r1, r1, #4	@ 0006faf0 0901
.org 0x6faf2
	adds r0, r0, r1	@ 0006faf2 4018
.org 0x6faf4
	ldr r1, [r4, #84]	@ 0006faf4 616d
.org 0x6faf6
	cmp r1, r0	@ 0006faf6 8142
.org 0x6faf8
	bge.n 0x6fb7a	@ 0006faf8 3fda
.org 0x6fafa
	movs r0, #32	@ 0006fafa 2020
.org 0x6fafc
	strb r0, [r4, #18]	@ 0006fafc a074
.org 0x6fafe
	b.n 0x6fb5e	@ 0006fafe 2ee0
.org 0x6fb00
	.byte 0xf8,0xe9,0x02,0x02	@ 0006fb00 data
.org 0x6fb04
	ldrb r0, [r4, #18]	@ 0006fb04 a07c
.org 0x6fb06
	subs r0, #1	@ 0006fb06 0138
.org 0x6fb08
	strb r0, [r4, #18]	@ 0006fb08 a074
.org 0x6fb0a
	lsls r0, r0, #24	@ 0006fb0a 0006
.org 0x6fb0c
	lsrs r0, r0, #24	@ 0006fb0c 000e
.org 0x6fb0e
	cmp r0, #255	@ 0006fb0e ff28
.org 0x6fb10
	bne.n 0x6fb7a	@ 0006fb10 33d1
.org 0x6fb12
	movs r0, #128	@ 0006fb12 8020
.org 0x6fb14
	strb r0, [r4, #18]	@ 0006fb14 a074
.org 0x6fb16
	b.n 0x6fb5e	@ 0006fb16 22e0
.org 0x6fb18
	movs r0, #114	@ 0006fb18 7220
.org 0x6fb1a
	bl 0x25d8	@ 0006fb1a 92f75dfd
.org 0x6fb1e
	movs r0, #148	@ 0006fb1e 9420
.org 0x6fb20
	bl 0x25d8	@ 0006fb20 92f75afd
.org 0x6fb24
	movs r0, #115	@ 0006fb24 7320
.org 0x6fb26
	bl 0x25d8	@ 0006fb26 92f757fd
.org 0x6fb2a
	movs r0, #219	@ 0006fb2a db20
.org 0x6fb2c
	bl 0x25d8	@ 0006fb2c 92f754fd
.org 0x6fb30
	ldrb r0, [r4, #18]	@ 0006fb30 a07c
.org 0x6fb32
	subs r0, #1	@ 0006fb32 0138
.org 0x6fb34
	strb r0, [r4, #18]	@ 0006fb34 a074
.org 0x6fb36
	lsls r0, r0, #24	@ 0006fb36 0006
.org 0x6fb38
	lsrs r0, r0, #24	@ 0006fb38 000e
.org 0x6fb3a
	cmp r0, #255	@ 0006fb3a ff28
.org 0x6fb3c
	bne.n 0x6fb7a	@ 0006fb3c 1dd1
.org 0x6fb3e
	movs r0, #114	@ 0006fb3e 7220
.org 0x6fb40
	bl 0x2624	@ 0006fb40 92f770fd
.org 0x6fb44
	movs r0, #148	@ 0006fb44 9420
.org 0x6fb46
	bl 0x2624	@ 0006fb46 92f76dfd
.org 0x6fb4a
	movs r0, #115	@ 0006fb4a 7320
.org 0x6fb4c
	bl 0x2624	@ 0006fb4c 92f76afd
.org 0x6fb50
	movs r0, #219	@ 0006fb50 db20
.org 0x6fb52
	bl 0x2624	@ 0006fb52 92f767fd
.org 0x6fb56
	adds r1, r4, #0	@ 0006fb56 211c
.org 0x6fb58
	adds r1, #180	@ 0006fb58 b431
.org 0x6fb5a
	movs r0, #0	@ 0006fb5a 0020
.org 0x6fb5c
	strb r0, [r1, #25]	@ 0006fb5c 4876
.org 0x6fb5e
	ldrb r0, [r4, #15]	@ 0006fb5e e07b
.org 0x6fb60
	adds r0, #1	@ 0006fb60 0130
.org 0x6fb62
	strb r0, [r4, #15]	@ 0006fb62 e073
.org 0x6fb64
	b.n 0x6fb7a	@ 0006fb64 09e0
.org 0x6fb66
	ldr r0, [r4, #24]	@ 0006fb66 a069
.org 0x6fb68
	ldrb r1, [r0, #9]	@ 0006fb68 417a
.org 0x6fb6a
	movs r2, #1	@ 0006fb6a 0122
.org 0x6fb6c
	adds r0, r2, #0	@ 0006fb6c 101c
.org 0x6fb6e
	ands r0, r1	@ 0006fb6e 0840
.org 0x6fb70
	cmp r0, #0	@ 0006fb70 0028
.org 0x6fb72
	beq.n 0x6fb7a	@ 0006fb72 02d0
.org 0x6fb74
	movs r0, #0	@ 0006fb74 0020
.org 0x6fb76
	strb r2, [r4, #13]	@ 0006fb76 6273
.org 0x6fb78
	strb r0, [r4, #14]	@ 0006fb78 a073
.org 0x6fb7a
	pop {r4, r5}	@ 0006fb7a 30bc

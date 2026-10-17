@ FUN_0809bc54  entry 0x0809bc54  size 240
.thumb
.org 0x9bc54
FUN_0809bc54:
	push {r4, r5, r6, r7, lr}	@ 0009bc54 f0b5
.org 0x9bc56
	adds r6, r0, #0	@ 0009bc56 061c
.org 0x9bc58
	ldr r0, [r6, #40]	@ 0009bc58 b06a
.org 0x9bc5a
	ldr r7, [r0, #40]	@ 0009bc5a 876a
.org 0x9bc5c
	ldrb r5, [r6, #17]	@ 0009bc5c 757c
.org 0x9bc5e
	ldr r1, [pc, #84]	@ 0009bc5e 1549
.org 0x9bc60
	ldrb r0, [r6, #9]	@ 0009bc60 707a
.org 0x9bc62
	lsls r0, r0, #2	@ 0009bc62 8000
.org 0x9bc64
	adds r0, r0, r1	@ 0009bc64 4018
.org 0x9bc66
	movs r2, #1	@ 0009bc66 0122
.org 0x9bc68
	str r2, [r6, #12]	@ 0009bc68 f260
.org 0x9bc6a
	ldr r0, [r0, #0]	@ 0009bc6a 0068
.org 0x9bc6c
	ldr r0, [r0, #4]	@ 0009bc6c 4068
.org 0x9bc6e
	str r0, [r6, #20]	@ 0009bc6e 7061
.org 0x9bc70
	ldrb r1, [r6, #10]	@ 0009bc70 b17a
.org 0x9bc72
	movs r0, #1	@ 0009bc72 0120
.org 0x9bc74
	movs r4, #0	@ 0009bc74 0024
.org 0x9bc76
	orrs r0, r1	@ 0009bc76 0843
.org 0x9bc78
	movs r1, #2	@ 0009bc78 0221
.org 0x9bc7a
	orrs r0, r1	@ 0009bc7a 0843
.org 0x9bc7c
	strb r0, [r6, #10]	@ 0009bc7c b072
.org 0x9bc7e
	adds r0, r6, #0	@ 0009bc7e 301c
.org 0x9bc80
	adds r0, #180	@ 0009bc80 b430
.org 0x9bc82
	strb r2, [r0, #0]	@ 0009bc82 0270
.org 0x9bc84
	adds r1, r6, #0	@ 0009bc84 311c
.org 0x9bc86
	adds r1, #182	@ 0009bc86 b631
.org 0x9bc88
	movs r0, #255	@ 0009bc88 ff20
.org 0x9bc8a
	strb r0, [r1, #0]	@ 0009bc8a 0870
.org 0x9bc8c
	adds r0, r6, #0	@ 0009bc8c 301c
.org 0x9bc8e
	bl 0x1cc9c	@ 0009bc8e 81f705f8
.org 0x9bc92
	adds r0, r6, #0	@ 0009bc92 301c
.org 0x9bc94
	bl 0x1ceec	@ 0009bc94 81f72af9
.org 0x9bc98
	adds r1, r6, #0	@ 0009bc98 311c
.org 0x9bc9a
	adds r1, #37	@ 0009bc9a 2531
.org 0x9bc9c
	movs r0, #25	@ 0009bc9c 1920
.org 0x9bc9e
	strb r0, [r1, #0]	@ 0009bc9e 0870
.org 0x9bca0
	ldr r0, [pc, #20]	@ 0009bca0 0548
.org 0x9bca2
	adds r0, r5, r0	@ 0009bca2 2818
.org 0x9bca4
	ldrb r2, [r0, #0]	@ 0009bca4 0278
.org 0x9bca6
	cmp r2, #0	@ 0009bca6 002a
.org 0x9bca8
	beq.n 0x9bcbc	@ 0009bca8 08d0
.org 0x9bcaa
	ldrb r0, [r6, #10]	@ 0009bcaa b07a
.org 0x9bcac
	movs r1, #16	@ 0009bcac 1021
.org 0x9bcae
	orrs r0, r1	@ 0009bcae 0843
.org 0x9bcb0
	b.n 0x9bcc2	@ 0009bcb0 07e0
.org 0x9bcb2
	.byte 0x00	@ 0009bcb2 data
.org 0x9bcb3
	.byte 0x00	@ 0009bcb3 data
.org 0x9bcb4
	.byte 0x40,0xdb,0x85,0x08	@ 0009bcb4 data
.org 0x9bcb8
	.byte 0x68,0x13,0x86,0x08	@ 0009bcb8 data
.org 0x9bcbc
	ldrb r1, [r6, #10]	@ 0009bcbc b17a
.org 0x9bcbe
	movs r0, #239	@ 0009bcbe ef20
.org 0x9bcc0
	ands r0, r1	@ 0009bcc0 0840
.org 0x9bcc2
	strb r0, [r6, #10]	@ 0009bcc2 b072
.org 0x9bcc4
	movs r1, #1	@ 0009bcc4 0121
.org 0x9bcc6
	ands r1, r2	@ 0009bcc6 1140
.org 0x9bcc8
	adds r0, r6, #0	@ 0009bcc8 301c
.org 0x9bcca
	adds r0, #76	@ 0009bcca 4c30
.org 0x9bccc
	strb r1, [r0, #0]	@ 0009bccc 0170
.org 0x9bcce
	adds r3, r6, #0	@ 0009bcce 331c
.org 0x9bcd0
	adds r3, #74	@ 0009bcd0 4a33
.org 0x9bcd2
	lsls r1, r1, #4	@ 0009bcd2 0901
.org 0x9bcd4
	ldrb r2, [r3, #0]	@ 0009bcd4 1a78
.org 0x9bcd6
	movs r0, #17	@ 0009bcd6 1120
.org 0x9bcd8
	negs r0, r0	@ 0009bcd8 4042
.org 0x9bcda
	ands r0, r2	@ 0009bcda 1040
.org 0x9bcdc
	orrs r0, r1	@ 0009bcdc 0843
.org 0x9bcde
	strb r0, [r3, #0]	@ 0009bcde 1870
.org 0x9bce0
	ldr r0, [pc, #16]	@ 0009bce0 0448
.org 0x9bce2
	adds r0, r5, r0	@ 0009bce2 2818
.org 0x9bce4
	ldrb r2, [r0, #0]	@ 0009bce4 0278
.org 0x9bce6
	cmp r2, #0	@ 0009bce6 002a
.org 0x9bce8
	beq.n 0x9bcf8	@ 0009bce8 06d0
.org 0x9bcea
	ldrb r0, [r6, #10]	@ 0009bcea b07a
.org 0x9bcec
	movs r1, #32	@ 0009bcec 2021
.org 0x9bcee
	orrs r0, r1	@ 0009bcee 0843
.org 0x9bcf0
	b.n 0x9bcfe	@ 0009bcf0 05e0
.org 0x9bcf2
	.byte 0x00	@ 0009bcf2 data
.org 0x9bcf3
	.byte 0x00	@ 0009bcf3 data
.org 0x9bcf4
	.byte 0x6c,0x13,0x86,0x08	@ 0009bcf4 data
.org 0x9bcf8
	ldrb r1, [r6, #10]	@ 0009bcf8 b17a
.org 0x9bcfa
	movs r0, #223	@ 0009bcfa df20
.org 0x9bcfc
	ands r0, r1	@ 0009bcfc 0840
.org 0x9bcfe
	strb r0, [r6, #10]	@ 0009bcfe b072
.org 0x9bd00
	movs r1, #1	@ 0009bd00 0121
.org 0x9bd02
	ands r1, r2	@ 0009bd02 1140
.org 0x9bd04
	adds r0, r6, #0	@ 0009bd04 301c
.org 0x9bd06
	adds r0, #77	@ 0009bd06 4d30
.org 0x9bd08
	movs r5, #0	@ 0009bd08 0025
.org 0x9bd0a
	strb r1, [r0, #0]	@ 0009bd0a 0170
.org 0x9bd0c
	lsls r1, r1, #5	@ 0009bd0c 4901
.org 0x9bd0e
	ldrb r2, [r3, #0]	@ 0009bd0e 1a78
.org 0x9bd10
	movs r0, #33	@ 0009bd10 2120
.org 0x9bd12
	negs r0, r0	@ 0009bd12 4042
.org 0x9bd14
	ands r0, r2	@ 0009bd14 1040
.org 0x9bd16
	orrs r0, r1	@ 0009bd16 0843
.org 0x9bd18
	strb r0, [r3, #0]	@ 0009bd18 1870
.org 0x9bd1a
	ldrb r0, [r6, #11]	@ 0009bd1a f07a
.org 0x9bd1c
	movs r1, #16	@ 0009bd1c 1021
.org 0x9bd1e
	orrs r0, r1	@ 0009bd1e 0843
.org 0x9bd20
	strb r0, [r6, #11]	@ 0009bd20 f072
.org 0x9bd22
	ldrb r0, [r7, #28]	@ 0009bd22 387f
.org 0x9bd24
	strb r0, [r6, #29]	@ 0009bd24 7077
.org 0x9bd26
	ldrb r1, [r6, #10]	@ 0009bd26 b17a
.org 0x9bd28
	movs r0, #4	@ 0009bd28 0420
.org 0x9bd2a
	orrs r0, r1	@ 0009bd2a 0843
.org 0x9bd2c
	strb r0, [r6, #10]	@ 0009bd2c b072
.org 0x9bd2e
	adds r4, r6, #0	@ 0009bd2e 341c
.org 0x9bd30
	adds r4, #116	@ 0009bd30 7434
.org 0x9bd32
	ldr r0, [pc, #32]	@ 0009bd32 0848
.org 0x9bd34
	ldr r0, [r0, #0]	@ 0009bd34 0068
.org 0x9bd36
	ldr r1, [r0, #0]	@ 0009bd36 0168
.org 0x9bd38
	adds r2, r6, #0	@ 0009bd38 321c
.org 0x9bd3a
	adds r2, #84	@ 0009bd3a 5432
.org 0x9bd3c
	adds r0, r4, #0	@ 0009bd3c 201c
.org 0x9bd3e
	movs r3, #64	@ 0009bd3e 4023
.org 0x9bd40
	bl 0x5760	@ 0009bd40 69f70efd

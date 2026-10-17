@ FUN_08103ac4  entry 0x08103ac4  size 160
.thumb
.org 0x103ac4
FUN_08103ac4:
	push {r4, r5, r6, lr}	@ 00103ac4 70b5
.org 0x103ac6
	adds r6, r0, #0	@ 00103ac6 061c
.org 0x103ac8
	ldr r0, [r6, #84]	@ 00103ac8 706d
.org 0x103aca
	ldr r1, [r6, #88]	@ 00103aca b16d
.org 0x103acc
	bl 0x7020	@ 00103acc 03f7a8fa
.org 0x103ad0
	lsls r0, r0, #16	@ 00103ad0 0004
.org 0x103ad2
	lsrs r2, r0, #16	@ 00103ad2 020c
.org 0x103ad4
	cmp r2, #0	@ 00103ad4 002a
.org 0x103ad6
	bne.n 0x103b14	@ 00103ad6 1dd1
.org 0x103ad8
	ldrb r1, [r6, #10]	@ 00103ad8 b17a
.org 0x103ada
	movs r0, #254	@ 00103ada fe20
.org 0x103adc
	ands r0, r1	@ 00103adc 0840
.org 0x103ade
	movs r1, #253	@ 00103ade fd21
.org 0x103ae0
	ands r0, r1	@ 00103ae0 0840
.org 0x103ae2
	strb r0, [r6, #10]	@ 00103ae2 b072
.org 0x103ae4
	adds r0, r6, #0	@ 00103ae4 301c
.org 0x103ae6
	adds r0, #140	@ 00103ae6 8c30
.org 0x103ae8
	str r2, [r0, #0]	@ 00103ae8 0260
.org 0x103aea
	adds r0, #4	@ 00103aea 0430
.org 0x103aec
	str r2, [r0, #0]	@ 00103aec 0260
.org 0x103aee
	adds r0, #4	@ 00103aee 0430
.org 0x103af0
	strb r2, [r0, #0]	@ 00103af0 0270
.org 0x103af2
	ldrb r1, [r6, #10]	@ 00103af2 b17a
.org 0x103af4
	movs r0, #251	@ 00103af4 fb20
.org 0x103af6
	ands r0, r1	@ 00103af6 0840
.org 0x103af8
	strb r0, [r6, #10]	@ 00103af8 b072
.org 0x103afa
	ldr r1, [pc, #20]	@ 00103afa 0549
.org 0x103afc
	ldrb r0, [r6, #9]	@ 00103afc 707a
.org 0x103afe
	lsls r0, r0, #2	@ 00103afe 8000
.org 0x103b00
	adds r0, r0, r1	@ 00103b00 4018
.org 0x103b02
	movs r1, #3	@ 00103b02 0321
.org 0x103b04
	str r1, [r6, #12]	@ 00103b04 f160
.org 0x103b06
	ldr r0, [r0, #0]	@ 00103b06 0068
.org 0x103b08
	ldr r0, [r0, #12]	@ 00103b08 c068
.org 0x103b0a
	str r0, [r6, #20]	@ 00103b0a 7061
.org 0x103b0c
	b.n 0x103b64	@ 00103b0c 2ae0
.org 0x103b0e
	.byte 0x00	@ 00103b0e data
.org 0x103b0f
	.byte 0x00	@ 00103b0f data
.org 0x103b10
	.byte 0xfc,0x92,0x86,0x08	@ 00103b10 data
.org 0x103b14
	ldrb r1, [r6, #10]	@ 00103b14 b17a
.org 0x103b16
	movs r0, #4	@ 00103b16 0420
.org 0x103b18
	movs r5, #0	@ 00103b18 0025
.org 0x103b1a
	orrs r0, r1	@ 00103b1a 0843
.org 0x103b1c
	strb r0, [r6, #10]	@ 00103b1c b072
.org 0x103b1e
	adds r4, r6, #0	@ 00103b1e 341c
.org 0x103b20
	adds r4, #116	@ 00103b20 7434
.org 0x103b22
	ldr r1, [pc, #72]	@ 00103b22 1249
.org 0x103b24
	adds r2, r6, #0	@ 00103b24 321c
.org 0x103b26
	adds r2, #84	@ 00103b26 5432
.org 0x103b28
	adds r0, r4, #0	@ 00103b28 201c
.org 0x103b2a
	movs r3, #0	@ 00103b2a 0023
.org 0x103b2c
	bl 0x5760	@ 00103b2c 01f718fe
.org 0x103b30
	str r6, [r4, #44]	@ 00103b30 e662
.org 0x103b32
	str r5, [r4, #36]	@ 00103b32 6562
.org 0x103b34
	adds r0, r6, #0	@ 00103b34 301c
.org 0x103b36
	adds r0, #92	@ 00103b36 5c30
.org 0x103b38
	str r5, [r0, #4]	@ 00103b38 4560
.org 0x103b3a
	str r5, [r6, #92]	@ 00103b3a f565
.org 0x103b3c
	ldr r0, [r6, #84]	@ 00103b3c 706d
.org 0x103b3e
	movs r1, #128	@ 00103b3e 8021
.org 0x103b40
	lsls r1, r1, #4	@ 00103b40 0901
.org 0x103b42
	adds r0, r0, r1	@ 00103b42 4018
.org 0x103b44
	str r0, [r6, #84]	@ 00103b44 7065
.org 0x103b46
	ldr r0, [r6, #88]	@ 00103b46 b06d
.org 0x103b48
	adds r0, r0, r1	@ 00103b48 4018
.org 0x103b4a
	str r0, [r6, #88]	@ 00103b4a b065
.org 0x103b4c
	ldr r1, [pc, #32]	@ 00103b4c 0849
.org 0x103b4e
	ldrb r0, [r6, #9]	@ 00103b4e 707a
.org 0x103b50
	lsls r0, r0, #2	@ 00103b50 8000
.org 0x103b52
	adds r0, r0, r1	@ 00103b52 4018
.org 0x103b54
	movs r1, #1	@ 00103b54 0121
.org 0x103b56
	str r1, [r6, #12]	@ 00103b56 f160
.org 0x103b58
	ldr r0, [r0, #0]	@ 00103b58 0068
.org 0x103b5a
	ldr r0, [r0, #4]	@ 00103b5a 4068
.org 0x103b5c
	str r0, [r6, #20]	@ 00103b5c 7061
.org 0x103b5e
	adds r0, r6, #0	@ 00103b5e 301c
.org 0x103b60
	bl 0x103b74	@ 00103b60 00f008f8

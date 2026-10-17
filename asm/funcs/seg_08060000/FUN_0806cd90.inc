@ FUN_0806cd90  entry 0x0806cd90  size 148
.thumb
.org 0x6cd90
FUN_0806cd90:
	push {r4, r5, lr}	@ 0006cd90 30b5
.org 0x6cd92
	adds r4, r0, #0	@ 0006cd92 041c
.org 0x6cd94
	ldrb r5, [r4, #14]	@ 0006cd94 a57b
.org 0x6cd96
	cmp r5, #0	@ 0006cd96 002d
.org 0x6cd98
	bne.n 0x6cdb0	@ 0006cd98 0ad1
.org 0x6cd9a
	ldr r1, [pc, #104]	@ 0006cd9a 1a49
.org 0x6cd9c
	bl 0x1cf00	@ 0006cd9c b0f7b0f8
.org 0x6cda0
	ldr r0, [pc, #100]	@ 0006cda0 1948
.org 0x6cda2
	str r0, [r4, #96]	@ 0006cda2 2066
.org 0x6cda4
	movs r0, #6	@ 0006cda4 0620
.org 0x6cda6
	strb r0, [r4, #18]	@ 0006cda6 a074
.org 0x6cda8
	strb r5, [r4, #15]	@ 0006cda8 e573
.org 0x6cdaa
	ldrb r0, [r4, #14]	@ 0006cdaa a07b
.org 0x6cdac
	adds r0, #1	@ 0006cdac 0130
.org 0x6cdae
	strb r0, [r4, #14]	@ 0006cdae a073
.org 0x6cdb0
	adds r0, r4, #0	@ 0006cdb0 201c
.org 0x6cdb2
	bl 0x1cff0	@ 0006cdb2 b0f71df9
.org 0x6cdb6
	ldrb r0, [r4, #15]	@ 0006cdb6 e07b
.org 0x6cdb8
	cmp r0, #0	@ 0006cdb8 0028
.org 0x6cdba
	bne.n 0x6ce14	@ 0006cdba 2bd1
.org 0x6cdbc
	adds r0, r4, #0	@ 0006cdbc 201c
.org 0x6cdbe
	adds r0, #115	@ 0006cdbe 7330
.org 0x6cdc0
	ldrb r0, [r0, #0]	@ 0006cdc0 0078
.org 0x6cdc2
	cmp r0, #3	@ 0006cdc2 0328
.org 0x6cdc4
	bne.n 0x6ce2e	@ 0006cdc4 33d1
.org 0x6cdc6
	ldrb r0, [r4, #18]	@ 0006cdc6 a07c
.org 0x6cdc8
	subs r0, #1	@ 0006cdc8 0138
.org 0x6cdca
	strb r0, [r4, #18]	@ 0006cdca a074
.org 0x6cdcc
	lsls r0, r0, #24	@ 0006cdcc 0006
.org 0x6cdce
	lsrs r0, r0, #24	@ 0006cdce 000e
.org 0x6cdd0
	cmp r0, #255	@ 0006cdd0 ff28
.org 0x6cdd2
	bne.n 0x6ce2e	@ 0006cdd2 2cd1
.org 0x6cdd4
	ldr r1, [pc, #52]	@ 0006cdd4 0d49
.org 0x6cdd6
	adds r0, r4, #0	@ 0006cdd6 201c
.org 0x6cdd8
	bl 0x1cf00	@ 0006cdd8 b0f792f8
.org 0x6cddc
	adds r0, r4, #0	@ 0006cddc 201c
.org 0x6cdde
	bl 0x1cff0	@ 0006cdde b0f707f9
.org 0x6cde2
	adds r0, r4, #0	@ 0006cde2 201c
.org 0x6cde4
	adds r0, #116	@ 0006cde4 7430
.org 0x6cde6
	ldr r1, [pc, #40]	@ 0006cde6 0a49
.org 0x6cde8
	bl 0x5784	@ 0006cde8 98f7ccfc
.org 0x6cdec
	adds r0, r4, #0	@ 0006cdec 201c
.org 0x6cdee
	movs r1, #1	@ 0006cdee 0121
.org 0x6cdf0
	movs r2, #0	@ 0006cdf0 0022
.org 0x6cdf2
	bl 0xca4c4	@ 0006cdf2 5df067fb
.org 0x6cdf6
	movs r0, #206	@ 0006cdf6 ce20
.org 0x6cdf8
	bl 0x2b10	@ 0006cdf8 95f78afe
.org 0x6cdfc
	ldrb r0, [r4, #15]	@ 0006cdfc e07b
.org 0x6cdfe
	adds r0, #1	@ 0006cdfe 0130
.org 0x6ce00
	strb r0, [r4, #15]	@ 0006ce00 e073
.org 0x6ce02
	b.n 0x6ce2e	@ 0006ce02 14e0
.org 0x6ce04
	.byte 0x13,0xaa,0x00,0x00	@ 0006ce04 data
.org 0x6ce08
	.byte 0xc0,0xf9,0xff,0xff	@ 0006ce08 data
.org 0x6ce0c
	.byte 0x1e,0xaa,0x00,0x00	@ 0006ce0c data
.org 0x6ce10
	.byte 0x14,0xc3,0x85,0x08	@ 0006ce10 data
.org 0x6ce14
	ldr r0, [r4, #88]	@ 0006ce14 a06d
.org 0x6ce16
	ldr r1, [r4, #96]	@ 0006ce16 216e
.org 0x6ce18
	adds r0, r0, r1	@ 0006ce18 4018
.org 0x6ce1a
	str r0, [r4, #88]	@ 0006ce1a a065
.org 0x6ce1c
	adds r1, #64	@ 0006ce1c 4031
.org 0x6ce1e
	str r1, [r4, #96]	@ 0006ce1e 2166
.org 0x6ce20
	ldr r0, [pc, #16]	@ 0006ce20 0448
.org 0x6ce22
	cmp r1, r0	@ 0006ce22 8142

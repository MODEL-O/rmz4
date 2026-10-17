@ FUN_0807fd44  entry 0x0807fd44  size 254
.thumb
.org 0x7fd44
FUN_0807fd44:
	push {r4, r5, r6, lr}	@ 0007fd44 70b5
.org 0x7fd46
	sub sp, #8	@ 0007fd46 82b0
.org 0x7fd48
	adds r4, r0, #0	@ 0007fd48 041c
.org 0x7fd4a
	ldrb r0, [r4, #14]	@ 0007fd4a a07b
.org 0x7fd4c
	cmp r0, #0	@ 0007fd4c 0028
.org 0x7fd4e
	bne.n 0x7fe32	@ 0007fd4e 70d1
.org 0x7fd50
	adds r0, r4, #0	@ 0007fd50 201c
.org 0x7fd52
	adds r0, #193	@ 0007fd52 c130
.org 0x7fd54
	ldrb r0, [r0, #0]	@ 0007fd54 0078
.org 0x7fd56
	cmp r0, #0	@ 0007fd56 0028
.org 0x7fd58
	beq.n 0x7fd92	@ 0007fd58 1bd0
.org 0x7fd5a
	ldrb r1, [r4, #18]	@ 0007fd5a a17c
.org 0x7fd5c
	movs r0, #1	@ 0007fd5c 0120
.org 0x7fd5e
	adds r2, r0, #0	@ 0007fd5e 021c
.org 0x7fd60
	eors r2, r1	@ 0007fd60 4a40
.org 0x7fd62
	cmp r2, #0	@ 0007fd62 002a
.org 0x7fd64
	beq.n 0x7fd6e	@ 0007fd64 03d0
.org 0x7fd66
	ldrb r1, [r4, #10]	@ 0007fd66 a17a
.org 0x7fd68
	movs r0, #16	@ 0007fd68 1020
.org 0x7fd6a
	orrs r0, r1	@ 0007fd6a 0843
.org 0x7fd6c
	b.n 0x7fd74	@ 0007fd6c 02e0
.org 0x7fd6e
	ldrb r1, [r4, #10]	@ 0007fd6e a17a
.org 0x7fd70
	movs r0, #239	@ 0007fd70 ef20
.org 0x7fd72
	ands r0, r1	@ 0007fd72 0840
.org 0x7fd74
	strb r0, [r4, #10]	@ 0007fd74 a072
.org 0x7fd76
	movs r1, #1	@ 0007fd76 0121
.org 0x7fd78
	ands r1, r2	@ 0007fd78 1140
.org 0x7fd7a
	adds r0, r4, #0	@ 0007fd7a 201c
.org 0x7fd7c
	adds r0, #76	@ 0007fd7c 4c30
.org 0x7fd7e
	strb r1, [r0, #0]	@ 0007fd7e 0170
.org 0x7fd80
	adds r3, r4, #0	@ 0007fd80 231c
.org 0x7fd82
	adds r3, #74	@ 0007fd82 4a33
.org 0x7fd84
	lsls r1, r1, #4	@ 0007fd84 0901
.org 0x7fd86
	ldrb r2, [r3, #0]	@ 0007fd86 1a78
.org 0x7fd88
	movs r0, #17	@ 0007fd88 1120
.org 0x7fd8a
	negs r0, r0	@ 0007fd8a 4042
.org 0x7fd8c
	ands r0, r2	@ 0007fd8c 1040
.org 0x7fd8e
	orrs r0, r1	@ 0007fd8e 0843
.org 0x7fd90
	strb r0, [r3, #0]	@ 0007fd90 1870
.org 0x7fd92
	adds r0, r4, #0	@ 0007fd92 201c
.org 0x7fd94
	adds r0, #195	@ 0007fd94 c330
.org 0x7fd96
	ldrb r0, [r0, #0]	@ 0007fd96 0078
.org 0x7fd98
	cmp r0, #0	@ 0007fd98 0028
.org 0x7fd9a
	beq.n 0x7fda6	@ 0007fd9a 04d0
.org 0x7fd9c
	movs r0, #2	@ 0007fd9c 0220
.org 0x7fd9e
	strb r0, [r4, #13]	@ 0007fd9e 6073
.org 0x7fda0
	adds r6, r4, #0	@ 0007fda0 261c
.org 0x7fda2
	adds r6, #140	@ 0007fda2 8c36
.org 0x7fda4
	b.n 0x7fe16	@ 0007fda4 37e0
.org 0x7fda6
	adds r1, r4, #0	@ 0007fda6 211c
.org 0x7fda8
	adds r1, #140	@ 0007fda8 8c31
.org 0x7fdaa
	ldr r5, [r1, #0]	@ 0007fdaa 0d68
.org 0x7fdac
	movs r0, #128	@ 0007fdac 8020
.org 0x7fdae
	lsls r0, r0, #9	@ 0007fdae 4002
.org 0x7fdb0
	ands r5, r0	@ 0007fdb0 0540
.org 0x7fdb2
	adds r6, r1, #0	@ 0007fdb2 0e1c
.org 0x7fdb4
	cmp r5, #0	@ 0007fdb4 002d
.org 0x7fdb6
	beq.n 0x7fe08	@ 0007fdb6 27d0
.org 0x7fdb8
	ldr r1, [pc, #68]	@ 0007fdb8 1149
.org 0x7fdba
	adds r0, r4, #0	@ 0007fdba 201c
.org 0x7fdbc
	bl 0x1cf00	@ 0007fdbc 9df7a0f8
.org 0x7fdc0
	movs r0, #24	@ 0007fdc0 1820
.org 0x7fdc2
	strb r0, [r4, #18]	@ 0007fdc2 a074
.org 0x7fdc4
	ldr r1, [r4, #84]	@ 0007fdc4 616d
.org 0x7fdc6
	movs r0, #128	@ 0007fdc6 8020
.org 0x7fdc8
	lsls r0, r0, #4	@ 0007fdc8 0001
.org 0x7fdca
	adds r1, r1, r0	@ 0007fdca 0918
.org 0x7fdcc
	adds r3, r4, #0	@ 0007fdcc 231c
.org 0x7fdce
	adds r3, #192	@ 0007fdce c033
.org 0x7fdd0
	ldrb r0, [r3, #0]	@ 0007fdd0 1878
.org 0x7fdd2
	lsls r0, r0, #12	@ 0007fdd2 0003
.org 0x7fdd4
	subs r1, r1, r0	@ 0007fdd4 091a
.org 0x7fdd6
	str r1, [sp, #0]	@ 0007fdd6 0091
.org 0x7fdd8
	ldr r0, [r4, #88]	@ 0007fdd8 a06d
.org 0x7fdda
	ldr r1, [pc, #40]	@ 0007fdda 0a49
.org 0x7fddc
	adds r0, r0, r1	@ 0007fddc 4018
.org 0x7fdde
	str r0, [sp, #4]	@ 0007fdde 0190
.org 0x7fde0
	movs r2, #128	@ 0007fde0 8022
.org 0x7fde2
	lsls r2, r2, #2	@ 0007fde2 9200
.org 0x7fde4
	ldrb r3, [r3, #0]	@ 0007fde4 1b78
.org 0x7fde6
	movs r0, #0	@ 0007fde6 0020
.org 0x7fde8
	mov r1, sp	@ 0007fde8 6946
.org 0x7fdea
	bl 0xd0dc4	@ 0007fdea 50f0ebff
.org 0x7fdee
	adds r0, r4, #0	@ 0007fdee 201c
.org 0x7fdf0
	adds r0, #194	@ 0007fdf0 c230
.org 0x7fdf2
	ldrb r1, [r0, #0]	@ 0007fdf2 0178
.org 0x7fdf4
	adds r0, r4, #0	@ 0007fdf4 201c
.org 0x7fdf6
	bl 0xd6784	@ 0007fdf6 56f0c5fc
.org 0x7fdfa
	movs r0, #1	@ 0007fdfa 0120
.org 0x7fdfc
	strb r0, [r4, #13]	@ 0007fdfc 6073
.org 0x7fdfe
	b.n 0x7fe16	@ 0007fdfe 0ae0
.org 0x7fe00
	.byte 0x05,0x1a,0x00,0x00	@ 0007fe00 data
.org 0x7fe04
	.byte 0x00,0xf8,0xff,0xff	@ 0007fe04 data
.org 0x7fe08
	ldr r1, [pc, #64]	@ 0007fe08 1049
.org 0x7fe0a
	adds r0, r4, #0	@ 0007fe0a 201c
.org 0x7fe0c
	bl 0x1cf00	@ 0007fe0c 9df778f8
.org 0x7fe10
	movs r0, #32	@ 0007fe10 2020
.org 0x7fe12
	strb r0, [r4, #18]	@ 0007fe12 a074
.org 0x7fe14
	strb r5, [r4, #13]	@ 0007fe14 6573
.org 0x7fe16
	movs r1, #0	@ 0007fe16 0021
.org 0x7fe18
	str r1, [r6, #0]	@ 0007fe18 3160
.org 0x7fe1a
	adds r0, r4, #0	@ 0007fe1a 201c
.org 0x7fe1c
	adds r0, #144	@ 0007fe1c 9030
.org 0x7fe1e
	str r1, [r0, #0]	@ 0007fe1e 0160
.org 0x7fe20
	adds r0, #4	@ 0007fe20 0430
.org 0x7fe22
	strb r1, [r0, #0]	@ 0007fe22 0170
.org 0x7fe24
	ldrb r1, [r4, #10]	@ 0007fe24 a17a
.org 0x7fe26
	movs r0, #251	@ 0007fe26 fb20
.org 0x7fe28
	ands r0, r1	@ 0007fe28 0840
.org 0x7fe2a
	strb r0, [r4, #10]	@ 0007fe2a a072
.org 0x7fe2c
	ldrb r0, [r4, #14]	@ 0007fe2c a07b
.org 0x7fe2e
	adds r0, #1	@ 0007fe2e 0130
.org 0x7fe30
	strb r0, [r4, #14]	@ 0007fe30 a073
.org 0x7fe32
	ldr r0, [pc, #28]	@ 0007fe32 0748
.org 0x7fe34
	ldrb r1, [r4, #13]	@ 0007fe34 617b
.org 0x7fe36
	lsls r1, r1, #2	@ 0007fe36 8900
.org 0x7fe38
	adds r1, r1, r0	@ 0007fe38 0918
.org 0x7fe3a
	ldr r1, [r1, #0]	@ 0007fe3a 0968
.org 0x7fe3c
	adds r0, r4, #0	@ 0007fe3c 201c
.org 0x7fe3e
	bl 0x128f80	@ 0007fe3e a9f09ff8

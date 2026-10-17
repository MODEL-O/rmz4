@ FUN_080aabbc  entry 0x080aabbc  size 198
.thumb
.org 0xaabbc
FUN_080aabbc:
	push {r4, r5, r6, lr}	@ 000aabbc 70b5
.org 0xaabbe
	adds r6, r0, #0	@ 000aabbe 061c
.org 0xaabc0
	ldrb r4, [r6, #17]	@ 000aabc0 747c
.org 0xaabc2
	ldr r1, [pc, #88]	@ 000aabc2 1649
.org 0xaabc4
	ldrb r0, [r6, #9]	@ 000aabc4 707a
.org 0xaabc6
	lsls r0, r0, #2	@ 000aabc6 8000
.org 0xaabc8
	adds r0, r0, r1	@ 000aabc8 4018
.org 0xaabca
	movs r1, #1	@ 000aabca 0121
.org 0xaabcc
	str r1, [r6, #12]	@ 000aabcc f160
.org 0xaabce
	ldr r0, [r0, #0]	@ 000aabce 0068
.org 0xaabd0
	ldr r0, [r0, #4]	@ 000aabd0 4068
.org 0xaabd2
	str r0, [r6, #20]	@ 000aabd2 7061
.org 0xaabd4
	movs r0, #0	@ 000aabd4 0020
.org 0xaabd6
	strb r0, [r6, #13]	@ 000aabd6 7073
.org 0xaabd8
	strb r0, [r6, #14]	@ 000aabd8 b073
.org 0xaabda
	strb r0, [r6, #15]	@ 000aabda f073
.org 0xaabdc
	ldrb r0, [r6, #10]	@ 000aabdc b07a
.org 0xaabde
	movs r5, #0	@ 000aabde 0025
.org 0xaabe0
	orrs r0, r1	@ 000aabe0 0843
.org 0xaabe2
	movs r1, #2	@ 000aabe2 0221
.org 0xaabe4
	orrs r0, r1	@ 000aabe4 0843
.org 0xaabe6
	strb r0, [r6, #10]	@ 000aabe6 b072
.org 0xaabe8
	adds r2, r6, #0	@ 000aabe8 321c
.org 0xaabea
	adds r2, #180	@ 000aabea b432
.org 0xaabec
	movs r1, #0	@ 000aabec 0021
.org 0xaabee
	movs r0, #255	@ 000aabee ff20
.org 0xaabf0
	strh r0, [r2, #0]	@ 000aabf0 1080
.org 0xaabf2
	adds r0, r6, #0	@ 000aabf2 301c
.org 0xaabf4
	adds r0, #184	@ 000aabf4 b830
.org 0xaabf6
	strb r1, [r0, #0]	@ 000aabf6 0170
.org 0xaabf8
	adds r0, #1	@ 000aabf8 0130
.org 0xaabfa
	strb r1, [r0, #0]	@ 000aabfa 0170
.org 0xaabfc
	adds r2, #6	@ 000aabfc 0632
.org 0xaabfe
	movs r0, #255	@ 000aabfe ff20
.org 0xaac00
	strb r0, [r2, #0]	@ 000aac00 1070
.org 0xaac02
	adds r0, r6, #0	@ 000aac02 301c
.org 0xaac04
	adds r0, #187	@ 000aac04 bb30
.org 0xaac06
	strb r1, [r0, #0]	@ 000aac06 0170
.org 0xaac08
	adds r0, r6, #0	@ 000aac08 301c
.org 0xaac0a
	bl 0x1cc9c	@ 000aac0a 72f747f8
.org 0xaac0e
	cmp r4, #0	@ 000aac0e 002c
.org 0xaac10
	beq.n 0xaac20	@ 000aac10 06d0
.org 0xaac12
	ldrb r0, [r6, #10]	@ 000aac12 b07a
.org 0xaac14
	movs r1, #16	@ 000aac14 1021
.org 0xaac16
	orrs r0, r1	@ 000aac16 0843
.org 0xaac18
	b.n 0xaac26	@ 000aac18 05e0
.org 0xaac1a
	.byte 0x00	@ 000aac1a data
.org 0xaac1b
	.byte 0x00	@ 000aac1b data
.org 0xaac1c
	.byte 0x40,0xdb,0x85,0x08	@ 000aac1c data
.org 0xaac20
	ldrb r1, [r6, #10]	@ 000aac20 b17a
.org 0xaac22
	movs r0, #239	@ 000aac22 ef20
.org 0xaac24
	ands r0, r1	@ 000aac24 0840
.org 0xaac26
	strb r0, [r6, #10]	@ 000aac26 b072
.org 0xaac28
	movs r1, #1	@ 000aac28 0121
.org 0xaac2a
	ands r1, r4	@ 000aac2a 2140
.org 0xaac2c
	adds r0, r6, #0	@ 000aac2c 301c
.org 0xaac2e
	adds r0, #76	@ 000aac2e 4c30
.org 0xaac30
	movs r5, #0	@ 000aac30 0025
.org 0xaac32
	strb r1, [r0, #0]	@ 000aac32 0170
.org 0xaac34
	adds r3, r6, #0	@ 000aac34 331c
.org 0xaac36
	adds r3, #74	@ 000aac36 4a33
.org 0xaac38
	lsls r1, r1, #4	@ 000aac38 0901
.org 0xaac3a
	ldrb r2, [r3, #0]	@ 000aac3a 1a78
.org 0xaac3c
	movs r0, #17	@ 000aac3c 1120
.org 0xaac3e
	negs r0, r0	@ 000aac3e 4042
.org 0xaac40
	ands r0, r2	@ 000aac40 1040
.org 0xaac42
	orrs r0, r1	@ 000aac42 0843
.org 0xaac44
	strb r0, [r3, #0]	@ 000aac44 1870
.org 0xaac46
	movs r1, #144	@ 000aac46 9021
.org 0xaac48
	lsls r1, r1, #8	@ 000aac48 0902
.org 0xaac4a
	adds r0, r6, #0	@ 000aac4a 301c
.org 0xaac4c
	bl 0x1cf00	@ 000aac4c 72f758f9
.org 0xaac50
	adds r0, r6, #0	@ 000aac50 301c
.org 0xaac52
	bl 0x1cff0	@ 000aac52 72f7cdf9
.org 0xaac56
	ldrb r1, [r6, #10]	@ 000aac56 b17a
.org 0xaac58
	movs r0, #4	@ 000aac58 0420
.org 0xaac5a
	orrs r0, r1	@ 000aac5a 0843
.org 0xaac5c
	strb r0, [r6, #10]	@ 000aac5c b072
.org 0xaac5e
	adds r4, r6, #0	@ 000aac5e 341c
.org 0xaac60
	adds r4, #116	@ 000aac60 7434
.org 0xaac62
	ldr r1, [pc, #36]	@ 000aac62 0949
.org 0xaac64
	adds r2, r6, #0	@ 000aac64 321c
.org 0xaac66
	adds r2, #84	@ 000aac66 5432
.org 0xaac68
	adds r0, r4, #0	@ 000aac68 201c
.org 0xaac6a
	movs r3, #8	@ 000aac6a 0823
.org 0xaac6c
	bl 0x5760	@ 000aac6c 5af778fd
.org 0xaac70
	str r6, [r4, #44]	@ 000aac70 e662
.org 0xaac72
	str r5, [r4, #36]	@ 000aac72 6562
.org 0xaac74
	movs r0, #152	@ 000aac74 9820
.org 0xaac76
	lsls r0, r0, #1	@ 000aac76 4000
.org 0xaac78
	bl 0x2b10	@ 000aac78 57f74aff
.org 0xaac7c
	adds r0, r6, #0	@ 000aac7c 301c
.org 0xaac7e
	bl 0xaac8c	@ 000aac7e 00f005f8

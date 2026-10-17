@ FUN_080ea9b0  entry 0x080ea9b0  size 228
.thumb
.org 0xea9b0
FUN_080ea9b0:
	push {r4, r5, r6, lr}	@ 000ea9b0 70b5
.org 0xea9b2
	adds r6, r0, #0	@ 000ea9b2 061c
.org 0xea9b4
	ldrb r0, [r6, #17]	@ 000ea9b4 707c
.org 0xea9b6
	cmp r0, #1	@ 000ea9b6 0128
.org 0xea9b8
	bne.n 0xea9c8	@ 000ea9b8 06d1
.org 0xea9ba
	ldr r3, [pc, #8]	@ 000ea9ba 024b
.org 0xea9bc
	movs r5, #248	@ 000ea9bc f825
.org 0xea9be
	lsls r5, r5, #2	@ 000ea9be ad00
.org 0xea9c0
	b.n 0xea9ce	@ 000ea9c0 05e0
.org 0xea9c2
	.byte 0x00	@ 000ea9c2 data
.org 0xea9c3
	.byte 0x00	@ 000ea9c3 data
.org 0xea9c4
	.byte 0x40,0xe0,0x02,0x02	@ 000ea9c4 data
.org 0xea9c8
	ldr r3, [pc, #44]	@ 000ea9c8 0b4b
.org 0xea9ca
	movs r5, #240	@ 000ea9ca f025
.org 0xea9cc
	lsls r5, r5, #1	@ 000ea9cc 6d00
.org 0xea9ce
	strh r5, [r3, #42]	@ 000ea9ce 5d85
.org 0xea9d0
	ldr r1, [pc, #40]	@ 000ea9d0 0a49
.org 0xea9d2
	movs r4, #10	@ 000ea9d2 0a24
.org 0xea9d4
	strh r4, [r1, #42]	@ 000ea9d4 4c85
.org 0xea9d6
	movs r2, #195	@ 000ea9d6 c322
.org 0xea9d8
	lsls r2, r2, #1	@ 000ea9d8 5200
.org 0xea9da
	adds r0, r3, r2	@ 000ea9da 9818
.org 0xea9dc
	strh r5, [r0, #0]	@ 000ea9dc 0580
.org 0xea9de
	adds r1, r1, r2	@ 000ea9de 8918
.org 0xea9e0
	strh r4, [r1, #0]	@ 000ea9e0 0c80
.org 0xea9e2
	ldr r0, [pc, #28]	@ 000ea9e2 0748
.org 0xea9e4
	ldrb r1, [r0, #20]	@ 000ea9e4 017d
.org 0xea9e6
	movs r0, #128	@ 000ea9e6 8020
.org 0xea9e8
	ands r0, r1	@ 000ea9e8 0840
.org 0xea9ea
	cmp r0, #0	@ 000ea9ea 0028
.org 0xea9ec
	bne.n 0xeaa04	@ 000ea9ec 0ad1
.org 0xea9ee
	adds r1, r6, #0	@ 000ea9ee 311c
.org 0xea9f0
	adds r1, #184	@ 000ea9f0 b831
.org 0xea9f2
	movs r0, #21	@ 000ea9f2 1520
.org 0xea9f4
	b.n 0xeaa0a	@ 000ea9f4 09e0
.org 0xea9f6
	.byte 0x00	@ 000ea9f6 data
.org 0xea9f7
	.byte 0x00	@ 000ea9f7 data
.org 0xea9f8
	.byte 0x40,0xe0,0x02,0x02	@ 000ea9f8 data
.org 0xea9fc
	.byte 0x40,0xde,0x02,0x02	@ 000ea9fc data
.org 0xeaa00
	.byte 0xb0,0xe8,0x02,0x02	@ 000eaa00 data
.org 0xeaa04
	adds r1, r6, #0	@ 000eaa04 311c
.org 0xeaa06
	adds r1, #184	@ 000eaa06 b831
.org 0xeaa08
	movs r0, #195	@ 000eaa08 c320
.org 0xeaa0a
	strb r0, [r1, #0]	@ 000eaa0a 0870
.org 0xeaa0c
	ldr r0, [r6, #84]	@ 000eaa0c 706d
.org 0xeaa0e
	ldr r2, [pc, #152]	@ 000eaa0e 264a
.org 0xeaa10
	adds r0, r0, r2	@ 000eaa10 8018
.org 0xeaa12
	str r0, [r6, #84]	@ 000eaa12 7065
.org 0xeaa14
	ldr r0, [r6, #88]	@ 000eaa14 b06d
.org 0xeaa16
	movs r2, #144	@ 000eaa16 9022
.org 0xeaa18
	lsls r2, r2, #4	@ 000eaa18 1201
.org 0xeaa1a
	adds r0, r0, r2	@ 000eaa1a 8018
.org 0xeaa1c
	str r0, [r6, #88]	@ 000eaa1c b065
.org 0xeaa1e
	ldrb r4, [r1, #0]	@ 000eaa1e 0c78
.org 0xeaa20
	lsls r5, r4, #2	@ 000eaa20 a500
.org 0xeaa22
	adds r5, r5, r4	@ 000eaa22 2d19
.org 0xeaa24
	lsls r5, r5, #2	@ 000eaa24 ad00
.org 0xeaa26
	ldr r0, [pc, #132]	@ 000eaa26 2148
.org 0xeaa28
	adds r0, r5, r0	@ 000eaa28 2818
.org 0xeaa2a
	lsls r4, r4, #1	@ 000eaa2a 6400
.org 0xeaa2c
	adds r1, r4, r3	@ 000eaa2c e118
.org 0xeaa2e
	ldrh r1, [r1, #0]	@ 000eaa2e 0988
.org 0xeaa30
	ldrh r2, [r0, #6]	@ 000eaa30 c288
.org 0xeaa32
	lsrs r2, r2, #6	@ 000eaa32 9209
.org 0xeaa34
	subs r1, r1, r2	@ 000eaa34 891a
.org 0xeaa36
	lsls r1, r1, #5	@ 000eaa36 4901
.org 0xeaa38
	movs r2, #128	@ 000eaa38 8022
.org 0xeaa3a
	lsls r2, r2, #9	@ 000eaa3a 5202
.org 0xeaa3c
	adds r1, r1, r2	@ 000eaa3c 8918
.org 0xeaa3e
	bl 0x1d30	@ 000eaa3e 17f777f9
.org 0xeaa42
	ldr r0, [pc, #108]	@ 000eaa42 1b48
.org 0xeaa44
	adds r5, r5, r0	@ 000eaa44 2d18
.org 0xeaa46
	ldr r0, [pc, #108]	@ 000eaa46 1b48
.org 0xeaa48
	adds r4, r4, r0	@ 000eaa48 2418
.org 0xeaa4a
	ldrh r1, [r4, #0]	@ 000eaa4a 2188
.org 0xeaa4c
	ldrb r0, [r5, #7]	@ 000eaa4c e879
.org 0xeaa4e
	subs r1, r1, r0	@ 000eaa4e 091a
.org 0xeaa50
	lsls r1, r1, #5	@ 000eaa50 4901
.org 0xeaa52
	movs r2, #128	@ 000eaa52 8022
.org 0xeaa54
	lsls r2, r2, #2	@ 000eaa54 9200
.org 0xeaa56
	adds r1, r1, r2	@ 000eaa56 8918
.org 0xeaa58
	adds r0, r5, #0	@ 000eaa58 281c
.org 0xeaa5a
	bl 0x2208	@ 000eaa5a 17f7d5fb
.org 0xeaa5e
	adds r0, r6, #0	@ 000eaa5e 301c
.org 0xeaa60
	bl 0x1cc9c	@ 000eaa60 32f71cf9
.org 0xeaa64
	ldrb r1, [r6, #10]	@ 000eaa64 b17a
.org 0xeaa66
	movs r0, #1	@ 000eaa66 0120
.org 0xeaa68
	movs r2, #0	@ 000eaa68 0022
.org 0xeaa6a
	orrs r0, r1	@ 000eaa6a 0843
.org 0xeaa6c
	strb r0, [r6, #10]	@ 000eaa6c b072
.org 0xeaa6e
	adds r3, r6, #0	@ 000eaa6e 331c
.org 0xeaa70
	adds r3, #73	@ 000eaa70 4933
.org 0xeaa72
	ldrb r1, [r3, #0]	@ 000eaa72 1978
.org 0xeaa74
	movs r0, #13	@ 000eaa74 0d20
.org 0xeaa76
	negs r0, r0	@ 000eaa76 4042
.org 0xeaa78
	ands r0, r1	@ 000eaa78 0840
.org 0xeaa7a
	movs r1, #4	@ 000eaa7a 0421
.org 0xeaa7c
	orrs r0, r1	@ 000eaa7c 0843
.org 0xeaa7e
	strb r0, [r3, #0]	@ 000eaa7e 1870
.org 0xeaa80
	ldr r1, [pc, #52]	@ 000eaa80 0d49
.org 0xeaa82
	ldrb r0, [r6, #9]	@ 000eaa82 707a
.org 0xeaa84
	lsls r0, r0, #2	@ 000eaa84 8000
.org 0xeaa86
	adds r0, r0, r1	@ 000eaa86 4018
.org 0xeaa88
	movs r1, #1	@ 000eaa88 0121
.org 0xeaa8a
	str r1, [r6, #12]	@ 000eaa8a f160
.org 0xeaa8c
	ldr r0, [r0, #0]	@ 000eaa8c 0068
.org 0xeaa8e
	ldr r0, [r0, #4]	@ 000eaa8e 4068
.org 0xeaa90
	str r0, [r6, #20]	@ 000eaa90 7061
.org 0xeaa92
	strb r2, [r6, #13]	@ 000eaa92 7273

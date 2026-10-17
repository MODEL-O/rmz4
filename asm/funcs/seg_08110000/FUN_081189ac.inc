@ FUN_081189ac  entry 0x081189ac  size 118
.thumb
.org 0x1189ac
FUN_081189ac:
	push {r4, r5, r6, lr}	@ 001189ac 70b5
.org 0x1189ae
	adds r3, r0, #0	@ 001189ae 031c
.org 0x1189b0
	ldr r1, [pc, #16]	@ 001189b0 0449
.org 0x1189b2
	adds r0, r3, r1	@ 001189b2 5818
.org 0x1189b4
	ldrb r0, [r0, #0]	@ 001189b4 0078
.org 0x1189b6
	cmp r0, #1	@ 001189b6 0128
.org 0x1189b8
	bne.n 0x1189cc	@ 001189b8 08d1
.org 0x1189ba
	ldr r1, [pc, #12]	@ 001189ba 0349
.org 0x1189bc
	ldrh r0, [r1, #0]	@ 001189bc 0888
.org 0x1189be
	adds r0, #16	@ 001189be 1030
.org 0x1189c0
	b.n 0x1189d2	@ 001189c0 07e0
.org 0x1189c2
	.byte 0x00	@ 001189c2 data
.org 0x1189c3
	.byte 0x00	@ 001189c3 data
.org 0x1189c4
	.byte 0xf9,0x0d,0x00,0x00	@ 001189c4 data
.org 0x1189c8
	.byte 0x10,0x0a,0x00,0x02	@ 001189c8 data
.org 0x1189cc
	ldr r1, [pc, #48]	@ 001189cc 0c49
.org 0x1189ce
	ldrh r0, [r1, #0]	@ 001189ce 0888
.org 0x1189d0
	subs r0, #16	@ 001189d0 1038
.org 0x1189d2
	strh r0, [r1, #0]	@ 001189d2 0880
.org 0x1189d4
	adds r5, r1, #0	@ 001189d4 0d1c
.org 0x1189d6
	ldrh r0, [r5, #0]	@ 001189d6 2888
.org 0x1189d8
	ldr r1, [pc, #40]	@ 001189d8 0a49
.org 0x1189da
	ands r1, r0	@ 001189da 0140
.org 0x1189dc
	strh r1, [r5, #0]	@ 001189dc 2980
.org 0x1189de
	ldr r2, [pc, #40]	@ 001189de 0a4a
.org 0x1189e0
	adds r4, r3, r2	@ 001189e0 9c18
.org 0x1189e2
	ldr r1, [pc, #40]	@ 001189e2 0a49
.org 0x1189e4
	adds r0, r3, r1	@ 001189e4 5818
.org 0x1189e6
	ldrb r2, [r0, #0]	@ 001189e6 0278
.org 0x1189e8
	adds r6, r0, #0	@ 001189e8 061c
.org 0x1189ea
	cmp r2, #1	@ 001189ea 012a
.org 0x1189ec
	bne.n 0x118a10	@ 001189ec 10d1
.org 0x1189ee
	ldrh r0, [r5, #0]	@ 001189ee 2888
.org 0x1189f0
	adds r0, #32	@ 001189f0 2030
.org 0x1189f2
	movs r1, #255	@ 001189f2 ff21
.org 0x1189f4
	ands r0, r1	@ 001189f4 0840
.org 0x1189f6
	cmp r0, #0	@ 001189f6 0028
.org 0x1189f8
	bne.n 0x118a20	@ 001189f8 12d1
.org 0x1189fa
	strb r2, [r4, #2]	@ 001189fa a270
.org 0x1189fc
	b.n 0x118a20	@ 001189fc 10e0
.org 0x1189fe
	.byte 0x00	@ 001189fe data
.org 0x1189ff
	.byte 0x00	@ 001189ff data
.org 0x118a00
	.byte 0x10,0x0a,0x00,0x02	@ 00118a00 data
.org 0x118a04
	.byte 0xff,0x01,0x00,0x00	@ 00118a04 data
.org 0x118a08
	.byte 0xcc,0x0d,0x00,0x00	@ 00118a08 data
.org 0x118a0c
	.byte 0xf9,0x0d,0x00,0x00	@ 00118a0c data
.org 0x118a10
	ldrh r0, [r5, #0]	@ 00118a10 2888
.org 0x118a12
	subs r0, #32	@ 00118a12 2038
.org 0x118a14
	movs r1, #255	@ 00118a14 ff21
.org 0x118a16
	ands r0, r1	@ 00118a16 0840
.org 0x118a18
	cmp r0, #0	@ 00118a18 0028
.org 0x118a1a
	bne.n 0x118a20	@ 00118a1a 01d1
.org 0x118a1c
	movs r0, #1	@ 00118a1c 0120
.org 0x118a1e
	strb r0, [r4, #2]	@ 00118a1e a070
.org 0x118a20
	ldrb r0, [r5, #0]	@ 00118a20 2878

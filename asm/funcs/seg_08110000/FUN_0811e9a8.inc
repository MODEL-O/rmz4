@ FUN_0811e9a8  entry 0x0811e9a8  size 102
.thumb
.org 0x11e9a8
FUN_0811e9a8:
	push {r4, lr}	@ 0011e9a8 10b5
.org 0x11e9aa
	adds r4, r0, #0	@ 0011e9aa 041c
.org 0x11e9ac
	movs r0, #63	@ 0011e9ac 3f20
.org 0x11e9ae
	bl 0x25d8	@ 0011e9ae e3f613fe
.org 0x11e9b2
	movs r0, #64	@ 0011e9b2 4020
.org 0x11e9b4
	bl 0x25d8	@ 0011e9b4 e3f610fe
.org 0x11e9b8
	ldrh r0, [r4, #4]	@ 0011e9b8 a088
.org 0x11e9ba
	subs r0, #1	@ 0011e9ba 0138
.org 0x11e9bc
	movs r2, #0	@ 0011e9bc 0022
.org 0x11e9be
	adds r1, r0, #0	@ 0011e9be 011c
.org 0x11e9c0
	strh r0, [r4, #4]	@ 0011e9c0 a080
.org 0x11e9c2
	lsls r0, r0, #16	@ 0011e9c2 0004
.org 0x11e9c4
	cmp r0, #0	@ 0011e9c4 0028
.org 0x11e9c6
	bne.n 0x11e9f8	@ 0011e9c6 17d1
.org 0x11e9c8
	ldr r0, [pc, #36]	@ 0011e9c8 0948
.org 0x11e9ca
	ldr r3, [pc, #40]	@ 0011e9ca 0a4b
.org 0x11e9cc
	adds r1, r0, r3	@ 0011e9cc c118
.org 0x11e9ce
	strb r2, [r1, #0]	@ 0011e9ce 0a70
.org 0x11e9d0
	subs r3, #1	@ 0011e9d0 013b
.org 0x11e9d2
	adds r1, r0, r3	@ 0011e9d2 c118
.org 0x11e9d4
	strb r2, [r1, #0]	@ 0011e9d4 0a70
.org 0x11e9d6
	movs r1, #128	@ 0011e9d6 8021
.org 0x11e9d8
	lsls r1, r1, #3	@ 0011e9d8 c900
.org 0x11e9da
	adds r0, r0, r1	@ 0011e9da 4018
.org 0x11e9dc
	strb r2, [r0, #0]	@ 0011e9dc 0270
.org 0x11e9de
	movs r0, #4	@ 0011e9de 0420
.org 0x11e9e0
	strb r0, [r4, #1]	@ 0011e9e0 6070
.org 0x11e9e2
	strb r2, [r4, #3]	@ 0011e9e2 e270
.org 0x11e9e4
	strb r2, [r4, #2]	@ 0011e9e4 a270
.org 0x11e9e6
	adds r0, r4, #0	@ 0011e9e6 201c
.org 0x11e9e8
	bl 0x11ea20	@ 0011e9e8 00f01af8
.org 0x11e9ec
	b.n 0x11ea12	@ 0011e9ec 11e0
.org 0x11e9ee
	.byte 0x00	@ 0011e9ee data
.org 0x11e9ef
	.byte 0x00	@ 0011e9ef data
.org 0x11e9f0
	.byte 0xc0,0x2a,0x00,0x03	@ 0011e9f0 data
.org 0x11e9f4
	.byte 0x02,0x04,0x00,0x00	@ 0011e9f4 data
.org 0x11e9f8
	ldr r2, [pc, #28]	@ 0011e9f8 074a
.org 0x11e9fa
	ldr r3, [pc, #32]	@ 0011e9fa 084b
.org 0x11e9fc
	adds r0, r2, r3	@ 0011e9fc d018
.org 0x11e9fe
	strb r1, [r0, #0]	@ 0011e9fe 0170
.org 0x11ea00
	movs r0, #255	@ 0011ea00 ff20
.org 0x11ea02
	ands r0, r1	@ 0011ea02 0840
.org 0x11ea04
	subs r3, #1	@ 0011ea04 013b
.org 0x11ea06
	adds r1, r2, r3	@ 0011ea06 d118
.org 0x11ea08
	strb r0, [r1, #0]	@ 0011ea08 0870
.org 0x11ea0a
	movs r1, #128	@ 0011ea0a 8021
.org 0x11ea0c
	lsls r1, r1, #3	@ 0011ea0c c900

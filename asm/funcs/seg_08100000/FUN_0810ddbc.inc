@ FUN_0810ddbc  entry 0x0810ddbc  size 168
.thumb
.org 0x10ddbc
FUN_0810ddbc:
	push {r4, r5, r6, r7, lr}	@ 0010ddbc f0b5
.org 0x10ddbe
	lsls r0, r0, #16	@ 0010ddbe 0004
.org 0x10ddc0
	lsrs r6, r0, #16	@ 0010ddc0 060c
.org 0x10ddc2
	ldr r1, [pc, #96]	@ 0010ddc2 1849
.org 0x10ddc4
	movs r2, #177	@ 0010ddc4 b122
.org 0x10ddc6
	lsls r2, r2, #3	@ 0010ddc6 d200
.org 0x10ddc8
	adds r0, r1, r2	@ 0010ddc8 8818
.org 0x10ddca
	ldr r2, [r0, #0]	@ 0010ddca 0268
.org 0x10ddcc
	adds r7, r1, #0	@ 0010ddcc 0f1c
.org 0x10ddce
	cmp r2, #0	@ 0010ddce 002a
.org 0x10ddd0
	beq.n 0x10dde8	@ 0010ddd0 0ad0
.org 0x10ddd2
	ldr r4, [pc, #84]	@ 0010ddd2 154c
.org 0x10ddd4
	adds r3, r6, #0	@ 0010ddd4 331c
.org 0x10ddd6
	ands r3, r4	@ 0010ddd6 2340
.org 0x10ddd8
	ldrh r1, [r2, #4]	@ 0010ddd8 9188
.org 0x10ddda
	adds r0, r4, #0	@ 0010ddda 201c
.org 0x10dddc
	ands r0, r1	@ 0010dddc 0840
.org 0x10ddde
	cmp r3, r0	@ 0010ddde 8342
.org 0x10dde0
	beq.n 0x10de68	@ 0010dde0 42d0
.org 0x10dde2
	ldr r2, [r2, #0]	@ 0010dde2 1268
.org 0x10dde4
	cmp r2, #0	@ 0010dde4 002a
.org 0x10dde6
	bne.n 0x10ddd8	@ 0010dde6 f7d1
.org 0x10dde8
	ldr r5, [pc, #64]	@ 0010dde8 104d
.org 0x10ddea
	ldr r2, [r5, #0]	@ 0010ddea 2a68
.org 0x10ddec
	cmp r2, #0	@ 0010ddec 002a
.org 0x10ddee
	beq.n 0x10de08	@ 0010ddee 0bd0
.org 0x10ddf0
	ldr r4, [pc, #52]	@ 0010ddf0 0d4c
.org 0x10ddf2
	adds r3, r6, #0	@ 0010ddf2 331c
.org 0x10ddf4
	ands r3, r4	@ 0010ddf4 2340
.org 0x10ddf6
	ldrh r1, [r2, #4]	@ 0010ddf6 9188
.org 0x10ddf8
	adds r0, r4, #0	@ 0010ddf8 201c
.org 0x10ddfa
	ands r0, r1	@ 0010ddfa 0840
.org 0x10ddfc
	cmp r3, r0	@ 0010ddfc 8342
.org 0x10ddfe
	beq.n 0x10de30	@ 0010ddfe 17d0
.org 0x10de00
	adds r5, r2, #0	@ 0010de00 151c
.org 0x10de02
	ldr r2, [r2, #0]	@ 0010de02 1268
.org 0x10de04
	cmp r2, #0	@ 0010de04 002a
.org 0x10de06
	bne.n 0x10ddf6	@ 0010de06 f6d1
.org 0x10de08
	movs r0, #178	@ 0010de08 b220
.org 0x10de0a
	lsls r0, r0, #3	@ 0010de0a c000
.org 0x10de0c
	adds r3, r7, r0	@ 0010de0c 3b18
.org 0x10de0e
	ldr r1, [r3, #0]	@ 0010de0e 1968
.org 0x10de10
	cmp r1, #0	@ 0010de10 0029
.org 0x10de12
	bne.n 0x10de44	@ 0010de12 17d1
.org 0x10de14
	subs r0, #4	@ 0010de14 0438
.org 0x10de16
	adds r2, r7, r0	@ 0010de16 3a18
.org 0x10de18
	ldr r0, [r2, #0]	@ 0010de18 1068
.org 0x10de1a
	str r0, [r3, #0]	@ 0010de1a 1860
.org 0x10de1c
	cmp r0, #0	@ 0010de1c 0028
.org 0x10de1e
	bne.n 0x10de42	@ 0010de1e 10d1
.org 0x10de20
	movs r0, #0	@ 0010de20 0020
.org 0x10de22
	b.n 0x10de6a	@ 0010de22 22e0
.org 0x10de24
	.byte 0xc0,0xed,0x02,0x02	@ 0010de24 data
.org 0x10de28
	.byte 0xff,0x0f,0x00,0x00	@ 0010de28 data
.org 0x10de2c
	.byte 0x4c,0xf3,0x02,0x02	@ 0010de2c data
.org 0x10de30
	ldr r0, [r2, #0]	@ 0010de30 1068
.org 0x10de32
	str r0, [r5, #0]	@ 0010de32 2860
.org 0x10de34
	movs r3, #177	@ 0010de34 b123
.org 0x10de36
	lsls r3, r3, #3	@ 0010de36 db00
.org 0x10de38
	adds r1, r7, r3	@ 0010de38 f918
.org 0x10de3a
	ldr r0, [r1, #0]	@ 0010de3a 0868
.org 0x10de3c
	str r0, [r2, #0]	@ 0010de3c 1060
.org 0x10de3e
	str r2, [r1, #0]	@ 0010de3e 0a60
.org 0x10de40
	b.n 0x10de68	@ 0010de40 12e0
.org 0x10de42
	str r1, [r2, #0]	@ 0010de42 1160
.org 0x10de44
	movs r0, #178	@ 0010de44 b220
.org 0x10de46
	lsls r0, r0, #3	@ 0010de46 c000
.org 0x10de48
	adds r1, r7, r0	@ 0010de48 3918
.org 0x10de4a
	ldr r2, [r1, #0]	@ 0010de4a 0a68
.org 0x10de4c
	ldr r0, [r2, #0]	@ 0010de4c 1068
.org 0x10de4e
	str r0, [r1, #0]	@ 0010de4e 0860
.org 0x10de50
	movs r3, #177	@ 0010de50 b123
.org 0x10de52
	lsls r3, r3, #3	@ 0010de52 db00
.org 0x10de54
	adds r1, r7, r3	@ 0010de54 f918
.org 0x10de56
	ldr r0, [r1, #0]	@ 0010de56 0868
.org 0x10de58
	str r0, [r2, #0]	@ 0010de58 1060
.org 0x10de5a
	str r2, [r1, #0]	@ 0010de5a 0a60
.org 0x10de5c
	ldrh r1, [r2, #6]	@ 0010de5c d188
.org 0x10de5e
	movs r3, #128	@ 0010de5e 8023
.org 0x10de60
	lsls r3, r3, #8	@ 0010de60 1b02
.org 0x10de62
	adds r0, r3, #0	@ 0010de62 181c

@ FUN_0809eb70  entry 0x0809eb70  size 96
.thumb
.org 0x9eb70
FUN_0809eb70:
	push {r4, r5, r6, r7, lr}	@ 0009eb70 f0b5
.org 0x9eb72
	adds r6, r0, #0	@ 0009eb72 061c
.org 0x9eb74
	adds r7, r1, #0	@ 0009eb74 0f1c
.org 0x9eb76
	lsls r2, r2, #24	@ 0009eb76 1206
.org 0x9eb78
	lsrs r5, r2, #24	@ 0009eb78 150e
.org 0x9eb7a
	lsls r3, r3, #24	@ 0009eb7a 1b06
.org 0x9eb7c
	lsrs r4, r3, #24	@ 0009eb7c 1c0e
.org 0x9eb7e
	ldr r0, [pc, #80]	@ 0009eb7e 1448
.org 0x9eb80
	ldr r0, [r0, #0]	@ 0009eb80 0068
.org 0x9eb82
	bl 0x5500	@ 0009eb82 66f7bdfc
.org 0x9eb86
	adds r3, r0, #0	@ 0009eb86 031c
.org 0x9eb88
	cmp r3, #0	@ 0009eb88 002b
.org 0x9eb8a
	beq.n 0x9ebc8	@ 0009eb8a 1dd0
.org 0x9eb8c
	adds r1, r3, #0	@ 0009eb8c 191c
.org 0x9eb8e
	adds r1, #37	@ 0009eb8e 2531
.org 0x9eb90
	movs r2, #0	@ 0009eb90 0022
.org 0x9eb92
	movs r0, #24	@ 0009eb92 1820
.org 0x9eb94
	strb r0, [r1, #0]	@ 0009eb94 0870
.org 0x9eb96
	ldr r0, [pc, #60]	@ 0009eb96 0f48
.org 0x9eb98
	movs r1, #47	@ 0009eb98 2f21
.org 0x9eb9a
	strb r1, [r3, #9]	@ 0009eb9a 5972
.org 0x9eb9c
	adds r0, #188	@ 0009eb9c bc30
.org 0x9eb9e
	ldr r0, [r0, #0]	@ 0009eb9e 0068
.org 0x9eba0
	ldr r0, [r0, #0]	@ 0009eba0 0068
.org 0x9eba2
	str r0, [r3, #20]	@ 0009eba2 5861
.org 0x9eba4
	movs r0, #0	@ 0009eba4 0020
.org 0x9eba6
	strh r2, [r3, #32]	@ 0009eba6 1a84
.org 0x9eba8
	adds r1, r3, #0	@ 0009eba8 191c
.org 0x9ebaa
	adds r1, #34	@ 0009ebaa 2231
.org 0x9ebac
	strb r0, [r1, #0]	@ 0009ebac 0870
.org 0x9ebae
	ldrb r1, [r3, #11]	@ 0009ebae d97a
.org 0x9ebb0
	movs r0, #16	@ 0009ebb0 1020
.org 0x9ebb2
	orrs r0, r1	@ 0009ebb2 0843
.org 0x9ebb4
	strb r0, [r3, #11]	@ 0009ebb4 d872
.org 0x9ebb6
	ldrb r0, [r3, #28]	@ 0009ebb6 187f
.org 0x9ebb8
	strb r0, [r3, #29]	@ 0009ebb8 5877
.org 0x9ebba
	str r6, [r3, #40]	@ 0009ebba 9e62
.org 0x9ebbc
	ldr r0, [r7, #0]	@ 0009ebbc 3868
.org 0x9ebbe
	ldr r1, [r7, #4]	@ 0009ebbe 7968
.org 0x9ebc0
	str r0, [r3, #84]	@ 0009ebc0 5865
.org 0x9ebc2
	str r1, [r3, #88]	@ 0009ebc2 9965
.org 0x9ebc4
	strb r5, [r3, #16]	@ 0009ebc4 1d74
.org 0x9ebc6
	strb r4, [r3, #17]	@ 0009ebc6 5c74
.org 0x9ebc8
	adds r0, r3, #0	@ 0009ebc8 181c
.org 0x9ebca
	pop {r4, r5, r6, r7}	@ 0009ebca f0bc
.org 0x9ebcc
	pop {r1}	@ 0009ebcc 02bc
.org 0x9ebce
	bx r1	@ 0009ebce 0847

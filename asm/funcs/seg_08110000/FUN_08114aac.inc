@ FUN_08114aac  entry 0x08114aac  size 88
.thumb
.org 0x114aac
FUN_08114aac:
	push {r4, r5, r6, lr}	@ 00114aac 70b5
.org 0x114aae
	adds r6, r0, #0	@ 00114aae 061c
.org 0x114ab0
	ldr r5, [pc, #80]	@ 00114ab0 144d
.org 0x114ab2
	ldr r1, [pc, #84]	@ 00114ab2 1549
.org 0x114ab4
	adds r0, r5, r1	@ 00114ab4 6818
.org 0x114ab6
	movs r4, #0	@ 00114ab6 0024
.org 0x114ab8
	movs r1, #32	@ 00114ab8 2021
.org 0x114aba
	strb r1, [r0, #0]	@ 00114aba 0170
.org 0x114abc
	ldr r2, [pc, #76]	@ 00114abc 134a
.org 0x114abe
	adds r0, r5, r2	@ 00114abe a818
.org 0x114ac0
	strb r1, [r0, #0]	@ 00114ac0 0170
.org 0x114ac2
	subs r2, #1	@ 00114ac2 013a
.org 0x114ac4
	adds r0, r5, r2	@ 00114ac4 a818
.org 0x114ac6
	strb r1, [r0, #0]	@ 00114ac6 0170
.org 0x114ac8
	movs r1, #129	@ 00114ac8 8121
.org 0x114aca
	lsls r1, r1, #3	@ 00114aca c900
.org 0x114acc
	adds r0, r5, r1	@ 00114acc 6818
.org 0x114ace
	str r4, [r0, #0]	@ 00114ace 0460
.org 0x114ad0
	bl 0x2348	@ 00114ad0 edf63afc
.org 0x114ad4
	ldr r0, [pc, #56]	@ 00114ad4 0e48
.org 0x114ad6
	strh r4, [r0, #0]	@ 00114ad6 0480
.org 0x114ad8
	ldr r1, [pc, #56]	@ 00114ad8 0e49
.org 0x114ada
	strh r4, [r1, #0]	@ 00114ada 0c80
.org 0x114adc
	movs r0, #255	@ 00114adc ff20
.org 0x114ade
	strb r0, [r1, #14]	@ 00114ade 8873
.org 0x114ae0
	ldr r0, [pc, #52]	@ 00114ae0 0d48
.org 0x114ae2
	strh r4, [r0, #0]	@ 00114ae2 0480
.org 0x114ae4
	strh r4, [r5, #0]	@ 00114ae4 2c80
.org 0x114ae6
	ldr r2, [pc, #52]	@ 00114ae6 0d4a
.org 0x114ae8
	ldrh r1, [r2, #0]	@ 00114ae8 1188
.org 0x114aea
	ldr r0, [pc, #52]	@ 00114aea 0d48
.org 0x114aec
	ands r0, r1	@ 00114aec 0840
.org 0x114aee
	ldr r1, [pc, #52]	@ 00114aee 0d49
.org 0x114af0
	ands r0, r1	@ 00114af0 0840
.org 0x114af2
	strh r0, [r2, #0]	@ 00114af2 1080
.org 0x114af4
	movs r1, #192	@ 00114af4 c021
.org 0x114af6
	lsls r1, r1, #2	@ 00114af6 8900
.org 0x114af8
	adds r0, r6, #0	@ 00114af8 301c
.org 0x114afa
	bl 0x1126ac	@ 00114afa fdf7d7fd
.org 0x114afe
	pop {r4, r5, r6}	@ 00114afe 70bc
.org 0x114b00
	pop {r0}	@ 00114b00 01bc
.org 0x114b02
	bx r0	@ 00114b02 0047

@ FUN_08073784  entry 0x08073784  size 90
.thumb
.org 0x73784
FUN_08073784:
	push {r4, r5, r6, r7, lr}	@ 00073784 f0b5
.org 0x73786
	sub sp, #8	@ 00073786 82b0
.org 0x73788
	ldr r2, [r0, #84]	@ 00073788 426d
.org 0x7378a
	ldr r0, [r0, #88]	@ 0007378a 806d
.org 0x7378c
	ldr r1, [pc, #68]	@ 0007378c 1149
.org 0x7378e
	adds r3, r0, r1	@ 0007378e 4318
.org 0x73790
	movs r1, #160	@ 00073790 a021
.org 0x73792
	lsls r1, r1, #4	@ 00073792 0901
.org 0x73794
	adds r4, r2, r1	@ 00073794 5418
.org 0x73796
	movs r7, #0	@ 00073796 0027
.org 0x73798
	ldr r1, [pc, #60]	@ 00073798 0f49
.org 0x7379a
	adds r6, r0, r1	@ 0007379a 4618
.org 0x7379c
	adds r0, r4, #0	@ 0007379c 201c
.org 0x7379e
	adds r1, r6, #0	@ 0007379e 311c
.org 0x737a0
	str r2, [sp, #0]	@ 000737a0 0092
.org 0x737a2
	str r3, [sp, #4]	@ 000737a2 0193
.org 0x737a4
	bl 0x7c7c	@ 000737a4 94f76afa
.org 0x737a8
	lsls r0, r0, #16	@ 000737a8 0004
.org 0x737aa
	ldr r2, [sp, #0]	@ 000737aa 009a
.org 0x737ac
	ldr r3, [sp, #4]	@ 000737ac 019b
.org 0x737ae
	cmp r0, #0	@ 000737ae 0028
.org 0x737b0
	bne.n 0x737dc	@ 000737b0 14d1
.org 0x737b2
	movs r0, #128	@ 000737b2 8020
.org 0x737b4
	lsls r0, r0, #5	@ 000737b4 4001
.org 0x737b6
	adds r6, r6, r0	@ 000737b6 3618
.org 0x737b8
	adds r7, #1	@ 000737b8 0137
.org 0x737ba
	cmp r7, #1	@ 000737ba 012f
.org 0x737bc
	ble.n 0x7379c	@ 000737bc eedd
.org 0x737be
	movs r0, #224	@ 000737be e020
.org 0x737c0
	lsls r0, r0, #4	@ 000737c0 0001
.org 0x737c2
	adds r1, r3, r0	@ 000737c2 1918
.org 0x737c4
	adds r0, r4, #0	@ 000737c4 201c
.org 0x737c6
	bl 0x7c7c	@ 000737c6 94f759fa
.org 0x737ca
	lsls r0, r0, #16	@ 000737ca 0004
.org 0x737cc
	cmp r0, #0	@ 000737cc 0028
.org 0x737ce
	bne.n 0x737dc	@ 000737ce 05d1
.org 0x737d0
	movs r0, #0	@ 000737d0 0020
.org 0x737d2
	b.n 0x737de	@ 000737d2 04e0
.org 0x737d4
	.byte 0x00,0xf2,0xff,0xff	@ 000737d4 data
.org 0x737d8
	.byte 0x00,0xe4,0xff,0xff	@ 000737d8 data
.org 0x737dc
	movs r0, #1	@ 000737dc 0120

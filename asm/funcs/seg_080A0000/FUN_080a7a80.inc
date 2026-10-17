@ FUN_080a7a80  entry 0x080a7a80  size 128
.thumb
.org 0xa7a80
FUN_080a7a80:
	push {r4, r5, lr}	@ 000a7a80 30b5
.org 0xa7a82
	adds r4, r0, #0	@ 000a7a82 041c
.org 0xa7a84
	ldr r1, [r4, #40]	@ 000a7a84 a16a
.org 0xa7a86
	ldrb r0, [r4, #10]	@ 000a7a86 a07a
.org 0xa7a88
	lsrs r5, r0, #4	@ 000a7a88 0509
.org 0xa7a8a
	movs r0, #1	@ 000a7a8a 0120
.org 0xa7a8c
	ands r5, r0	@ 000a7a8c 0540
.org 0xa7a8e
	ldrb r0, [r1, #12]	@ 000a7a8e 087b
.org 0xa7a90
	cmp r0, #4	@ 000a7a90 0428
.org 0xa7a92
	bne.n 0xa7ab4	@ 000a7a92 0fd1
.org 0xa7a94
	ldr r1, [pc, #24]	@ 000a7a94 0649
.org 0xa7a96
	ldrb r0, [r4, #9]	@ 000a7a96 607a
.org 0xa7a98
	lsls r0, r0, #2	@ 000a7a98 8000
.org 0xa7a9a
	adds r0, r0, r1	@ 000a7a9a 4018
.org 0xa7a9c
	movs r1, #2	@ 000a7a9c 0221
.org 0xa7a9e
	str r1, [r4, #12]	@ 000a7a9e e160
.org 0xa7aa0
	ldr r0, [r0, #0]	@ 000a7aa0 0068
.org 0xa7aa2
	ldr r0, [r0, #8]	@ 000a7aa2 8068
.org 0xa7aa4
	str r0, [r4, #20]	@ 000a7aa4 6061
.org 0xa7aa6
	adds r0, r4, #0	@ 000a7aa6 201c
.org 0xa7aa8
	bl 0xa7b0c	@ 000a7aa8 00f030f8
.org 0xa7aac
	b.n 0xa7b00	@ 000a7aac 28e0
.org 0xa7aae
	.byte 0x00	@ 000a7aae data
.org 0xa7aaf
	.byte 0x00	@ 000a7aaf data
.org 0xa7ab0
	.byte 0x40,0xdb,0x85,0x08	@ 000a7ab0 data
.org 0xa7ab4
	adds r0, r4, #0	@ 000a7ab4 201c
.org 0xa7ab6
	bl 0x1cff0	@ 000a7ab6 75f79bfa
.org 0xa7aba
	ldrb r0, [r4, #18]	@ 000a7aba a07c
.org 0xa7abc
	cmp r0, #0	@ 000a7abc 0028
.org 0xa7abe
	beq.n 0xa7b00	@ 000a7abe 1fd0
.org 0xa7ac0
	subs r0, #1	@ 000a7ac0 0138
.org 0xa7ac2
	strb r0, [r4, #18]	@ 000a7ac2 a074
.org 0xa7ac4
	ldrb r1, [r4, #18]	@ 000a7ac4 a17c
.org 0xa7ac6
	movs r0, #80	@ 000a7ac6 5020
.org 0xa7ac8
	subs r0, r0, r1	@ 000a7ac8 401a
.org 0xa7aca
	lsls r0, r0, #6	@ 000a7aca 8001
.org 0xa7acc
	movs r1, #80	@ 000a7acc 5021
.org 0xa7ace
	bl 0x128fb8	@ 000a7ace 81f073fa
.org 0xa7ad2
	ldr r1, [pc, #52]	@ 000a7ad2 0d49
.org 0xa7ad4
	lsls r0, r0, #24	@ 000a7ad4 0006
.org 0xa7ad6
	lsrs r0, r0, #23	@ 000a7ad6 c00d
.org 0xa7ad8
	adds r0, r0, r1	@ 000a7ad8 4018
.org 0xa7ada
	movs r1, #0	@ 000a7ada 0021
.org 0xa7adc
	ldrsh r2, [r0, r1]	@ 000a7adc 425e
.org 0xa7ade
	lsls r1, r5, #1	@ 000a7ade 6900
.org 0xa7ae0
	subs r1, #1	@ 000a7ae0 0139
.org 0xa7ae2
	lsls r0, r1, #1	@ 000a7ae2 4800
.org 0xa7ae4
	adds r0, r0, r1	@ 000a7ae4 4018
.org 0xa7ae6
	lsls r0, r0, #1	@ 000a7ae6 4000
.org 0xa7ae8
	negs r0, r0	@ 000a7ae8 4042
.org 0xa7aea
	adds r1, r2, #0	@ 000a7aea 111c
.org 0xa7aec
	muls r1, r0	@ 000a7aec 4143
.org 0xa7aee
	ldr r0, [r4, #100]	@ 000a7aee 606e
.org 0xa7af0
	adds r0, r0, r1	@ 000a7af0 4018
.org 0xa7af2
	str r0, [r4, #84]	@ 000a7af2 6065
.org 0xa7af4
	lsls r1, r2, #1	@ 000a7af4 5100
.org 0xa7af6
	adds r1, r1, r2	@ 000a7af6 8918
.org 0xa7af8
	lsls r1, r1, #2	@ 000a7af8 8900
.org 0xa7afa
	ldr r0, [r4, #104]	@ 000a7afa a06e
.org 0xa7afc
	adds r0, r0, r1	@ 000a7afc 4018
.org 0xa7afe
	str r0, [r4, #88]	@ 000a7afe a065

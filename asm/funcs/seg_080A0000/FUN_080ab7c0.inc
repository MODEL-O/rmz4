@ FUN_080ab7c0  entry 0x080ab7c0  size 96
.thumb
.org 0xab7c0
FUN_080ab7c0:
	push {r4, lr}	@ 000ab7c0 10b5
.org 0xab7c2
	adds r4, r0, #0	@ 000ab7c2 041c
.org 0xab7c4
	ldr r0, [r4, #40]	@ 000ab7c4 a06a
.org 0xab7c6
	ldrb r0, [r0, #12]	@ 000ab7c6 007b
.org 0xab7c8
	cmp r0, #4	@ 000ab7c8 0428
.org 0xab7ca
	bne.n 0xab7ec	@ 000ab7ca 0fd1
.org 0xab7cc
	ldr r1, [pc, #24]	@ 000ab7cc 0649
.org 0xab7ce
	ldrb r0, [r4, #9]	@ 000ab7ce 607a
.org 0xab7d0
	lsls r0, r0, #2	@ 000ab7d0 8000
.org 0xab7d2
	adds r0, r0, r1	@ 000ab7d2 4018
.org 0xab7d4
	movs r1, #2	@ 000ab7d4 0221
.org 0xab7d6
	str r1, [r4, #12]	@ 000ab7d6 e160
.org 0xab7d8
	ldr r0, [r0, #0]	@ 000ab7d8 0068
.org 0xab7da
	ldr r0, [r0, #8]	@ 000ab7da 8068
.org 0xab7dc
	str r0, [r4, #20]	@ 000ab7dc 6061
.org 0xab7de
	adds r0, r4, #0	@ 000ab7de 201c
.org 0xab7e0
	bl 0xab828	@ 000ab7e0 00f022f8
.org 0xab7e4
	b.n 0xab820	@ 000ab7e4 1ce0
.org 0xab7e6
	.byte 0x00	@ 000ab7e6 data
.org 0xab7e7
	.byte 0x00	@ 000ab7e7 data
.org 0xab7e8
	.byte 0x40,0xdb,0x85,0x08	@ 000ab7e8 data
.org 0xab7ec
	adds r0, r4, #0	@ 000ab7ec 201c
.org 0xab7ee
	bl 0x1cff0	@ 000ab7ee 71f7fffb
.org 0xab7f2
	ldrb r0, [r4, #18]	@ 000ab7f2 a07c
.org 0xab7f4
	cmp r0, #0	@ 000ab7f4 0028
.org 0xab7f6
	beq.n 0xab7fc	@ 000ab7f6 01d0
.org 0xab7f8
	subs r0, #1	@ 000ab7f8 0138
.org 0xab7fa
	strb r0, [r4, #18]	@ 000ab7fa a074
.org 0xab7fc
	ldrb r1, [r4, #18]	@ 000ab7fc a17c
.org 0xab7fe
	ldr r0, [r4, #92]	@ 000ab7fe e06d
.org 0xab800
	muls r0, r1	@ 000ab800 4843
.org 0xab802
	movs r1, #48	@ 000ab802 3021
.org 0xab804
	bl 0x128fb8	@ 000ab804 7df0d8fb
.org 0xab808
	ldr r1, [r4, #84]	@ 000ab808 616d
.org 0xab80a
	adds r1, r1, r0	@ 000ab80a 0918
.org 0xab80c
	str r1, [r4, #84]	@ 000ab80c 6165
.org 0xab80e
	ldrb r1, [r4, #18]	@ 000ab80e a17c
.org 0xab810
	ldr r0, [r4, #96]	@ 000ab810 206e
.org 0xab812
	muls r0, r1	@ 000ab812 4843
.org 0xab814
	movs r1, #48	@ 000ab814 3021
.org 0xab816
	bl 0x128fb8	@ 000ab816 7df0cffb
.org 0xab81a
	ldr r1, [r4, #88]	@ 000ab81a a16d
.org 0xab81c
	adds r1, r1, r0	@ 000ab81c 0918
.org 0xab81e
	str r1, [r4, #88]	@ 000ab81e a165

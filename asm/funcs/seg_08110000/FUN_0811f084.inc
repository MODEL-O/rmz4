@ FUN_0811f084  entry 0x0811f084  size 96
.thumb
.org 0x11f084
FUN_0811f084:
	push {r4, r5, lr}	@ 0011f084 30b5
.org 0x11f086
	adds r4, r0, #0	@ 0011f086 041c
.org 0x11f088
	ldr r1, [pc, #28]	@ 0011f088 0749
.org 0x11f08a
	adds r0, r4, r1	@ 0011f08a 6018
.org 0x11f08c
	ldr r5, [r0, #0]	@ 0011f08c 0568
.org 0x11f08e
	ldrb r0, [r4, #2]	@ 0011f08e a078
.org 0x11f090
	cmp r0, #0	@ 0011f090 0028
.org 0x11f092
	bne.n 0x11f0b0	@ 0011f092 0dd1
.org 0x11f094
	ldr r0, [pc, #20]	@ 0011f094 0548
.org 0x11f096
	ldrh r1, [r0, #4]	@ 0011f096 8188
.org 0x11f098
	movs r0, #2	@ 0011f098 0220
.org 0x11f09a
	ands r0, r1	@ 0011f09a 0840
.org 0x11f09c
	cmp r0, #0	@ 0011f09c 0028
.org 0x11f09e
	beq.n 0x11f0b0	@ 0011f09e 07d0
.org 0x11f0a0
	movs r0, #3	@ 0011f0a0 0320
.org 0x11f0a2
	strb r0, [r4, #1]	@ 0011f0a2 6070
.org 0x11f0a4
	b.n 0x11f0c0	@ 0011f0a4 0ce0
.org 0x11f0a6
	.byte 0x00	@ 0011f0a6 data
.org 0x11f0a7
	.byte 0x00	@ 0011f0a7 data
.org 0x11f0a8
	.byte 0xa8,0x63,0x00,0x00	@ 0011f0a8 data
.org 0x11f0ac
	.byte 0x60,0x07,0x00,0x02	@ 0011f0ac data
.org 0x11f0b0
	ldr r0, [pc, #60]	@ 0011f0b0 0f48
.org 0x11f0b2
	ldrb r1, [r4, #2]	@ 0011f0b2 a178
.org 0x11f0b4
	lsls r1, r1, #2	@ 0011f0b4 8900
.org 0x11f0b6
	adds r1, r1, r0	@ 0011f0b6 0918
.org 0x11f0b8
	ldr r1, [r1, #0]	@ 0011f0b8 0968
.org 0x11f0ba
	adds r0, r4, #0	@ 0011f0ba 201c
.org 0x11f0bc
	bl 0x128f80	@ 0011f0bc 09f060ff
.org 0x11f0c0
	movs r0, #65	@ 0011f0c0 4120
.org 0x11f0c2
	bl 0x25d8	@ 0011f0c2 e3f689fa
.org 0x11f0c6
	ldr r1, [pc, #44]	@ 0011f0c6 0b49
.org 0x11f0c8
	adds r0, r5, #0	@ 0011f0c8 281c
.org 0x11f0ca
	adds r0, #245	@ 0011f0ca f530
.org 0x11f0cc
	ldrb r0, [r0, #0]	@ 0011f0cc 0078
.org 0x11f0ce
	adds r0, #90	@ 0011f0ce 5a30
.org 0x11f0d0
	lsls r0, r0, #1	@ 0011f0d0 4000
.org 0x11f0d2
	adds r0, r0, r1	@ 0011f0d2 4018
.org 0x11f0d4
	ldrh r0, [r0, #0]	@ 0011f0d4 0088
.org 0x11f0d6
	ldr r1, [pc, #32]	@ 0011f0d6 0849
.org 0x11f0d8
	adds r0, r0, r1	@ 0011f0d8 4018
.org 0x11f0da
	movs r1, #21	@ 0011f0da 1521
.org 0x11f0dc
	movs r2, #1	@ 0011f0dc 0122
.org 0x11f0de
	bl 0x10d85c	@ 0011f0de eef7bdfb
.org 0x11f0e2
	adds r0, r4, #0	@ 0011f0e2 201c

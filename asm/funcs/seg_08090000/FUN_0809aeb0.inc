@ FUN_0809aeb0  entry 0x0809aeb0  size 78
.thumb
.org 0x9aeb0
FUN_0809aeb0:
	push {r4, lr}	@ 0009aeb0 10b5
.org 0x9aeb2
	adds r4, r0, #0	@ 0009aeb2 041c
.org 0x9aeb4
	ldr r0, [r4, #40]	@ 0009aeb4 a06a
.org 0x9aeb6
	ldrb r0, [r0, #12]	@ 0009aeb6 007b
.org 0x9aeb8
	cmp r0, #4	@ 0009aeb8 0428
.org 0x9aeba
	bne.n 0x9aedc	@ 0009aeba 0fd1
.org 0x9aebc
	ldr r1, [pc, #24]	@ 0009aebc 0649
.org 0x9aebe
	ldrb r0, [r4, #9]	@ 0009aebe 607a
.org 0x9aec0
	lsls r0, r0, #2	@ 0009aec0 8000
.org 0x9aec2
	adds r0, r0, r1	@ 0009aec2 4018
.org 0x9aec4
	movs r1, #2	@ 0009aec4 0221
.org 0x9aec6
	str r1, [r4, #12]	@ 0009aec6 e160
.org 0x9aec8
	ldr r0, [r0, #0]	@ 0009aec8 0068
.org 0x9aeca
	ldr r0, [r0, #8]	@ 0009aeca 8068
.org 0x9aecc
	str r0, [r4, #20]	@ 0009aecc 6061
.org 0x9aece
	adds r0, r4, #0	@ 0009aece 201c
.org 0x9aed0
	bl 0x9af04	@ 0009aed0 00f018f8
.org 0x9aed4
	b.n 0x9aefe	@ 0009aed4 13e0
.org 0x9aed6
	.byte 0x00	@ 0009aed6 data
.org 0x9aed7
	.byte 0x00	@ 0009aed7 data
.org 0x9aed8
	.byte 0x40,0xdb,0x85,0x08	@ 0009aed8 data
.org 0x9aedc
	adds r0, r4, #0	@ 0009aedc 201c
.org 0x9aede
	bl 0x1cff0	@ 0009aede 82f787f8
.org 0x9aee2
	ldrb r0, [r4, #18]	@ 0009aee2 a07c
.org 0x9aee4
	cmp r0, #0	@ 0009aee4 0028
.org 0x9aee6
	beq.n 0x9aeec	@ 0009aee6 01d0
.org 0x9aee8
	subs r0, #1	@ 0009aee8 0138
.org 0x9aeea
	strb r0, [r4, #18]	@ 0009aeea a074
.org 0x9aeec
	ldrb r1, [r4, #18]	@ 0009aeec a17c
.org 0x9aeee
	ldr r0, [r4, #92]	@ 0009aeee e06d
.org 0x9aef0
	muls r0, r1	@ 0009aef0 4843
.org 0x9aef2
	movs r1, #56	@ 0009aef2 3821
.org 0x9aef4
	bl 0x128fb8	@ 0009aef4 8ef060f8
.org 0x9aef8
	ldr r1, [r4, #84]	@ 0009aef8 616d
.org 0x9aefa
	adds r1, r1, r0	@ 0009aefa 0918
.org 0x9aefc
	str r1, [r4, #84]	@ 0009aefc 6165

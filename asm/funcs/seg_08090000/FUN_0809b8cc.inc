@ FUN_0809b8cc  entry 0x0809b8cc  size 92
.thumb
.org 0x9b8cc
FUN_0809b8cc:
	push {r4, lr}	@ 0009b8cc 10b5
.org 0x9b8ce
	adds r4, r0, #0	@ 0009b8ce 041c
.org 0x9b8d0
	ldrb r0, [r4, #15]	@ 0009b8d0 e07b
.org 0x9b8d2
	cmp r0, #0	@ 0009b8d2 0028
.org 0x9b8d4
	bne.n 0x9b8e4	@ 0009b8d4 06d1
.org 0x9b8d6
	ldr r1, [pc, #40]	@ 0009b8d6 0a49
.org 0x9b8d8
	adds r0, r4, #0	@ 0009b8d8 201c
.org 0x9b8da
	bl 0x1cf00	@ 0009b8da 81f711fb
.org 0x9b8de
	ldrb r0, [r4, #15]	@ 0009b8de e07b
.org 0x9b8e0
	adds r0, #1	@ 0009b8e0 0130
.org 0x9b8e2
	strb r0, [r4, #15]	@ 0009b8e2 e073
.org 0x9b8e4
	adds r0, r4, #0	@ 0009b8e4 201c
.org 0x9b8e6
	bl 0x1cff0	@ 0009b8e6 81f783fb
.org 0x9b8ea
	adds r0, r4, #0	@ 0009b8ea 201c
.org 0x9b8ec
	adds r0, #181	@ 0009b8ec b530
.org 0x9b8ee
	ldrb r0, [r0, #0]	@ 0009b8ee 0078
.org 0x9b8f0
	cmp r0, #0	@ 0009b8f0 0028
.org 0x9b8f2
	beq.n 0x9b904	@ 0009b8f2 07d0
.org 0x9b8f4
	movs r1, #0	@ 0009b8f4 0021
.org 0x9b8f6
	movs r0, #2	@ 0009b8f6 0220
.org 0x9b8f8
	strb r0, [r4, #13]	@ 0009b8f8 6073
.org 0x9b8fa
	strb r1, [r4, #14]	@ 0009b8fa a173
.org 0x9b8fc
	strb r1, [r4, #15]	@ 0009b8fc e173
.org 0x9b8fe
	b.n 0x9b926	@ 0009b8fe 12e0
.org 0x9b900
	.byte 0x01,0xa8,0x00,0x00	@ 0009b900 data
.org 0x9b904
	adds r0, r4, #0	@ 0009b904 201c
.org 0x9b906
	adds r0, #115	@ 0009b906 7330
.org 0x9b908
	ldrb r0, [r0, #0]	@ 0009b908 0078
.org 0x9b90a
	cmp r0, #3	@ 0009b90a 0328
.org 0x9b90c
	bne.n 0x9b926	@ 0009b90c 0bd1
.org 0x9b90e
	ldr r1, [pc, #28]	@ 0009b90e 0749
.org 0x9b910
	ldrb r0, [r4, #9]	@ 0009b910 607a
.org 0x9b912
	lsls r0, r0, #2	@ 0009b912 8000
.org 0x9b914
	adds r0, r0, r1	@ 0009b914 4018
.org 0x9b916
	movs r1, #2	@ 0009b916 0221
.org 0x9b918
	str r1, [r4, #12]	@ 0009b918 e160
.org 0x9b91a
	ldr r0, [r0, #0]	@ 0009b91a 0068
.org 0x9b91c
	ldr r0, [r0, #8]	@ 0009b91c 8068
.org 0x9b91e
	str r0, [r4, #20]	@ 0009b91e 6061
.org 0x9b920
	adds r0, r4, #0	@ 0009b920 201c
.org 0x9b922
	bl 0x9ba14	@ 0009b922 00f077f8
.org 0x9b926
	pop {r4}	@ 0009b926 10bc

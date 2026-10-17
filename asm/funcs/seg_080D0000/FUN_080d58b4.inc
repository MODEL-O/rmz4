@ FUN_080d58b4  entry 0x080d58b4  size 92
.thumb
.org 0xd58b4
FUN_080d58b4:
	push {lr}	@ 000d58b4 00b5
.org 0xd58b6
	adds r3, r0, #0	@ 000d58b6 031c
.org 0xd58b8
	ldrb r1, [r3, #10]	@ 000d58b8 997a
.org 0xd58ba
	movs r0, #1	@ 000d58ba 0120
.org 0xd58bc
	orrs r0, r1	@ 000d58bc 0843
.org 0xd58be
	strb r0, [r3, #10]	@ 000d58be 9872
.org 0xd58c0
	ldrb r1, [r3, #13]	@ 000d58c0 597b
.org 0xd58c2
	cmp r1, #0	@ 000d58c2 0029
.org 0xd58c4
	bne.n 0xd58dc	@ 000d58c4 0ad1
.org 0xd58c6
	ldrb r0, [r3, #18]	@ 000d58c6 987c
.org 0xd58c8
	subs r0, #1	@ 000d58c8 0138
.org 0xd58ca
	strb r0, [r3, #18]	@ 000d58ca 9874
.org 0xd58cc
	lsls r0, r0, #24	@ 000d58cc 0006
.org 0xd58ce
	lsrs r0, r0, #24	@ 000d58ce 000e
.org 0xd58d0
	cmp r0, #0	@ 000d58d0 0028
.org 0xd58d2
	bne.n 0xd590c	@ 000d58d2 1bd1
.org 0xd58d4
	strb r0, [r3, #18]	@ 000d58d4 9874
.org 0xd58d6
	adds r0, r1, #1	@ 000d58d6 481c
.org 0xd58d8
	strb r0, [r3, #13]	@ 000d58d8 5873
.org 0xd58da
	b.n 0xd590c	@ 000d58da 17e0
.org 0xd58dc
	adds r2, r3, #0	@ 000d58dc 1a1c
.org 0xd58de
	adds r2, #125	@ 000d58de 7d32
.org 0xd58e0
	ldr r1, [pc, #44]	@ 000d58e0 0b49
.org 0xd58e2
	adds r0, r1, #0	@ 000d58e2 081c
.org 0xd58e4
	ldrb r1, [r2, #0]	@ 000d58e4 1178
.org 0xd58e6
	adds r0, r0, r1	@ 000d58e6 4018
.org 0xd58e8
	adds r1, r3, #0	@ 000d58e8 191c
.org 0xd58ea
	adds r1, #126	@ 000d58ea 7e31
.org 0xd58ec
	strh r0, [r1, #0]	@ 000d58ec 0880
.org 0xd58ee
	ldrb r0, [r2, #0]	@ 000d58ee 1078
.org 0xd58f0
	subs r0, #1	@ 000d58f0 0138
.org 0xd58f2
	strb r0, [r2, #0]	@ 000d58f2 1070
.org 0xd58f4
	lsls r0, r0, #24	@ 000d58f4 0006
.org 0xd58f6
	cmp r0, #0	@ 000d58f6 0028
.org 0xd58f8
	bne.n 0xd590c	@ 000d58f8 08d1
.org 0xd58fa
	ldr r1, [pc, #24]	@ 000d58fa 0649
.org 0xd58fc
	ldrb r0, [r3, #9]	@ 000d58fc 587a
.org 0xd58fe
	lsls r0, r0, #2	@ 000d58fe 8000
.org 0xd5900
	adds r0, r0, r1	@ 000d5900 4018
.org 0xd5902
	movs r1, #2	@ 000d5902 0221
.org 0xd5904
	str r1, [r3, #12]	@ 000d5904 d960
.org 0xd5906
	ldr r0, [r0, #0]	@ 000d5906 0068
.org 0xd5908
	ldr r0, [r0, #8]	@ 000d5908 8068
.org 0xd590a
	str r0, [r3, #20]	@ 000d590a 5861
.org 0xd590c
	pop {r0}	@ 000d590c 01bc
.org 0xd590e
	bx r0	@ 000d590e 0047

@ FUN_0804c8e0  entry 0x0804c8e0  size 80
.thumb
.org 0x4c8e0
FUN_0804c8e0:
	push {r4, r5, lr}	@ 0004c8e0 30b5
.org 0x4c8e2
	adds r4, r0, #0	@ 0004c8e2 041c
.org 0x4c8e4
	ldr r1, [pc, #72]	@ 0004c8e4 1249
.org 0x4c8e6
	ldrb r0, [r4, #9]	@ 0004c8e6 607a
.org 0x4c8e8
	lsls r0, r0, #2	@ 0004c8e8 8000
.org 0x4c8ea
	adds r0, r0, r1	@ 0004c8ea 4018
.org 0x4c8ec
	movs r1, #1	@ 0004c8ec 0121
.org 0x4c8ee
	str r1, [r4, #12]	@ 0004c8ee e160
.org 0x4c8f0
	ldr r0, [r0, #0]	@ 0004c8f0 0068
.org 0x4c8f2
	ldr r0, [r0, #4]	@ 0004c8f2 4068
.org 0x4c8f4
	str r0, [r4, #20]	@ 0004c8f4 6061
.org 0x4c8f6
	adds r0, r4, #0	@ 0004c8f6 201c
.org 0x4c8f8
	bl 0x1cc9c	@ 0004c8f8 d0f7d0f9
.org 0x4c8fc
	adds r0, r4, #0	@ 0004c8fc 201c
.org 0x4c8fe
	bl 0x1ceec	@ 0004c8fe d0f7f5fa
.org 0x4c902
	ldrb r1, [r4, #10]	@ 0004c902 a17a
.org 0x4c904
	movs r0, #1	@ 0004c904 0120
.org 0x4c906
	movs r5, #0	@ 0004c906 0025
.org 0x4c908
	orrs r0, r1	@ 0004c908 0843
.org 0x4c90a
	movs r1, #2	@ 0004c90a 0221
.org 0x4c90c
	orrs r0, r1	@ 0004c90c 0843
.org 0x4c90e
	strb r0, [r4, #10]	@ 0004c90e a072
.org 0x4c910
	ldr r1, [pc, #32]	@ 0004c910 0849
.org 0x4c912
	adds r0, r4, #0	@ 0004c912 201c
.org 0x4c914
	bl 0x1cf00	@ 0004c914 d0f7f4fa
.org 0x4c918
	adds r0, r4, #0	@ 0004c918 201c
.org 0x4c91a
	bl 0x1cff0	@ 0004c91a d0f769fb
.org 0x4c91e
	str r5, [r4, #96]	@ 0004c91e 2566
.org 0x4c920
	movs r0, #64	@ 0004c920 4020
.org 0x4c922
	strb r0, [r4, #18]	@ 0004c922 a074
.org 0x4c924
	adds r0, r4, #0	@ 0004c924 201c
.org 0x4c926
	bl 0x4c728	@ 0004c926 fff7fffe
.org 0x4c92a
	pop {r4, r5}	@ 0004c92a 30bc
.org 0x4c92c
	pop {r0}	@ 0004c92c 01bc
.org 0x4c92e
	bx r0	@ 0004c92e 0047

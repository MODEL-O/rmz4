@ FUN_0810b8d0  entry 0x0810b8d0  size 94
.thumb
.org 0x10b8d0
FUN_0810b8d0:
	push {r4, r5, lr}	@ 0010b8d0 30b5
.org 0x10b8d2
	adds r4, r0, #0	@ 0010b8d2 041c
.org 0x10b8d4
	bl 0x1cc9c	@ 0010b8d4 11f7e2f9
.org 0x10b8d8
	ldrb r1, [r4, #10]	@ 0010b8d8 a17a
.org 0x10b8da
	movs r0, #1	@ 0010b8da 0120
.org 0x10b8dc
	movs r5, #0	@ 0010b8dc 0025
.org 0x10b8de
	orrs r0, r1	@ 0010b8de 0843
.org 0x10b8e0
	movs r1, #2	@ 0010b8e0 0221
.org 0x10b8e2
	orrs r0, r1	@ 0010b8e2 0843
.org 0x10b8e4
	strb r0, [r4, #10]	@ 0010b8e4 a072
.org 0x10b8e6
	ldr r1, [pc, #72]	@ 0010b8e6 1249
.org 0x10b8e8
	adds r0, r4, #0	@ 0010b8e8 201c
.org 0x10b8ea
	bl 0x1cf00	@ 0010b8ea 11f709fb
.org 0x10b8ee
	adds r0, r4, #0	@ 0010b8ee 201c
.org 0x10b8f0
	adds r0, #76	@ 0010b8f0 4c30
.org 0x10b8f2
	strb r5, [r0, #0]	@ 0010b8f2 0570
.org 0x10b8f4
	adds r2, r4, #0	@ 0010b8f4 221c
.org 0x10b8f6
	adds r2, #74	@ 0010b8f6 4a32
.org 0x10b8f8
	ldrb r1, [r2, #0]	@ 0010b8f8 1178
.org 0x10b8fa
	movs r0, #17	@ 0010b8fa 1120
.org 0x10b8fc
	negs r0, r0	@ 0010b8fc 4042
.org 0x10b8fe
	ands r0, r1	@ 0010b8fe 0840
.org 0x10b900
	strb r0, [r2, #0]	@ 0010b900 1070
.org 0x10b902
	ldrb r1, [r4, #10]	@ 0010b902 a17a
.org 0x10b904
	movs r0, #239	@ 0010b904 ef20
.org 0x10b906
	ands r0, r1	@ 0010b906 0840
.org 0x10b908
	strb r0, [r4, #10]	@ 0010b908 a072
.org 0x10b90a
	movs r0, #132	@ 0010b90a 8420
.org 0x10b90c
	lsls r0, r0, #9	@ 0010b90c 4002
.org 0x10b90e
	str r0, [r4, #84]	@ 0010b90e 6065
.org 0x10b910
	ldr r1, [pc, #32]	@ 0010b910 0849
.org 0x10b912
	ldrb r0, [r4, #9]	@ 0010b912 607a
.org 0x10b914
	lsls r0, r0, #2	@ 0010b914 8000
.org 0x10b916
	adds r0, r0, r1	@ 0010b916 4018
.org 0x10b918
	movs r1, #1	@ 0010b918 0121
.org 0x10b91a
	str r1, [r4, #12]	@ 0010b91a e160
.org 0x10b91c
	ldr r0, [r0, #0]	@ 0010b91c 0068
.org 0x10b91e
	ldr r0, [r0, #4]	@ 0010b91e 4068
.org 0x10b920
	str r0, [r4, #20]	@ 0010b920 6061
.org 0x10b922
	adds r0, r4, #0	@ 0010b922 201c
.org 0x10b924
	bl 0x10b774	@ 0010b924 fff726ff
.org 0x10b928
	pop {r4, r5}	@ 0010b928 30bc
.org 0x10b92a
	pop {r0}	@ 0010b92a 01bc
.org 0x10b92c
	bx r0	@ 0010b92c 0047

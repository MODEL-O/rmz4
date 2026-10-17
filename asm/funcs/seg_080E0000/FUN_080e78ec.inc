@ FUN_080e78ec  entry 0x080e78ec  size 84
.thumb
.org 0xe78ec
FUN_080e78ec:
	push {r4, lr}	@ 000e78ec 10b5
.org 0xe78ee
	sub sp, #8	@ 000e78ee 82b0
.org 0xe78f0
	adds r4, r0, #0	@ 000e78f0 041c
.org 0xe78f2
	ldr r1, [pc, #76]	@ 000e78f2 1349
.org 0xe78f4
	mov r0, sp	@ 000e78f4 6846
.org 0xe78f6
	movs r2, #8	@ 000e78f6 0822
.org 0xe78f8
	bl 0x129258	@ 000e78f8 41f0aefc
.org 0xe78fc
	ldr r0, [r4, #116]	@ 000e78fc 606f
.org 0xe78fe
	movs r1, #3	@ 000e78fe 0321
.org 0xe7900
	ands r0, r1	@ 000e7900 0840
.org 0xe7902
	lsls r0, r0, #1	@ 000e7902 4000
.org 0xe7904
	add r0, sp	@ 000e7904 6844
.org 0xe7906
	movs r2, #0	@ 000e7906 0022
.org 0xe7908
	ldrsh r1, [r0, r2]	@ 000e7908 815e
.org 0xe790a
	ldr r0, [r4, #100]	@ 000e790a 606e
.org 0xe790c
	adds r0, r0, r1	@ 000e790c 4018
.org 0xe790e
	str r0, [r4, #84]	@ 000e790e 6065
.org 0xe7910
	adds r0, r4, #0	@ 000e7910 201c
.org 0xe7912
	bl 0x1cff0	@ 000e7912 35f76dfb
.org 0xe7916
	ldr r0, [r4, #116]	@ 000e7916 606f
.org 0xe7918
	subs r0, #1	@ 000e7918 0138
.org 0xe791a
	str r0, [r4, #116]	@ 000e791a 6067
.org 0xe791c
	cmp r0, #0	@ 000e791c 0028
.org 0xe791e
	bne.n 0xe7938	@ 000e791e 0bd1
.org 0xe7920
	ldr r1, [pc, #32]	@ 000e7920 0849
.org 0xe7922
	ldrb r0, [r4, #9]	@ 000e7922 607a
.org 0xe7924
	lsls r0, r0, #2	@ 000e7924 8000
.org 0xe7926
	adds r0, r0, r1	@ 000e7926 4018
.org 0xe7928
	movs r1, #2	@ 000e7928 0221
.org 0xe792a
	str r1, [r4, #12]	@ 000e792a e160
.org 0xe792c
	ldr r0, [r0, #0]	@ 000e792c 0068
.org 0xe792e
	ldr r0, [r0, #8]	@ 000e792e 8068
.org 0xe7930
	str r0, [r4, #20]	@ 000e7930 6061
.org 0xe7932
	adds r0, r4, #0	@ 000e7932 201c
.org 0xe7934
	bl 0xe7948	@ 000e7934 00f008f8
.org 0xe7938
	add sp, #8	@ 000e7938 02b0
.org 0xe793a
	pop {r4}	@ 000e793a 10bc
.org 0xe793c
	pop {r0}	@ 000e793c 01bc
.org 0xe793e
	bx r0	@ 000e793e 0047

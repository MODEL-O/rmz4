@ FUN_0807b90c  entry 0x0807b90c  size 98
.thumb
.org 0x7b90c
FUN_0807b90c:
	push {r4, r5, lr}	@ 0007b90c 30b5
.org 0x7b90e
	sub sp, #8	@ 0007b90e 82b0
.org 0x7b910
	adds r4, r0, #0	@ 0007b910 041c
.org 0x7b912
	ldr r1, [pc, #92]	@ 0007b912 1749
.org 0x7b914
	mov r0, sp	@ 0007b914 6846
.org 0x7b916
	movs r2, #5	@ 0007b916 0522
.org 0x7b918
	bl 0x129258	@ 0007b918 adf09efc
.org 0x7b91c
	ldr r1, [r4, #84]	@ 0007b91c 616d
.org 0x7b91e
	adds r0, r4, #0	@ 0007b91e 201c
.org 0x7b920
	bl 0x7e940	@ 0007b920 03f00ef8
.org 0x7b924
	add r0, sp	@ 0007b924 6844
.org 0x7b926
	movs r5, #0	@ 0007b926 0025
.org 0x7b928
	strb r5, [r0, #0]	@ 0007b928 0570
.org 0x7b92a
	mov r0, sp	@ 0007b92a 6846
.org 0x7b92c
	movs r1, #5	@ 0007b92c 0521
.org 0x7b92e
	bl 0x7eb38	@ 0007b92e 03f003f9
.org 0x7b932
	adds r3, r4, #0	@ 0007b932 231c
.org 0x7b934
	adds r3, #200	@ 0007b934 c833
.org 0x7b936
	adds r2, r4, #0	@ 0007b936 221c
.org 0x7b938
	adds r2, #180	@ 0007b938 b432
.org 0x7b93a
	ldr r1, [pc, #56]	@ 0007b93a 0e49
.org 0x7b93c
	lsls r0, r0, #2	@ 0007b93c 8000
.org 0x7b93e
	adds r0, r0, r1	@ 0007b93e 4018
.org 0x7b940
	ldr r1, [r0, #0]	@ 0007b940 0168
.org 0x7b942
	movs r0, #240	@ 0007b942 f020
.org 0x7b944
	lsls r0, r0, #7	@ 0007b944 c001
.org 0x7b946
	adds r1, r1, r0	@ 0007b946 0918
.org 0x7b948
	ldr r0, [r2, #0]	@ 0007b948 1068
.org 0x7b94a
	adds r0, r0, r1	@ 0007b94a 4018
.org 0x7b94c
	str r0, [r3, #0]	@ 0007b94c 1860
.org 0x7b94e
	ldrb r0, [r4, #14]	@ 0007b94e a07b
.org 0x7b950
	adds r0, #1	@ 0007b950 0130
.org 0x7b952
	strb r0, [r4, #14]	@ 0007b952 a073
.org 0x7b954
	strb r5, [r4, #15]	@ 0007b954 e573
.org 0x7b956
	ldr r1, [pc, #32]	@ 0007b956 0849
.org 0x7b958
	ldrb r0, [r4, #13]	@ 0007b958 607b
.org 0x7b95a
	lsls r0, r0, #2	@ 0007b95a 8000
.org 0x7b95c
	adds r0, r0, r1	@ 0007b95c 4018
.org 0x7b95e
	ldr r1, [r0, #0]	@ 0007b95e 0168
.org 0x7b960
	adds r0, r4, #0	@ 0007b960 201c
.org 0x7b962
	bl 0x128f80	@ 0007b962 adf00dfb
.org 0x7b966
	add sp, #8	@ 0007b966 02b0
.org 0x7b968
	pop {r4, r5}	@ 0007b968 30bc
.org 0x7b96a
	pop {r0}	@ 0007b96a 01bc
.org 0x7b96c
	bx r0	@ 0007b96c 0047

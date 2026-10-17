@ FUN_08009954  entry 0x08009954  size 82
.thumb
.org 0x9954
FUN_08009954:
	push {lr}	@ 00009954 00b5
.org 0x9956
	ldr r1, [pc, #80]	@ 00009956 1449
.org 0x9958
	ldr r2, [pc, #80]	@ 00009958 144a
.org 0x995a
	adds r0, r1, r2	@ 0000995a 8818
.org 0x995c
	movs r3, #0	@ 0000995c 0023
.org 0x995e
	strb r3, [r0, #0]	@ 0000995e 0370
.org 0x9960
	adds r2, #2	@ 00009960 0232
.org 0x9962
	adds r0, r1, r2	@ 00009962 8818
.org 0x9964
	strb r3, [r0, #0]	@ 00009964 0370
.org 0x9966
	adds r2, #2	@ 00009966 0232
.org 0x9968
	adds r0, r1, r2	@ 00009968 8818
.org 0x996a
	str r3, [r0, #0]	@ 0000996a 0360
.org 0x996c
	ldr r0, [pc, #64]	@ 0000996c 1048
.org 0x996e
	adds r2, r1, r0	@ 0000996e 0a18
.org 0x9970
	movs r0, #255	@ 00009970 ff20
.org 0x9972
	lsls r0, r0, #12	@ 00009972 0003
.org 0x9974
	str r0, [r2, #0]	@ 00009974 1060
.org 0x9976
	ldr r0, [pc, #60]	@ 00009976 0f48
.org 0x9978
	adds r2, r1, r0	@ 00009978 0a18
.org 0x997a
	movs r0, #144	@ 0000997a 9020
.org 0x997c
	lsls r0, r0, #9	@ 0000997c 4002
.org 0x997e
	str r0, [r2, #0]	@ 0000997e 1060
.org 0x9980
	ldr r2, [pc, #52]	@ 00009980 0d4a
.org 0x9982
	adds r0, r1, r2	@ 00009982 8818
.org 0x9984
	strb r3, [r0, #0]	@ 00009984 0370
.org 0x9986
	ldr r0, [pc, #52]	@ 00009986 0d48
.org 0x9988
	adds r1, r1, r0	@ 00009988 0918
.org 0x998a
	strh r3, [r1, #0]	@ 0000998a 0b80
.org 0x998c
	ldr r0, [pc, #48]	@ 0000998c 0c48
.org 0x998e
	ldrb r1, [r0, #4]	@ 0000998e 0179
.org 0x9990
	movs r0, #32	@ 00009990 2020
.org 0x9992
	ands r0, r1	@ 00009992 0840
.org 0x9994
	cmp r0, #0	@ 00009994 0028
.org 0x9996
	beq.n 0x99a2	@ 00009996 04d0
.org 0x9998
	movs r0, #16	@ 00009998 1020
.org 0x999a
	movs r1, #1	@ 0000999a 0121
.org 0x999c
	movs r2, #48	@ 0000999c 3022
.org 0x999e
	bl 0x74c0	@ 0000999e fdf78ffd
.org 0x99a2
	pop {r0}	@ 000099a2 01bc
.org 0x99a4
	bx r0	@ 000099a4 0047

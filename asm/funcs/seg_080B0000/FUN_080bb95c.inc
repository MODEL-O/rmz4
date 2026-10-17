@ FUN_080bb95c  entry 0x080bb95c  size 76
.thumb
.org 0xbb95c
FUN_080bb95c:
	push {r4, lr}	@ 000bb95c 10b5
.org 0xbb95e
	adds r4, r0, #0	@ 000bb95e 041c
.org 0xbb960
	ldrb r0, [r4, #15]	@ 000bb960 e07b
.org 0xbb962
	cmp r0, #0	@ 000bb962 0028
.org 0xbb964
	bne.n 0xbb982	@ 000bb964 0dd1
.org 0xbb966
	adds r0, r4, #0	@ 000bb966 201c
.org 0xbb968
	adds r0, #116	@ 000bb968 7430
.org 0xbb96a
	ldr r1, [pc, #60]	@ 000bb96a 0f49
.org 0xbb96c
	bl 0x5784	@ 000bb96c 49f70aff
.org 0xbb970
	ldr r1, [pc, #56]	@ 000bb970 0e49
.org 0xbb972
	adds r0, r4, #0	@ 000bb972 201c
.org 0xbb974
	bl 0x1cf00	@ 000bb974 61f7c4fa
.org 0xbb978
	movs r0, #16	@ 000bb978 1020
.org 0xbb97a
	strb r0, [r4, #18]	@ 000bb97a a074
.org 0xbb97c
	ldrb r0, [r4, #15]	@ 000bb97c e07b
.org 0xbb97e
	adds r0, #1	@ 000bb97e 0130
.org 0xbb980
	strb r0, [r4, #15]	@ 000bb980 e073
.org 0xbb982
	adds r0, r4, #0	@ 000bb982 201c
.org 0xbb984
	bl 0x1cff0	@ 000bb984 61f734fb
.org 0xbb988
	ldrb r0, [r4, #18]	@ 000bb988 a07c
.org 0xbb98a
	cmp r0, #0	@ 000bb98a 0028
.org 0xbb98c
	beq.n 0xbb998	@ 000bb98c 04d0
.org 0xbb98e
	subs r0, #1	@ 000bb98e 0138
.org 0xbb990
	strb r0, [r4, #18]	@ 000bb990 a074
.org 0xbb992
	lsls r0, r0, #24	@ 000bb992 0006
.org 0xbb994
	cmp r0, #0	@ 000bb994 0028
.org 0xbb996
	bne.n 0xbb9a2	@ 000bb996 04d1
.org 0xbb998
	movs r1, #0	@ 000bb998 0021
.org 0xbb99a
	movs r0, #2	@ 000bb99a 0220
.org 0xbb99c
	strb r0, [r4, #13]	@ 000bb99c 6073
.org 0xbb99e
	strb r1, [r4, #14]	@ 000bb99e a173
.org 0xbb9a0
	strb r1, [r4, #15]	@ 000bb9a0 e173
.org 0xbb9a2
	pop {r4}	@ 000bb9a2 10bc
.org 0xbb9a4
	pop {r0}	@ 000bb9a4 01bc
.org 0xbb9a6
	bx r0	@ 000bb9a6 0047

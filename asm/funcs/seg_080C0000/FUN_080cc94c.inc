@ FUN_080cc94c  entry 0x080cc94c  size 92
.thumb
.org 0xcc94c
FUN_080cc94c:
	push {r4, r5, lr}	@ 000cc94c 30b5
.org 0xcc94e
	adds r4, r0, #0	@ 000cc94e 041c
.org 0xcc950
	ldrb r5, [r4, #14]	@ 000cc950 a57b
.org 0xcc952
	cmp r5, #0	@ 000cc952 002d
.org 0xcc954
	bne.n 0xcc978	@ 000cc954 10d1
.org 0xcc956
	ldr r1, [pc, #80]	@ 000cc956 1449
.org 0xcc958
	bl 0x1cf00	@ 000cc958 50f7d2fa
.org 0xcc95c
	adds r0, r4, #0	@ 000cc95c 201c
.org 0xcc95e
	adds r0, #140	@ 000cc95e 8c30
.org 0xcc960
	str r5, [r0, #0]	@ 000cc960 0560
.org 0xcc962
	adds r0, #4	@ 000cc962 0430
.org 0xcc964
	str r5, [r0, #0]	@ 000cc964 0560
.org 0xcc966
	adds r0, #4	@ 000cc966 0430
.org 0xcc968
	strb r5, [r0, #0]	@ 000cc968 0570
.org 0xcc96a
	ldrb r1, [r4, #10]	@ 000cc96a a17a
.org 0xcc96c
	movs r0, #251	@ 000cc96c fb20
.org 0xcc96e
	ands r0, r1	@ 000cc96e 0840
.org 0xcc970
	strb r0, [r4, #10]	@ 000cc970 a072
.org 0xcc972
	ldrb r0, [r4, #14]	@ 000cc972 a07b
.org 0xcc974
	adds r0, #1	@ 000cc974 0130
.org 0xcc976
	strb r0, [r4, #14]	@ 000cc976 a073
.org 0xcc978
	adds r0, r4, #0	@ 000cc978 201c
.org 0xcc97a
	bl 0x1cff0	@ 000cc97a 50f739fb
.org 0xcc97e
	adds r0, r4, #0	@ 000cc97e 201c
.org 0xcc980
	adds r0, #115	@ 000cc980 7330
.org 0xcc982
	ldrb r0, [r0, #0]	@ 000cc982 0078
.org 0xcc984
	cmp r0, #3	@ 000cc984 0328
.org 0xcc986
	bne.n 0xcc9a2	@ 000cc986 0cd1
.org 0xcc988
	ldrb r1, [r4, #10]	@ 000cc988 a17a
.org 0xcc98a
	movs r0, #254	@ 000cc98a fe20
.org 0xcc98c
	ands r0, r1	@ 000cc98c 0840
.org 0xcc98e
	strb r0, [r4, #10]	@ 000cc98e a072
.org 0xcc990
	ldr r1, [pc, #24]	@ 000cc990 0649
.org 0xcc992
	ldrb r0, [r4, #9]	@ 000cc992 607a
.org 0xcc994
	lsls r0, r0, #2	@ 000cc994 8000
.org 0xcc996
	adds r0, r0, r1	@ 000cc996 4018
.org 0xcc998
	movs r1, #4	@ 000cc998 0421
.org 0xcc99a
	str r1, [r4, #12]	@ 000cc99a e160
.org 0xcc99c
	ldr r0, [r0, #0]	@ 000cc99c 0068
.org 0xcc99e
	ldr r0, [r0, #16]	@ 000cc99e 0069
.org 0xcc9a0
	str r0, [r4, #20]	@ 000cc9a0 6061
.org 0xcc9a2
	pop {r4, r5}	@ 000cc9a2 30bc
.org 0xcc9a4
	pop {r0}	@ 000cc9a4 01bc
.org 0xcc9a6
	bx r0	@ 000cc9a6 0047

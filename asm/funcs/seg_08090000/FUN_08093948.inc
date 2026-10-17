@ FUN_08093948  entry 0x08093948  size 70
.thumb
.org 0x93948
FUN_08093948:
	push {r4, lr}	@ 00093948 10b5
.org 0x9394a
	adds r4, r0, #0	@ 0009394a 041c
.org 0x9394c
	ldrb r0, [r4, #15]	@ 0009394c e07b
.org 0x9394e
	cmp r0, #0	@ 0009394e 0028
.org 0x93950
	bne.n 0x9396a	@ 00093950 0bd1
.org 0x93952
	adds r0, r4, #0	@ 00093952 201c
.org 0x93954
	adds r0, #116	@ 00093954 7430
.org 0x93956
	ldr r1, [pc, #56]	@ 00093956 0e49
.org 0x93958
	bl 0x5784	@ 00093958 71f714ff
.org 0x9395c
	ldr r1, [pc, #52]	@ 0009395c 0d49
.org 0x9395e
	adds r0, r4, #0	@ 0009395e 201c
.org 0x93960
	bl 0x1cf00	@ 00093960 89f7cefa
.org 0x93964
	ldrb r0, [r4, #15]	@ 00093964 e07b
.org 0x93966
	adds r0, #1	@ 00093966 0130
.org 0x93968
	strb r0, [r4, #15]	@ 00093968 e073
.org 0x9396a
	adds r0, r4, #0	@ 0009396a 201c
.org 0x9396c
	bl 0x1cff0	@ 0009396c 89f740fb
.org 0x93970
	adds r0, r4, #0	@ 00093970 201c
.org 0x93972
	bl 0x94a38	@ 00093972 01f061f8
.org 0x93976
	adds r0, r4, #0	@ 00093976 201c
.org 0x93978
	adds r0, #115	@ 00093978 7330
.org 0x9397a
	ldrb r0, [r0, #0]	@ 0009397a 0078
.org 0x9397c
	cmp r0, #3	@ 0009397c 0328
.org 0x9397e
	bne.n 0x93988	@ 0009397e 03d1
.org 0x93980
	movs r1, #0	@ 00093980 0021
.org 0x93982
	movs r0, #4	@ 00093982 0420
.org 0x93984
	strb r0, [r4, #14]	@ 00093984 a073
.org 0x93986
	strb r1, [r4, #15]	@ 00093986 e173
.org 0x93988
	pop {r4}	@ 00093988 10bc
.org 0x9398a
	pop {r0}	@ 0009398a 01bc
.org 0x9398c
	bx r0	@ 0009398c 0047

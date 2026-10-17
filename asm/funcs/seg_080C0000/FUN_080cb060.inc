@ FUN_080cb060  entry 0x080cb060  size 84
.thumb
.org 0xcb060
FUN_080cb060:
	push {r4, r5, lr}	@ 000cb060 30b5
.org 0xcb062
	adds r4, r0, #0	@ 000cb062 041c
.org 0xcb064
	ldrb r5, [r4, #14]	@ 000cb064 a57b
.org 0xcb066
	cmp r5, #0	@ 000cb066 002d
.org 0xcb068
	bne.n 0xcb08c	@ 000cb068 10d1
.org 0xcb06a
	ldr r1, [pc, #72]	@ 000cb06a 1249
.org 0xcb06c
	bl 0x1cf00	@ 000cb06c 51f748ff
.org 0xcb070
	adds r0, r4, #0	@ 000cb070 201c
.org 0xcb072
	adds r0, #140	@ 000cb072 8c30
.org 0xcb074
	str r5, [r0, #0]	@ 000cb074 0560
.org 0xcb076
	adds r0, #4	@ 000cb076 0430
.org 0xcb078
	str r5, [r0, #0]	@ 000cb078 0560
.org 0xcb07a
	adds r0, #4	@ 000cb07a 0430
.org 0xcb07c
	strb r5, [r0, #0]	@ 000cb07c 0570
.org 0xcb07e
	ldrb r1, [r4, #10]	@ 000cb07e a17a
.org 0xcb080
	movs r0, #251	@ 000cb080 fb20
.org 0xcb082
	ands r0, r1	@ 000cb082 0840
.org 0xcb084
	strb r0, [r4, #10]	@ 000cb084 a072
.org 0xcb086
	ldrb r0, [r4, #14]	@ 000cb086 a07b
.org 0xcb088
	adds r0, #1	@ 000cb088 0130
.org 0xcb08a
	strb r0, [r4, #14]	@ 000cb08a a073
.org 0xcb08c
	adds r0, r4, #0	@ 000cb08c 201c
.org 0xcb08e
	bl 0x1cff0	@ 000cb08e 51f7afff
.org 0xcb092
	adds r0, r4, #0	@ 000cb092 201c
.org 0xcb094
	adds r0, #115	@ 000cb094 7330
.org 0xcb096
	ldrb r0, [r0, #0]	@ 000cb096 0078
.org 0xcb098
	cmp r0, #3	@ 000cb098 0328
.org 0xcb09a
	bne.n 0xcb0ae	@ 000cb09a 08d1
.org 0xcb09c
	ldr r1, [pc, #24]	@ 000cb09c 0649
.org 0xcb09e
	ldrb r0, [r4, #9]	@ 000cb09e 607a
.org 0xcb0a0
	lsls r0, r0, #2	@ 000cb0a0 8000
.org 0xcb0a2
	adds r0, r0, r1	@ 000cb0a2 4018
.org 0xcb0a4
	movs r1, #4	@ 000cb0a4 0421
.org 0xcb0a6
	str r1, [r4, #12]	@ 000cb0a6 e160
.org 0xcb0a8
	ldr r0, [r0, #0]	@ 000cb0a8 0068
.org 0xcb0aa
	ldr r0, [r0, #16]	@ 000cb0aa 0069
.org 0xcb0ac
	str r0, [r4, #20]	@ 000cb0ac 6061
.org 0xcb0ae
	pop {r4, r5}	@ 000cb0ae 30bc
.org 0xcb0b0
	pop {r0}	@ 000cb0b0 01bc
.org 0xcb0b2
	bx r0	@ 000cb0b2 0047

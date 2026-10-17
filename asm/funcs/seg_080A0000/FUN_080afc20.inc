@ FUN_080afc20  entry 0x080afc20  size 86
.thumb
.org 0xafc20
FUN_080afc20:
	push {r4, lr}	@ 000afc20 10b5
.org 0xafc22
	adds r4, r0, #0	@ 000afc22 041c
.org 0xafc24
	ldr r3, [r4, #44]	@ 000afc24 e36a
.org 0xafc26
	cmp r3, #0	@ 000afc26 002b
.org 0xafc28
	beq.n 0xafc6a	@ 000afc28 1fd0
.org 0xafc2a
	ldrb r0, [r3, #12]	@ 000afc2a 187b
.org 0xafc2c
	cmp r0, #1	@ 000afc2c 0128
.org 0xafc2e
	bhi.n 0xafc66	@ 000afc2e 1ad8
.org 0xafc30
	ldrb r1, [r3, #10]	@ 000afc30 997a
.org 0xafc32
	movs r0, #254	@ 000afc32 fe20
.org 0xafc34
	ands r0, r1	@ 000afc34 0840
.org 0xafc36
	movs r2, #0	@ 000afc36 0022
.org 0xafc38
	movs r1, #253	@ 000afc38 fd21
.org 0xafc3a
	ands r0, r1	@ 000afc3a 0840
.org 0xafc3c
	strb r0, [r3, #10]	@ 000afc3c 9872
.org 0xafc3e
	adds r0, r3, #0	@ 000afc3e 181c
.org 0xafc40
	adds r0, #140	@ 000afc40 8c30
.org 0xafc42
	str r2, [r0, #0]	@ 000afc42 0260
.org 0xafc44
	adds r0, #4	@ 000afc44 0430
.org 0xafc46
	str r2, [r0, #0]	@ 000afc46 0260
.org 0xafc48
	adds r0, #4	@ 000afc48 0430
.org 0xafc4a
	strb r2, [r0, #0]	@ 000afc4a 0270
.org 0xafc4c
	ldrb r1, [r3, #10]	@ 000afc4c 997a
.org 0xafc4e
	movs r0, #251	@ 000afc4e fb20
.org 0xafc50
	ands r0, r1	@ 000afc50 0840
.org 0xafc52
	strb r0, [r3, #10]	@ 000afc52 9872
.org 0xafc54
	ldr r1, [pc, #32]	@ 000afc54 0849
.org 0xafc56
	ldrb r0, [r3, #9]	@ 000afc56 587a
.org 0xafc58
	lsls r0, r0, #2	@ 000afc58 8000
.org 0xafc5a
	adds r0, r0, r1	@ 000afc5a 4018
.org 0xafc5c
	movs r1, #3	@ 000afc5c 0321
.org 0xafc5e
	str r1, [r3, #12]	@ 000afc5e d960
.org 0xafc60
	ldr r0, [r0, #0]	@ 000afc60 0068
.org 0xafc62
	ldr r0, [r0, #12]	@ 000afc62 c068
.org 0xafc64
	str r0, [r3, #20]	@ 000afc64 5861
.org 0xafc66
	movs r0, #0	@ 000afc66 0020
.org 0xafc68
	str r0, [r4, #44]	@ 000afc68 e062
.org 0xafc6a
	adds r0, r4, #0	@ 000afc6a 201c
.org 0xafc6c
	bl 0x7f8ec	@ 000afc6c cff73efe
.org 0xafc70
	pop {r4}	@ 000afc70 10bc
.org 0xafc72
	pop {r0}	@ 000afc72 01bc
.org 0xafc74
	bx r0	@ 000afc74 0047

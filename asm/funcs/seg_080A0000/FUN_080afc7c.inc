@ FUN_080afc7c  entry 0x080afc7c  size 72
.thumb
.org 0xafc7c
FUN_080afc7c:
	push {r4, r5, r6, lr}	@ 000afc7c 70b5
.org 0xafc7e
	adds r4, r0, #0	@ 000afc7e 041c
.org 0xafc80
	ldr r0, [r4, #20]	@ 000afc80 6069
.org 0xafc82
	movs r6, #1	@ 000afc82 0126
.org 0xafc84
	ands r0, r6	@ 000afc84 3040
.org 0xafc86
	cmp r0, #0	@ 000afc86 0028
.org 0xafc88
	beq.n 0xafcbe	@ 000afc88 19d0
.org 0xafc8a
	ldr r5, [r4, #44]	@ 000afc8a e56a
.org 0xafc8c
	movs r0, #14	@ 000afc8c 0e20
.org 0xafc8e
	bl 0x6984	@ 000afc8e 56f779fe
.org 0xafc92
	ldr r1, [r4, #20]	@ 000afc92 6169
.org 0xafc94
	movs r0, #128	@ 000afc94 8020
.org 0xafc96
	lsls r0, r0, #2	@ 000afc96 8000
.org 0xafc98
	ands r0, r1	@ 000afc98 0840
.org 0xafc9a
	cmp r0, #0	@ 000afc9a 0028
.org 0xafc9c
	beq.n 0xafcbe	@ 000afc9c 0fd0
.org 0xafc9e
	movs r0, #128	@ 000afc9e 8020
.org 0xafca0
	lsls r0, r0, #10	@ 000afca0 8002
.org 0xafca2
	ands r1, r0	@ 000afca2 0140
.org 0xafca4
	cmp r1, #0	@ 000afca4 0029
.org 0xafca6
	beq.n 0xafcbe	@ 000afca6 0ad0
.org 0xafca8
	adds r0, r5, #0	@ 000afca8 281c
.org 0xafcaa
	adds r0, #180	@ 000afcaa b430
.org 0xafcac
	strb r6, [r0, #0]	@ 000afcac 0670
.org 0xafcae
	ldr r0, [pc, #20]	@ 000afcae 0548
.org 0xafcb0
	ldr r0, [r0, #0]	@ 000afcb0 0068
.org 0xafcb2
	cmp r0, #0	@ 000afcb2 0028
.org 0xafcb4
	beq.n 0xafcbe	@ 000afcb4 03d0
.org 0xafcb6
	movs r1, #5	@ 000afcb6 0521
.org 0xafcb8
	movs r2, #7	@ 000afcb8 0722
.org 0xafcba
	bl 0x3a578	@ 000afcba 8af75dfc
.org 0xafcbe
	pop {r4, r5, r6}	@ 000afcbe 70bc
.org 0xafcc0
	pop {r0}	@ 000afcc0 01bc
.org 0xafcc2
	bx r0	@ 000afcc2 0047

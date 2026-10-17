@ FUN_080a6278  entry 0x080a6278  size 72
.thumb
.org 0xa6278
FUN_080a6278:
	push {r4, r5, r6, lr}	@ 000a6278 70b5
.org 0xa627a
	adds r4, r0, #0	@ 000a627a 041c
.org 0xa627c
	ldr r0, [r4, #20]	@ 000a627c 6069
.org 0xa627e
	movs r6, #1	@ 000a627e 0126
.org 0xa6280
	ands r0, r6	@ 000a6280 3040
.org 0xa6282
	cmp r0, #0	@ 000a6282 0028
.org 0xa6284
	beq.n 0xa62ba	@ 000a6284 19d0
.org 0xa6286
	ldr r5, [r4, #44]	@ 000a6286 e56a
.org 0xa6288
	movs r0, #25	@ 000a6288 1920
.org 0xa628a
	bl 0x6984	@ 000a628a 60f77bfb
.org 0xa628e
	ldr r1, [r4, #20]	@ 000a628e 6169
.org 0xa6290
	movs r0, #128	@ 000a6290 8020
.org 0xa6292
	lsls r0, r0, #2	@ 000a6292 8000
.org 0xa6294
	ands r0, r1	@ 000a6294 0840
.org 0xa6296
	cmp r0, #0	@ 000a6296 0028
.org 0xa6298
	beq.n 0xa62ba	@ 000a6298 0fd0
.org 0xa629a
	movs r0, #128	@ 000a629a 8020
.org 0xa629c
	lsls r0, r0, #10	@ 000a629c 8002
.org 0xa629e
	ands r1, r0	@ 000a629e 0140
.org 0xa62a0
	cmp r1, #0	@ 000a62a0 0029
.org 0xa62a2
	beq.n 0xa62ba	@ 000a62a2 0ad0
.org 0xa62a4
	adds r0, r5, #0	@ 000a62a4 281c
.org 0xa62a6
	adds r0, #180	@ 000a62a6 b430
.org 0xa62a8
	strb r6, [r0, #0]	@ 000a62a8 0670
.org 0xa62aa
	ldr r0, [pc, #20]	@ 000a62aa 0548
.org 0xa62ac
	ldr r0, [r0, #0]	@ 000a62ac 0068
.org 0xa62ae
	cmp r0, #0	@ 000a62ae 0028
.org 0xa62b0
	beq.n 0xa62ba	@ 000a62b0 03d0
.org 0xa62b2
	movs r1, #5	@ 000a62b2 0521
.org 0xa62b4
	movs r2, #4	@ 000a62b4 0422
.org 0xa62b6
	bl 0x3a578	@ 000a62b6 94f75ff9
.org 0xa62ba
	pop {r4, r5, r6}	@ 000a62ba 70bc
.org 0xa62bc
	pop {r0}	@ 000a62bc 01bc
.org 0xa62be
	bx r0	@ 000a62be 0047

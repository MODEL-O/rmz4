@ FUN_08101294  entry 0x08101294  size 80
.thumb
.org 0x101294
FUN_08101294:
	push {r4, lr}	@ 00101294 10b5
.org 0x101296
	adds r4, r0, #0	@ 00101296 041c
.org 0x101298
	ldrb r0, [r4, #9]	@ 00101298 607a
.org 0x10129a
	cmp r0, #60	@ 0010129a 3c28
.org 0x10129c
	bne.n 0x1012de	@ 0010129c 1fd1
.org 0x10129e
	adds r1, r4, #0	@ 0010129e 211c
.org 0x1012a0
	adds r1, #184	@ 001012a0 b831
.org 0x1012a2
	ldrb r0, [r1, #0]	@ 001012a2 0878
.org 0x1012a4
	cmp r0, #128	@ 001012a4 8028
.org 0x1012a6
	beq.n 0x1012de	@ 001012a6 1ad0
.org 0x1012a8
	movs r0, #128	@ 001012a8 8020
.org 0x1012aa
	strb r0, [r1, #0]	@ 001012aa 0870
.org 0x1012ac
	ldrb r0, [r4, #17]	@ 001012ac 607c
.org 0x1012ae
	cmp r0, #0	@ 001012ae 0028
.org 0x1012b0
	bne.n 0x1012c6	@ 001012b0 09d1
.org 0x1012b2
	movs r2, #128	@ 001012b2 8022
.org 0x1012b4
	lsls r2, r2, #8	@ 001012b4 1202
.org 0x1012b6
	adds r0, r4, #0	@ 001012b6 201c
.org 0x1012b8
	adds r0, #112	@ 001012b8 7030
.org 0x1012ba
	ldrb r1, [r0, #0]	@ 001012ba 0178
.org 0x1012bc
	orrs r1, r2	@ 001012bc 1143
.org 0x1012be
	adds r0, r4, #0	@ 001012be 201c
.org 0x1012c0
	bl 0x1cf00	@ 001012c0 1bf71efe
.org 0x1012c4
	b.n 0x1012d8	@ 001012c4 08e0
.org 0x1012c6
	ldr r0, [r4, #40]	@ 001012c6 a06a
.org 0x1012c8
	ldrb r2, [r0, #30]	@ 001012c8 827f
.org 0x1012ca
	lsls r2, r2, #8	@ 001012ca 1202
.org 0x1012cc
	adds r0, #112	@ 001012cc 7030
.org 0x1012ce
	ldrb r1, [r0, #0]	@ 001012ce 0178
.org 0x1012d0
	orrs r1, r2	@ 001012d0 1143
.org 0x1012d2
	adds r0, r4, #0	@ 001012d2 201c
.org 0x1012d4
	bl 0x1cf00	@ 001012d4 1bf714fe
.org 0x1012d8
	adds r0, r4, #0	@ 001012d8 201c
.org 0x1012da
	bl 0x1cff0	@ 001012da 1bf789fe
.org 0x1012de
	pop {r4}	@ 001012de 10bc
.org 0x1012e0
	pop {r0}	@ 001012e0 01bc
.org 0x1012e2
	bx r0	@ 001012e2 0047

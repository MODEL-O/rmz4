@ FUN_080c2380  entry 0x080c2380  size 46
.thumb
.org 0xc2380
FUN_080c2380:
	push {lr}	@ 000c2380 00b5
.org 0xc2382
	adds r2, r0, #0	@ 000c2382 021c
.org 0xc2384
	ldr r0, [pc, #40]	@ 000c2384 0a48
.org 0xc2386
	ldr r0, [r0, #0]	@ 000c2386 0068
.org 0xc2388
	movs r3, #158	@ 000c2388 9e23
.org 0xc238a
	lsls r3, r3, #2	@ 000c238a 9b00
.org 0xc238c
	adds r1, r0, r3	@ 000c238c c118
.org 0xc238e
	ldrb r0, [r1, #0]	@ 000c238e 0878
.org 0xc2390
	cmp r0, #0	@ 000c2390 0028
.org 0xc2392
	beq.n 0xc2398	@ 000c2392 01d0
.org 0xc2394
	subs r0, #1	@ 000c2394 0138
.org 0xc2396
	strb r0, [r1, #0]	@ 000c2396 0870
.org 0xc2398
	ldr r1, [pc, #24]	@ 000c2398 0649
.org 0xc239a
	ldrb r0, [r2, #9]	@ 000c239a 507a
.org 0xc239c
	lsls r0, r0, #2	@ 000c239c 8000
.org 0xc239e
	adds r0, r0, r1	@ 000c239e 4018
.org 0xc23a0
	movs r1, #4	@ 000c23a0 0421
.org 0xc23a2
	str r1, [r2, #12]	@ 000c23a2 d160
.org 0xc23a4
	ldr r0, [r0, #0]	@ 000c23a4 0068
.org 0xc23a6
	ldr r0, [r0, #16]	@ 000c23a6 0069
.org 0xc23a8
	str r0, [r2, #20]	@ 000c23a8 5061
.org 0xc23aa
	pop {r0}	@ 000c23aa 01bc
.org 0xc23ac
	bx r0	@ 000c23ac 0047

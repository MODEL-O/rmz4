@ FUN_0808b49c  entry 0x0808b49c  size 124
.thumb
.org 0x8b49c
FUN_0808b49c:
	push {r4, lr}	@ 0008b49c 10b5
.org 0x8b49e
	adds r4, r0, #0	@ 0008b49e 041c
.org 0x8b4a0
	ldrb r0, [r4, #15]	@ 0008b4a0 e07b
.org 0x8b4a2
	cmp r0, #0	@ 0008b4a2 0028
.org 0x8b4a4
	bne.n 0x8b4ba	@ 0008b4a4 09d1
.org 0x8b4a6
	movs r1, #132	@ 0008b4a6 8421
.org 0x8b4a8
	lsls r1, r1, #6	@ 0008b4a8 8901
.org 0x8b4aa
	adds r0, r4, #0	@ 0008b4aa 201c
.org 0x8b4ac
	bl 0x1cf00	@ 0008b4ac 91f728fd
.org 0x8b4b0
	movs r0, #32	@ 0008b4b0 2020
.org 0x8b4b2
	strb r0, [r4, #18]	@ 0008b4b2 a074
.org 0x8b4b4
	ldrb r0, [r4, #15]	@ 0008b4b4 e07b
.org 0x8b4b6
	adds r0, #1	@ 0008b4b6 0130
.org 0x8b4b8
	strb r0, [r4, #15]	@ 0008b4b8 e073
.org 0x8b4ba
	adds r0, r4, #0	@ 0008b4ba 201c
.org 0x8b4bc
	bl 0x1cff0	@ 0008b4bc 91f798fd
.org 0x8b4c0
	adds r0, r4, #0	@ 0008b4c0 201c
.org 0x8b4c2
	adds r0, #116	@ 0008b4c2 7430
.org 0x8b4c4
	ldr r3, [pc, #80]	@ 0008b4c4 144b
.org 0x8b4c6
	ldrb r1, [r4, #30]	@ 0008b4c6 a17f
.org 0x8b4c8
	lsls r1, r1, #8	@ 0008b4c8 0902
.org 0x8b4ca
	adds r2, r4, #0	@ 0008b4ca 221c
.org 0x8b4cc
	adds r2, #112	@ 0008b4cc 7032
.org 0x8b4ce
	ldrb r2, [r2, #0]	@ 0008b4ce 1278
.org 0x8b4d0
	orrs r1, r2	@ 0008b4d0 1143
.org 0x8b4d2
	ldr r2, [pc, #72]	@ 0008b4d2 124a
.org 0x8b4d4
	adds r1, r1, r2	@ 0008b4d4 8918
.org 0x8b4d6
	lsls r1, r1, #2	@ 0008b4d6 8900
.org 0x8b4d8
	adds r1, r1, r3	@ 0008b4d8 c918
.org 0x8b4da
	adds r2, r4, #0	@ 0008b4da 221c
.org 0x8b4dc
	adds r2, #113	@ 0008b4dc 7132
.org 0x8b4de
	ldrb r2, [r2, #0]	@ 0008b4de 1278
.org 0x8b4e0
	lsls r2, r2, #24	@ 0008b4e0 1206
.org 0x8b4e2
	asrs r2, r2, #24	@ 0008b4e2 1216
.org 0x8b4e4
	ldr r1, [r1, #0]	@ 0008b4e4 0968
.org 0x8b4e6
	lsls r2, r2, #2	@ 0008b4e6 9200
.org 0x8b4e8
	adds r2, r2, r1	@ 0008b4e8 5218
.org 0x8b4ea
	ldr r1, [r2, #0]	@ 0008b4ea 1168
.org 0x8b4ec
	ldrb r2, [r1, #0]	@ 0008b4ec 0a78
.org 0x8b4ee
	lsls r1, r2, #1	@ 0008b4ee 5100
.org 0x8b4f0
	adds r1, r1, r2	@ 0008b4f0 8918
.org 0x8b4f2
	lsls r1, r1, #3	@ 0008b4f2 c900
.org 0x8b4f4
	ldr r2, [pc, #40]	@ 0008b4f4 0a4a
.org 0x8b4f6
	adds r1, r1, r2	@ 0008b4f6 8918
.org 0x8b4f8
	bl 0x5784	@ 0008b4f8 7af744f9
.org 0x8b4fc
	ldrb r0, [r4, #18]	@ 0008b4fc a07c
.org 0x8b4fe
	subs r0, #1	@ 0008b4fe 0138
.org 0x8b500
	strb r0, [r4, #18]	@ 0008b500 a074
.org 0x8b502
	lsls r0, r0, #24	@ 0008b502 0006
.org 0x8b504
	lsrs r1, r0, #24	@ 0008b504 010e
.org 0x8b506
	cmp r1, #0	@ 0008b506 0029
.org 0x8b508
	bne.n 0x8b512	@ 0008b508 03d1
.org 0x8b50a
	movs r0, #1	@ 0008b50a 0120
.org 0x8b50c
	strb r0, [r4, #13]	@ 0008b50c 6073
.org 0x8b50e
	strb r1, [r4, #14]	@ 0008b50e a173
.org 0x8b510
	strb r1, [r4, #15]	@ 0008b510 e173
.org 0x8b512
	pop {r4}	@ 0008b512 10bc
.org 0x8b514
	pop {r0}	@ 0008b514 01bc
.org 0x8b516
	bx r0	@ 0008b516 0047

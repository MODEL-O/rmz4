@ FUN_0805a994  entry 0x0805a994  size 96
.thumb
.org 0x5a994
FUN_0805a994:
	push {r4, lr}	@ 0005a994 10b5
.org 0x5a996
	adds r4, r0, #0	@ 0005a996 041c
.org 0x5a998
	ldrb r0, [r4, #15]	@ 0005a998 e07b
.org 0x5a99a
	cmp r0, #0	@ 0005a99a 0028
.org 0x5a99c
	bne.n 0x5a9d6	@ 0005a99c 1bd1
.org 0x5a99e
	adds r0, r4, #0	@ 0005a99e 201c
.org 0x5a9a0
	adds r0, #200	@ 0005a9a0 c830
.org 0x5a9a2
	ldr r0, [r0, #0]	@ 0005a9a2 0068
.org 0x5a9a4
	cmp r0, #0	@ 0005a9a4 0028
.org 0x5a9a6
	beq.n 0x5a9b6	@ 0005a9a6 06d0
.org 0x5a9a8
	adds r1, r4, #0	@ 0005a9a8 211c
.org 0x5a9aa
	adds r1, #191	@ 0005a9aa bf31
.org 0x5a9ac
	ldrb r1, [r1, #0]	@ 0005a9ac 0978
.org 0x5a9ae
	cmp r1, #1	@ 0005a9ae 0129
.org 0x5a9b0
	bne.n 0x5a9b6	@ 0005a9b0 01d1
.org 0x5a9b2
	adds r0, #180	@ 0005a9b2 b430
.org 0x5a9b4
	strb r1, [r0, #0]	@ 0005a9b4 0170
.org 0x5a9b6
	adds r0, r4, #0	@ 0005a9b6 201c
.org 0x5a9b8
	adds r0, #116	@ 0005a9b8 7430
.org 0x5a9ba
	ldr r1, [pc, #56]	@ 0005a9ba 0e49
.org 0x5a9bc
	bl 0x5784	@ 0005a9bc aaf7e2fe
.org 0x5a9c0
	ldr r1, [pc, #52]	@ 0005a9c0 0d49
.org 0x5a9c2
	adds r0, r4, #0	@ 0005a9c2 201c
.org 0x5a9c4
	bl 0x1cf00	@ 0005a9c4 c2f79cfa
.org 0x5a9c8
	adds r1, r4, #0	@ 0005a9c8 211c
.org 0x5a9ca
	adds r1, #189	@ 0005a9ca bd31
.org 0x5a9cc
	movs r0, #1	@ 0005a9cc 0120
.org 0x5a9ce
	strb r0, [r1, #0]	@ 0005a9ce 0870
.org 0x5a9d0
	ldrb r0, [r4, #15]	@ 0005a9d0 e07b
.org 0x5a9d2
	adds r0, #1	@ 0005a9d2 0130
.org 0x5a9d4
	strb r0, [r4, #15]	@ 0005a9d4 e073
.org 0x5a9d6
	adds r0, r4, #0	@ 0005a9d6 201c
.org 0x5a9d8
	bl 0x1cff0	@ 0005a9d8 c2f70afb
.org 0x5a9dc
	adds r0, r4, #0	@ 0005a9dc 201c
.org 0x5a9de
	adds r0, #115	@ 0005a9de 7330
.org 0x5a9e0
	ldrb r0, [r0, #0]	@ 0005a9e0 0078
.org 0x5a9e2
	cmp r0, #3	@ 0005a9e2 0328
.org 0x5a9e4
	bne.n 0x5a9ee	@ 0005a9e4 03d1
.org 0x5a9e6
	movs r1, #0	@ 0005a9e6 0021
.org 0x5a9e8
	movs r0, #2	@ 0005a9e8 0220
.org 0x5a9ea
	strb r0, [r4, #14]	@ 0005a9ea a073
.org 0x5a9ec
	strb r1, [r4, #15]	@ 0005a9ec e173
.org 0x5a9ee
	pop {r4}	@ 0005a9ee 10bc
.org 0x5a9f0
	pop {r0}	@ 0005a9f0 01bc
.org 0x5a9f2
	bx r0	@ 0005a9f2 0047

@ FUN_080ba968  entry 0x080ba968  size 90
.thumb
.org 0xba968
FUN_080ba968:
	push {r4, lr}	@ 000ba968 10b5
.org 0xba96a
	adds r4, r0, #0	@ 000ba96a 041c
.org 0xba96c
	ldrb r0, [r4, #15]	@ 000ba96c e07b
.org 0xba96e
	cmp r0, #0	@ 000ba96e 0028
.org 0xba970
	bne.n 0xba994	@ 000ba970 10d1
.org 0xba972
	ldr r0, [pc, #80]	@ 000ba972 1448
.org 0xba974
	bl 0x2b10	@ 000ba974 48f7ccf8
.org 0xba978
	adds r0, r4, #0	@ 000ba978 201c
.org 0xba97a
	adds r0, #116	@ 000ba97a 7430
.org 0xba97c
	ldr r1, [pc, #72]	@ 000ba97c 1249
.org 0xba97e
	bl 0x5784	@ 000ba97e 4af701ff
.org 0xba982
	ldr r1, [pc, #72]	@ 000ba982 1249
.org 0xba984
	adds r0, r4, #0	@ 000ba984 201c
.org 0xba986
	bl 0x1cf00	@ 000ba986 62f7bbfa
.org 0xba98a
	movs r0, #1	@ 000ba98a 0120
.org 0xba98c
	strb r0, [r4, #18]	@ 000ba98c a074
.org 0xba98e
	ldrb r0, [r4, #15]	@ 000ba98e e07b
.org 0xba990
	adds r0, #1	@ 000ba990 0130
.org 0xba992
	strb r0, [r4, #15]	@ 000ba992 e073
.org 0xba994
	adds r0, r4, #0	@ 000ba994 201c
.org 0xba996
	bl 0x1cff0	@ 000ba996 62f72bfb
.org 0xba99a
	ldrb r0, [r4, #18]	@ 000ba99a a07c
.org 0xba99c
	cmp r0, #0	@ 000ba99c 0028
.org 0xba99e
	beq.n 0xba9a4	@ 000ba99e 01d0
.org 0xba9a0
	subs r0, #1	@ 000ba9a0 0138
.org 0xba9a2
	strb r0, [r4, #18]	@ 000ba9a2 a074
.org 0xba9a4
	adds r0, r4, #0	@ 000ba9a4 201c
.org 0xba9a6
	adds r0, #115	@ 000ba9a6 7330
.org 0xba9a8
	ldrb r0, [r0, #0]	@ 000ba9a8 0078
.org 0xba9aa
	cmp r0, #3	@ 000ba9aa 0328
.org 0xba9ac
	bne.n 0xba9bc	@ 000ba9ac 06d1
.org 0xba9ae
	ldrb r1, [r4, #18]	@ 000ba9ae a17c
.org 0xba9b0
	cmp r1, #0	@ 000ba9b0 0029
.org 0xba9b2
	bne.n 0xba9bc	@ 000ba9b2 03d1
.org 0xba9b4
	movs r0, #4	@ 000ba9b4 0420
.org 0xba9b6
	strb r0, [r4, #13]	@ 000ba9b6 6073
.org 0xba9b8
	strb r1, [r4, #14]	@ 000ba9b8 a173
.org 0xba9ba
	strb r1, [r4, #15]	@ 000ba9ba e173
.org 0xba9bc
	pop {r4}	@ 000ba9bc 10bc
.org 0xba9be
	pop {r0}	@ 000ba9be 01bc
.org 0xba9c0
	bx r0	@ 000ba9c0 0047

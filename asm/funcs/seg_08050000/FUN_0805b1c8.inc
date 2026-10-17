@ FUN_0805b1c8  entry 0x0805b1c8  size 72
.thumb
.org 0x5b1c8
FUN_0805b1c8:
	push {r4, lr}	@ 0005b1c8 10b5
.org 0x5b1ca
	adds r4, r0, #0	@ 0005b1ca 041c
.org 0x5b1cc
	ldrb r0, [r4, #15]	@ 0005b1cc e07b
.org 0x5b1ce
	cmp r0, #0	@ 0005b1ce 0028
.org 0x5b1d0
	bne.n 0x5b1f2	@ 0005b1d0 0fd1
.org 0x5b1d2
	adds r0, r4, #0	@ 0005b1d2 201c
.org 0x5b1d4
	adds r0, #116	@ 0005b1d4 7430
.org 0x5b1d6
	ldr r1, [pc, #56]	@ 0005b1d6 0e49
.org 0x5b1d8
	bl 0x5784	@ 0005b1d8 aaf7d4fa
.org 0x5b1dc
	ldr r1, [pc, #52]	@ 0005b1dc 0d49
.org 0x5b1de
	adds r0, r4, #0	@ 0005b1de 201c
.org 0x5b1e0
	bl 0x1cf00	@ 0005b1e0 c1f78efe
.org 0x5b1e4
	adds r1, r4, #0	@ 0005b1e4 211c
.org 0x5b1e6
	adds r1, #189	@ 0005b1e6 bd31
.org 0x5b1e8
	movs r0, #1	@ 0005b1e8 0120
.org 0x5b1ea
	strb r0, [r1, #0]	@ 0005b1ea 0870
.org 0x5b1ec
	ldrb r0, [r4, #15]	@ 0005b1ec e07b
.org 0x5b1ee
	adds r0, #1	@ 0005b1ee 0130
.org 0x5b1f0
	strb r0, [r4, #15]	@ 0005b1f0 e073
.org 0x5b1f2
	adds r0, r4, #0	@ 0005b1f2 201c
.org 0x5b1f4
	bl 0x1cff0	@ 0005b1f4 c1f7fcfe
.org 0x5b1f8
	adds r0, r4, #0	@ 0005b1f8 201c
.org 0x5b1fa
	adds r0, #115	@ 0005b1fa 7330
.org 0x5b1fc
	ldrb r0, [r0, #0]	@ 0005b1fc 0078
.org 0x5b1fe
	cmp r0, #3	@ 0005b1fe 0328
.org 0x5b200
	bne.n 0x5b20a	@ 0005b200 03d1
.org 0x5b202
	movs r1, #0	@ 0005b202 0021
.org 0x5b204
	movs r0, #4	@ 0005b204 0420
.org 0x5b206
	strb r0, [r4, #14]	@ 0005b206 a073
.org 0x5b208
	strb r1, [r4, #15]	@ 0005b208 e173
.org 0x5b20a
	pop {r4}	@ 0005b20a 10bc
.org 0x5b20c
	pop {r0}	@ 0005b20c 01bc
.org 0x5b20e
	bx r0	@ 0005b20e 0047

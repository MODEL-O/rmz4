@ FUN_0804c3ac  entry 0x0804c3ac  size 102
.thumb
.org 0x4c3ac
FUN_0804c3ac:
	push {r4, lr}	@ 0004c3ac 10b5
.org 0x4c3ae
	adds r4, r0, #0	@ 0004c3ae 041c
.org 0x4c3b0
	bl 0x1cff0	@ 0004c3b0 d0f71efe
.org 0x4c3b4
	ldr r0, [r4, #84]	@ 0004c3b4 606d
.org 0x4c3b6
	ldr r1, [r4, #92]	@ 0004c3b6 e16d
.org 0x4c3b8
	adds r0, r0, r1	@ 0004c3b8 4018
.org 0x4c3ba
	str r0, [r4, #84]	@ 0004c3ba 6065
.org 0x4c3bc
	ldr r0, [r4, #88]	@ 0004c3bc a06d
.org 0x4c3be
	ldr r1, [r4, #96]	@ 0004c3be 216e
.org 0x4c3c0
	adds r0, r0, r1	@ 0004c3c0 4018
.org 0x4c3c2
	str r0, [r4, #88]	@ 0004c3c2 a065
.org 0x4c3c4
	adds r0, r4, #0	@ 0004c3c4 201c
.org 0x4c3c6
	adds r0, #113	@ 0004c3c6 7130
.org 0x4c3c8
	ldrb r0, [r0, #0]	@ 0004c3c8 0078
.org 0x4c3ca
	lsls r0, r0, #24	@ 0004c3ca 0006
.org 0x4c3cc
	asrs r0, r0, #24	@ 0004c3cc 0016
.org 0x4c3ce
	cmp r0, #4	@ 0004c3ce 0428
.org 0x4c3d0
	ble.n 0x4c3ea	@ 0004c3d0 0bdd
.org 0x4c3d2
	adds r0, r4, #0	@ 0004c3d2 201c
.org 0x4c3d4
	adds r0, #140	@ 0004c3d4 8c30
.org 0x4c3d6
	movs r1, #0	@ 0004c3d6 0021
.org 0x4c3d8
	str r1, [r0, #0]	@ 0004c3d8 0160
.org 0x4c3da
	adds r0, #4	@ 0004c3da 0430
.org 0x4c3dc
	str r1, [r0, #0]	@ 0004c3dc 0160
.org 0x4c3de
	adds r0, #4	@ 0004c3de 0430
.org 0x4c3e0
	strb r1, [r0, #0]	@ 0004c3e0 0170
.org 0x4c3e2
	ldrb r1, [r4, #10]	@ 0004c3e2 a17a
.org 0x4c3e4
	movs r0, #251	@ 0004c3e4 fb20
.org 0x4c3e6
	ands r0, r1	@ 0004c3e6 0840
.org 0x4c3e8
	strb r0, [r4, #10]	@ 0004c3e8 a072
.org 0x4c3ea
	adds r0, r4, #0	@ 0004c3ea 201c
.org 0x4c3ec
	adds r0, #115	@ 0004c3ec 7330
.org 0x4c3ee
	ldrb r0, [r0, #0]	@ 0004c3ee 0078
.org 0x4c3f0
	cmp r0, #3	@ 0004c3f0 0328
.org 0x4c3f2
	bne.n 0x4c40c	@ 0004c3f2 0bd1
.org 0x4c3f4
	ldr r1, [pc, #28]	@ 0004c3f4 0749
.org 0x4c3f6
	ldrb r0, [r4, #9]	@ 0004c3f6 607a
.org 0x4c3f8
	lsls r0, r0, #2	@ 0004c3f8 8000
.org 0x4c3fa
	adds r0, r0, r1	@ 0004c3fa 4018
.org 0x4c3fc
	movs r1, #2	@ 0004c3fc 0221
.org 0x4c3fe
	str r1, [r4, #12]	@ 0004c3fe e160
.org 0x4c400
	ldr r0, [r0, #0]	@ 0004c400 0068
.org 0x4c402
	ldr r0, [r0, #8]	@ 0004c402 8068
.org 0x4c404
	str r0, [r4, #20]	@ 0004c404 6061
.org 0x4c406
	adds r0, r4, #0	@ 0004c406 201c
.org 0x4c408
	bl 0x4c084	@ 0004c408 fff73cfe
.org 0x4c40c
	pop {r4}	@ 0004c40c 10bc
.org 0x4c40e
	pop {r0}	@ 0004c40e 01bc
.org 0x4c410
	bx r0	@ 0004c410 0047

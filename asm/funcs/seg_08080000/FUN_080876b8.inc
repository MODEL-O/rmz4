@ FUN_080876b8  entry 0x080876b8  size 90
.thumb
.org 0x876b8
FUN_080876b8:
	push {r4, lr}	@ 000876b8 10b5
.org 0x876ba
	sub sp, #8	@ 000876ba 82b0
.org 0x876bc
	adds r4, r0, #0	@ 000876bc 041c
.org 0x876be
	ldrb r1, [r4, #15]	@ 000876be e17b
.org 0x876c0
	cmp r1, #0	@ 000876c0 0029
.org 0x876c2
	bne.n 0x876f2	@ 000876c2 16d1
.org 0x876c4
	movs r0, #128	@ 000876c4 8020
.org 0x876c6
	lsls r0, r0, #4	@ 000876c6 0001
.org 0x876c8
	str r0, [sp, #0]	@ 000876c8 0090
.org 0x876ca
	str r1, [sp, #4]	@ 000876ca 0191
.org 0x876cc
	adds r0, r4, #0	@ 000876cc 201c
.org 0x876ce
	adds r0, #84	@ 000876ce 5430
.org 0x876d0
	mov r1, sp	@ 000876d0 6946
.org 0x876d2
	movs r2, #4	@ 000876d2 0422
.org 0x876d4
	movs r3, #5	@ 000876d4 0523
.org 0x876d6
	bl 0x88ff0	@ 000876d6 01f08bfc
.org 0x876da
	adds r0, r4, #0	@ 000876da 201c
.org 0x876dc
	adds r0, #116	@ 000876dc 7430
.org 0x876de
	ldr r1, [pc, #52]	@ 000876de 0d49
.org 0x876e0
	bl 0x5784	@ 000876e0 7ef750f8
.org 0x876e4
	ldr r1, [pc, #48]	@ 000876e4 0c49
.org 0x876e6
	adds r0, r4, #0	@ 000876e6 201c
.org 0x876e8
	bl 0x1cf00	@ 000876e8 95f70afc
.org 0x876ec
	ldrb r0, [r4, #15]	@ 000876ec e07b
.org 0x876ee
	adds r0, #1	@ 000876ee 0130
.org 0x876f0
	strb r0, [r4, #15]	@ 000876f0 e073
.org 0x876f2
	adds r0, r4, #0	@ 000876f2 201c
.org 0x876f4
	bl 0x1cff0	@ 000876f4 95f77cfc
.org 0x876f8
	adds r0, r4, #0	@ 000876f8 201c
.org 0x876fa
	adds r0, #115	@ 000876fa 7330
.org 0x876fc
	ldrb r0, [r0, #0]	@ 000876fc 0078
.org 0x876fe
	cmp r0, #3	@ 000876fe 0328
.org 0x87700
	bne.n 0x8770a	@ 00087700 03d1
.org 0x87702
	movs r0, #0	@ 00087702 0020
.org 0x87704
	strb r0, [r4, #13]	@ 00087704 6073
.org 0x87706
	strb r0, [r4, #14]	@ 00087706 a073
.org 0x87708
	strb r0, [r4, #15]	@ 00087708 e073
.org 0x8770a
	add sp, #8	@ 0008770a 02b0
.org 0x8770c
	pop {r4}	@ 0008770c 10bc
.org 0x8770e
	pop {r0}	@ 0008770e 01bc
.org 0x87710
	bx r0	@ 00087710 0047

@ FUN_080878d0  entry 0x080878d0  size 72
.thumb
.org 0x878d0
FUN_080878d0:
	push {r4, lr}	@ 000878d0 10b5
.org 0x878d2
	adds r4, r0, #0	@ 000878d2 041c
.org 0x878d4
	ldrb r0, [r4, #15]	@ 000878d4 e07b
.org 0x878d6
	cmp r0, #0	@ 000878d6 0028
.org 0x878d8
	bne.n 0x878f6	@ 000878d8 0dd1
.org 0x878da
	adds r0, r4, #0	@ 000878da 201c
.org 0x878dc
	adds r0, #116	@ 000878dc 7430
.org 0x878de
	ldr r1, [pc, #56]	@ 000878de 0e49
.org 0x878e0
	bl 0x5784	@ 000878e0 7df750ff
.org 0x878e4
	ldr r1, [pc, #52]	@ 000878e4 0d49
.org 0x878e6
	adds r0, r4, #0	@ 000878e6 201c
.org 0x878e8
	bl 0x1cf00	@ 000878e8 95f70afb
.org 0x878ec
	movs r0, #8	@ 000878ec 0820
.org 0x878ee
	strb r0, [r4, #18]	@ 000878ee a074
.org 0x878f0
	ldrb r0, [r4, #15]	@ 000878f0 e07b
.org 0x878f2
	adds r0, #1	@ 000878f2 0130
.org 0x878f4
	strb r0, [r4, #15]	@ 000878f4 e073
.org 0x878f6
	adds r0, r4, #0	@ 000878f6 201c
.org 0x878f8
	bl 0x1cff0	@ 000878f8 95f77afb
.org 0x878fc
	ldrb r0, [r4, #18]	@ 000878fc a07c
.org 0x878fe
	subs r0, #1	@ 000878fe 0138
.org 0x87900
	strb r0, [r4, #18]	@ 00087900 a074
.org 0x87902
	lsls r0, r0, #24	@ 00087902 0006
.org 0x87904
	lsrs r1, r0, #24	@ 00087904 010e
.org 0x87906
	cmp r1, #0	@ 00087906 0029
.org 0x87908
	bne.n 0x87912	@ 00087908 03d1
.org 0x8790a
	movs r0, #6	@ 0008790a 0620
.org 0x8790c
	strb r0, [r4, #13]	@ 0008790c 6073
.org 0x8790e
	strb r1, [r4, #14]	@ 0008790e a173
.org 0x87910
	strb r1, [r4, #15]	@ 00087910 e173
.org 0x87912
	pop {r4}	@ 00087912 10bc
.org 0x87914
	pop {r0}	@ 00087914 01bc
.org 0x87916
	bx r0	@ 00087916 0047

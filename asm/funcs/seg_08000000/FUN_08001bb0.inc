@ FUN_08001bb0  entry 0x08001bb0  size 80
.thumb
.org 0x1bb0
FUN_08001bb0:
	push {r4, r5, r6, r7, lr}	@ 00001bb0 f0b5
.org 0x1bb2
	adds r6, r0, #0	@ 00001bb2 061c
.org 0x1bb4
	lsls r1, r1, #16	@ 00001bb4 0904
.org 0x1bb6
	lsrs r5, r1, #16	@ 00001bb6 0d0c
.org 0x1bb8
	lsls r2, r2, #16	@ 00001bb8 1204
.org 0x1bba
	movs r1, #1	@ 00001bba 0121
.org 0x1bbc
	lsrs r7, r2, #16	@ 00001bbc 170c
.org 0x1bbe
	cmp r2, #0	@ 00001bbe 002a
.org 0x1bc0
	ble.n 0x1bf6	@ 00001bc0 19dd
.org 0x1bc2
	movs r4, #3	@ 00001bc2 0324
.org 0x1bc4
	adds r0, r5, #0	@ 00001bc4 281c
.org 0x1bc6
	adds r1, r6, #0	@ 00001bc6 311c
.org 0x1bc8
	bl 0x128f3c	@ 00001bc8 27f1b8f9
.org 0x1bcc
	lsls r0, r0, #16	@ 00001bcc 0004
.org 0x1bce
	lsrs r1, r0, #16	@ 00001bce 010c
.org 0x1bd0
	subs r0, r4, #1	@ 00001bd0 601e
.org 0x1bd2
	lsls r0, r0, #16	@ 00001bd2 0004
.org 0x1bd4
	lsrs r4, r0, #16	@ 00001bd4 040c
.org 0x1bd6
	cmp r4, #0	@ 00001bd6 002c
.org 0x1bd8
	beq.n 0x1bde	@ 00001bd8 01d0
.org 0x1bda
	cmp r1, #0	@ 00001bda 0029
.org 0x1bdc
	bne.n 0x1bc4	@ 00001bdc f2d1
.org 0x1bde
	cmp r1, #0	@ 00001bde 0029
.org 0x1be0
	bne.n 0x1bf6	@ 00001be0 09d1
.org 0x1be2
	adds r0, r5, #1	@ 00001be2 681c
.org 0x1be4
	lsls r0, r0, #16	@ 00001be4 0004
.org 0x1be6
	lsrs r5, r0, #16	@ 00001be6 050c
.org 0x1be8
	adds r6, #8	@ 00001be8 0836
.org 0x1bea
	lsls r0, r7, #16	@ 00001bea 3804
.org 0x1bec
	ldr r2, [pc, #16]	@ 00001bec 044a
.org 0x1bee
	adds r0, r0, r2	@ 00001bee 8018
.org 0x1bf0
	lsrs r7, r0, #16	@ 00001bf0 070c
.org 0x1bf2
	cmp r0, #0	@ 00001bf2 0028
.org 0x1bf4
	bgt.n 0x1bc2	@ 00001bf4 e5dc
.org 0x1bf6
	lsls r0, r1, #16	@ 00001bf6 0804
.org 0x1bf8
	asrs r0, r0, #16	@ 00001bf8 0014
.org 0x1bfa
	pop {r4, r5, r6, r7}	@ 00001bfa f0bc
.org 0x1bfc
	pop {r1}	@ 00001bfc 02bc
.org 0x1bfe
	bx r1	@ 00001bfe 0847

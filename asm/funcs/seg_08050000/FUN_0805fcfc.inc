@ FUN_0805fcfc  entry 0x0805fcfc  size 90
.thumb
.org 0x5fcfc
FUN_0805fcfc:
	push {r4, lr}	@ 0005fcfc 10b5
.org 0x5fcfe
	adds r4, r0, #0	@ 0005fcfe 041c
.org 0x5fd00
	ldrb r0, [r4, #14]	@ 0005fd00 a07b
.org 0x5fd02
	cmp r0, #0	@ 0005fd02 0028
.org 0x5fd04
	bne.n 0x5fd3a	@ 0005fd04 19d1
.org 0x5fd06
	movs r1, #165	@ 0005fd06 a521
.org 0x5fd08
	lsls r1, r1, #8	@ 0005fd08 0902
.org 0x5fd0a
	adds r0, r4, #0	@ 0005fd0a 201c
.org 0x5fd0c
	bl 0x1cf00	@ 0005fd0c bdf7f8f8
.org 0x5fd10
	adds r0, r4, #0	@ 0005fd10 201c
.org 0x5fd12
	adds r0, #116	@ 0005fd12 7430
.org 0x5fd14
	ldr r1, [pc, #20]	@ 0005fd14 0549
.org 0x5fd16
	bl 0x5784	@ 0005fd16 a5f735fd
.org 0x5fd1a
	adds r0, r4, #0	@ 0005fd1a 201c
.org 0x5fd1c
	adds r0, #164	@ 0005fd1c a430
.org 0x5fd1e
	movs r1, #0	@ 0005fd1e 0021
.org 0x5fd20
	ldrsh r0, [r0, r1]	@ 0005fd20 405e
.org 0x5fd22
	cmp r0, #16	@ 0005fd22 1028
.org 0x5fd24
	ble.n 0x5fd30	@ 0005fd24 04dd
.org 0x5fd26
	movs r0, #24	@ 0005fd26 1820
.org 0x5fd28
	b.n 0x5fd32	@ 0005fd28 03e0
.org 0x5fd2a
	.byte 0x00	@ 0005fd2a data
.org 0x5fd2b
	.byte 0x00	@ 0005fd2b data
.org 0x5fd2c
	.byte 0x54,0xaa,0x85,0x08	@ 0005fd2c data
.org 0x5fd30
	movs r0, #16	@ 0005fd30 1020
.org 0x5fd32
	strb r0, [r4, #18]	@ 0005fd32 a074
.org 0x5fd34
	ldrb r0, [r4, #14]	@ 0005fd34 a07b
.org 0x5fd36
	adds r0, #1	@ 0005fd36 0130
.org 0x5fd38
	strb r0, [r4, #14]	@ 0005fd38 a073
.org 0x5fd3a
	adds r0, r4, #0	@ 0005fd3a 201c
.org 0x5fd3c
	bl 0x1cff0	@ 0005fd3c bdf758f9
.org 0x5fd40
	ldrb r0, [r4, #18]	@ 0005fd40 a07c
.org 0x5fd42
	subs r0, #1	@ 0005fd42 0138
.org 0x5fd44
	strb r0, [r4, #18]	@ 0005fd44 a074
.org 0x5fd46
	lsls r0, r0, #24	@ 0005fd46 0006
.org 0x5fd48
	lsrs r0, r0, #24	@ 0005fd48 000e
.org 0x5fd4a
	cmp r0, #255	@ 0005fd4a ff28
.org 0x5fd4c
	bne.n 0x5fd56	@ 0005fd4c 03d1
.org 0x5fd4e
	movs r0, #2	@ 0005fd4e 0220
.org 0x5fd50
	strb r0, [r4, #13]	@ 0005fd50 6073
.org 0x5fd52
	movs r0, #0	@ 0005fd52 0020
.org 0x5fd54
	strb r0, [r4, #14]	@ 0005fd54 a073

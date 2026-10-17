@ FUN_0806ebf8  entry 0x0806ebf8  size 74
.thumb
.org 0x6ebf8
FUN_0806ebf8:
	push {r4, lr}	@ 0006ebf8 10b5
.org 0x6ebfa
	adds r4, r0, #0	@ 0006ebfa 041c
.org 0x6ebfc
	ldrb r0, [r4, #15]	@ 0006ebfc e07b
.org 0x6ebfe
	cmp r0, #0	@ 0006ebfe 0028
.org 0x6ec00
	bne.n 0x6ec20	@ 0006ec00 0ed1
.org 0x6ec02
	adds r0, r4, #0	@ 0006ec02 201c
.org 0x6ec04
	adds r0, #116	@ 0006ec04 7430
.org 0x6ec06
	ldr r1, [pc, #60]	@ 0006ec06 0f49
.org 0x6ec08
	bl 0x5784	@ 0006ec08 96f7bcfd
.org 0x6ec0c
	movs r1, #173	@ 0006ec0c ad21
.org 0x6ec0e
	lsls r1, r1, #8	@ 0006ec0e 0902
.org 0x6ec10
	adds r0, r4, #0	@ 0006ec10 201c
.org 0x6ec12
	bl 0x1cf00	@ 0006ec12 aef775f9
.org 0x6ec16
	movs r0, #8	@ 0006ec16 0820
.org 0x6ec18
	strb r0, [r4, #18]	@ 0006ec18 a074
.org 0x6ec1a
	ldrb r0, [r4, #15]	@ 0006ec1a e07b
.org 0x6ec1c
	adds r0, #1	@ 0006ec1c 0130
.org 0x6ec1e
	strb r0, [r4, #15]	@ 0006ec1e e073
.org 0x6ec20
	adds r0, r4, #0	@ 0006ec20 201c
.org 0x6ec22
	bl 0x1cff0	@ 0006ec22 aef7e5f9
.org 0x6ec26
	ldrb r0, [r4, #18]	@ 0006ec26 a07c
.org 0x6ec28
	subs r0, #1	@ 0006ec28 0138
.org 0x6ec2a
	strb r0, [r4, #18]	@ 0006ec2a a074
.org 0x6ec2c
	lsls r0, r0, #24	@ 0006ec2c 0006
.org 0x6ec2e
	lsrs r1, r0, #24	@ 0006ec2e 010e
.org 0x6ec30
	cmp r1, #0	@ 0006ec30 0029
.org 0x6ec32
	bne.n 0x6ec3c	@ 0006ec32 03d1
.org 0x6ec34
	movs r0, #8	@ 0006ec34 0820
.org 0x6ec36
	strb r0, [r4, #13]	@ 0006ec36 6073
.org 0x6ec38
	strb r1, [r4, #14]	@ 0006ec38 a173
.org 0x6ec3a
	strb r1, [r4, #15]	@ 0006ec3a e173
.org 0x6ec3c
	pop {r4}	@ 0006ec3c 10bc
.org 0x6ec3e
	pop {r0}	@ 0006ec3e 01bc
.org 0x6ec40
	bx r0	@ 0006ec40 0047

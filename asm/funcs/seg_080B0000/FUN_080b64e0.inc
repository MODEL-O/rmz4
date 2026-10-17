@ FUN_080b64e0  entry 0x080b64e0  size 56
.thumb
.org 0xb64e0
FUN_080b64e0:
	push {r4, lr}	@ 000b64e0 10b5
.org 0xb64e2
	adds r3, r0, #0	@ 000b64e2 031c
.org 0xb64e4
	ldr r0, [r3, #40]	@ 000b64e4 986a
.org 0xb64e6
	adds r1, r0, #0	@ 000b64e6 011c
.org 0xb64e8
	adds r1, #204	@ 000b64e8 cc31
.org 0xb64ea
	ldrh r2, [r1, #0]	@ 000b64ea 0a88
.org 0xb64ec
	movs r4, #0	@ 000b64ec 0024
.org 0xb64ee
	ldrsh r0, [r1, r4]	@ 000b64ee 085f
.org 0xb64f0
	cmp r0, #0	@ 000b64f0 0028
.org 0xb64f2
	beq.n 0xb64f8	@ 000b64f2 01d0
.org 0xb64f4
	subs r0, r2, #1	@ 000b64f4 501e
.org 0xb64f6
	strh r0, [r1, #0]	@ 000b64f6 0880
.org 0xb64f8
	ldr r2, [r3, #40]	@ 000b64f8 9a6a
.org 0xb64fa
	adds r2, #206	@ 000b64fa ce32
.org 0xb64fc
	adds r0, r3, #0	@ 000b64fc 181c
.org 0xb64fe
	adds r0, #181	@ 000b64fe b530
.org 0xb6500
	movs r1, #1	@ 000b6500 0121
.org 0xb6502
	ldrb r0, [r0, #0]	@ 000b6502 0078
.org 0xb6504
	lsls r1, r0	@ 000b6504 8140
.org 0xb6506
	ldrb r0, [r2, #0]	@ 000b6506 1078
.org 0xb6508
	bics r0, r1	@ 000b6508 8843
.org 0xb650a
	strb r0, [r2, #0]	@ 000b650a 1070
.org 0xb650c
	adds r0, r3, #0	@ 000b650c 181c
.org 0xb650e
	bl 0x7f8ec	@ 000b650e c9f7edf9
.org 0xb6512
	pop {r4}	@ 000b6512 10bc
.org 0xb6514
	pop {r0}	@ 000b6514 01bc
.org 0xb6516
	bx r0	@ 000b6516 0047

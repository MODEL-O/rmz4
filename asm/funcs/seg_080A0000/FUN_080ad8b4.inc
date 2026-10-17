@ FUN_080ad8b4  entry 0x080ad8b4  size 86
.thumb
.org 0xad8b4
FUN_080ad8b4:
	push {r4, lr}	@ 000ad8b4 10b5
.org 0xad8b6
	adds r4, r0, #0	@ 000ad8b6 041c
.org 0xad8b8
	adds r0, #140	@ 000ad8b8 8c30
.org 0xad8ba
	ldr r0, [r0, #0]	@ 000ad8ba 0068
.org 0xad8bc
	movs r1, #128	@ 000ad8bc 8021
.org 0xad8be
	lsls r1, r1, #2	@ 000ad8be 8900
.org 0xad8c0
	ands r0, r1	@ 000ad8c0 0840
.org 0xad8c2
	cmp r0, #0	@ 000ad8c2 0028
.org 0xad8c4
	beq.n 0xad8e4	@ 000ad8c4 0ed0
.org 0xad8c6
	ldr r1, [pc, #24]	@ 000ad8c6 0649
.org 0xad8c8
	ldrb r0, [r4, #9]	@ 000ad8c8 607a
.org 0xad8ca
	lsls r0, r0, #2	@ 000ad8ca 8000
.org 0xad8cc
	adds r0, r0, r1	@ 000ad8cc 4018
.org 0xad8ce
	movs r1, #2	@ 000ad8ce 0221
.org 0xad8d0
	str r1, [r4, #12]	@ 000ad8d0 e160
.org 0xad8d2
	ldr r0, [r0, #0]	@ 000ad8d2 0068
.org 0xad8d4
	ldr r0, [r0, #8]	@ 000ad8d4 8068
.org 0xad8d6
	str r0, [r4, #20]	@ 000ad8d6 6061
.org 0xad8d8
	adds r0, r4, #0	@ 000ad8d8 201c
.org 0xad8da
	bl 0xad910	@ 000ad8da 00f019f8
.org 0xad8de
	b.n 0xad908	@ 000ad8de 13e0
.org 0xad8e0
	.byte 0x40,0xdb,0x85,0x08	@ 000ad8e0 data
.org 0xad8e4
	adds r0, r4, #0	@ 000ad8e4 201c
.org 0xad8e6
	adds r0, #184	@ 000ad8e6 b830
.org 0xad8e8
	ldrb r0, [r0, #0]	@ 000ad8e8 0078
.org 0xad8ea
	cmp r0, #0	@ 000ad8ea 0028
.org 0xad8ec
	bne.n 0xad8f6	@ 000ad8ec 03d1
.org 0xad8ee
	adds r0, r4, #0	@ 000ad8ee 201c
.org 0xad8f0
	bl 0xad9f4	@ 000ad8f0 00f080f8
.org 0xad8f4
	b.n 0xad8fc	@ 000ad8f4 02e0
.org 0xad8f6
	adds r0, r4, #0	@ 000ad8f6 201c
.org 0xad8f8
	bl 0xadc78	@ 000ad8f8 00f0bef9
.org 0xad8fc
	adds r0, r4, #0	@ 000ad8fc 201c
.org 0xad8fe
	bl 0xadad8	@ 000ad8fe 00f0ebf8
.org 0xad902
	adds r0, r4, #0	@ 000ad902 201c
.org 0xad904
	bl 0x1cff0	@ 000ad904 6ff774fb
.org 0xad908
	pop {r4}	@ 000ad908 10bc

@ FUN_08077b04  entry 0x08077b04  size 58
.thumb
.org 0x77b04
FUN_08077b04:
	push {r4, lr}	@ 00077b04 10b5
.org 0x77b06
	adds r4, r0, #0	@ 00077b06 041c
.org 0x77b08
	adds r2, r4, #0	@ 00077b08 221c
.org 0x77b0a
	adds r2, #198	@ 00077b0a c632
.org 0x77b0c
	ldrb r0, [r2, #0]	@ 00077b0c 1078
.org 0x77b0e
	adds r0, #1	@ 00077b0e 0130
.org 0x77b10
	movs r1, #1	@ 00077b10 0121
.org 0x77b12
	ands r0, r1	@ 00077b12 0840
.org 0x77b14
	strb r0, [r2, #0]	@ 00077b14 1070
.org 0x77b16
	cmp r0, #0	@ 00077b16 0028
.org 0x77b18
	beq.n 0x77b22	@ 00077b18 03d0
.org 0x77b1a
	adds r0, r4, #0	@ 00077b1a 201c
.org 0x77b1c
	bl 0x790a8	@ 00077b1c 01f0c4fa
.org 0x77b20
	b.n 0x77b28	@ 00077b20 02e0
.org 0x77b22
	adds r0, r4, #0	@ 00077b22 201c
.org 0x77b24
	bl 0x79188	@ 00077b24 01f030fb
.org 0x77b28
	ldr r0, [pc, #20]	@ 00077b28 0548
.org 0x77b2a
	ldrb r1, [r4, #13]	@ 00077b2a 617b
.org 0x77b2c
	lsls r1, r1, #2	@ 00077b2c 8900
.org 0x77b2e
	adds r1, r1, r0	@ 00077b2e 0918
.org 0x77b30
	ldr r1, [r1, #0]	@ 00077b30 0968
.org 0x77b32
	adds r0, r4, #0	@ 00077b32 201c
.org 0x77b34
	bl 0x128f80	@ 00077b34 b1f024fa
.org 0x77b38
	pop {r4}	@ 00077b38 10bc
.org 0x77b3a
	pop {r0}	@ 00077b3a 01bc
.org 0x77b3c
	bx r0	@ 00077b3c 0047

@ FUN_080cbca4  entry 0x080cbca4  size 52
.thumb
.org 0xcbca4
FUN_080cbca4:
	push {lr}	@ 000cbca4 00b5
.org 0xcbca6
	adds r2, r0, #0	@ 000cbca6 021c
.org 0xcbca8
	ldr r0, [r2, #40]	@ 000cbca8 906a
.org 0xcbcaa
	adds r0, #200	@ 000cbcaa c830
.org 0xcbcac
	ldrb r0, [r0, #0]	@ 000cbcac 0078
.org 0xcbcae
	cmp r0, #0	@ 000cbcae 0028
.org 0xcbcb0
	beq.n 0xcbcc8	@ 000cbcb0 0ad0
.org 0xcbcb2
	ldrb r0, [r2, #13]	@ 000cbcb2 507b
.org 0xcbcb4
	cmp r0, #0	@ 000cbcb4 0028
.org 0xcbcb6
	beq.n 0xcbcc8	@ 000cbcb6 07d0
.org 0xcbcb8
	adds r0, r2, #0	@ 000cbcb8 101c
.org 0xcbcba
	adds r0, #116	@ 000cbcba 7430
.org 0xcbcbc
	ldr r1, [pc, #4]	@ 000cbcbc 0149
.org 0xcbcbe
	bl 0x5784	@ 000cbcbe 39f761fd
.org 0xcbcc2
	b.n 0xcbcd8	@ 000cbcc2 09e0
.org 0xcbcc4
	.byte 0xc8,0x65,0x86,0x08	@ 000cbcc4 data
.org 0xcbcc8
	ldr r0, [pc, #16]	@ 000cbcc8 0448
.org 0xcbcca
	ldrb r1, [r2, #13]	@ 000cbcca 517b
.org 0xcbccc
	lsls r1, r1, #2	@ 000cbccc 8900
.org 0xcbcce
	adds r1, r1, r0	@ 000cbcce 0918
.org 0xcbcd0
	ldr r1, [r1, #0]	@ 000cbcd0 0968
.org 0xcbcd2
	adds r0, r2, #0	@ 000cbcd2 101c
.org 0xcbcd4
	bl 0x128f80	@ 000cbcd4 5df054f9

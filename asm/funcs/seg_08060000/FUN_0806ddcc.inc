@ FUN_0806ddcc  entry 0x0806ddcc  size 72
.thumb
.org 0x6ddcc
FUN_0806ddcc:
	push {r4, lr}	@ 0006ddcc 10b5
.org 0x6ddce
	adds r4, r0, #0	@ 0006ddce 041c
.org 0x6ddd0
	ldrb r0, [r4, #15]	@ 0006ddd0 e07b
.org 0x6ddd2
	cmp r0, #0	@ 0006ddd2 0028
.org 0x6ddd4
	bne.n 0x6ddf6	@ 0006ddd4 0fd1
.org 0x6ddd6
	movs r0, #181	@ 0006ddd6 b520
.org 0x6ddd8
	lsls r0, r0, #1	@ 0006ddd8 4000
.org 0x6ddda
	bl 0x2b10	@ 0006ddda 94f799fe
.org 0x6ddde
	adds r0, r4, #0	@ 0006ddde 201c
.org 0x6dde0
	adds r0, #116	@ 0006dde0 7430
.org 0x6dde2
	ldr r1, [pc, #48]	@ 0006dde2 0c49
.org 0x6dde4
	bl 0x5784	@ 0006dde4 97f7cefc
.org 0x6dde8
	ldr r1, [pc, #44]	@ 0006dde8 0b49
.org 0x6ddea
	adds r0, r4, #0	@ 0006ddea 201c
.org 0x6ddec
	bl 0x1cf00	@ 0006ddec aff788f8
.org 0x6ddf0
	ldrb r0, [r4, #15]	@ 0006ddf0 e07b
.org 0x6ddf2
	adds r0, #1	@ 0006ddf2 0130
.org 0x6ddf4
	strb r0, [r4, #15]	@ 0006ddf4 e073
.org 0x6ddf6
	adds r0, r4, #0	@ 0006ddf6 201c
.org 0x6ddf8
	bl 0x1cff0	@ 0006ddf8 aff7faf8
.org 0x6ddfc
	ldr r0, [pc, #28]	@ 0006ddfc 0748
.org 0x6ddfe
	ldrb r0, [r0, #18]	@ 0006ddfe 807c
.org 0x6de00
	movs r1, #1	@ 0006de00 0121
.org 0x6de02
	ands r1, r0	@ 0006de02 0140
.org 0x6de04
	cmp r1, #0	@ 0006de04 0029
.org 0x6de06
	bne.n 0x6de0e	@ 0006de06 02d1
.org 0x6de08
	movs r0, #3	@ 0006de08 0320
.org 0x6de0a
	strb r0, [r4, #14]	@ 0006de0a a073
.org 0x6de0c
	strb r1, [r4, #15]	@ 0006de0c e173
.org 0x6de0e
	pop {r4}	@ 0006de0e 10bc
.org 0x6de10
	pop {r0}	@ 0006de10 01bc
.org 0x6de12
	bx r0	@ 0006de12 0047

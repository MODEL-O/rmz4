@ FUN_080d4c24  entry 0x080d4c24  size 68
.thumb
.org 0xd4c24
FUN_080d4c24:
	push {r4, lr}	@ 000d4c24 10b5
.org 0xd4c26
	adds r4, r0, #0	@ 000d4c26 041c
.org 0xd4c28
	bl 0x1cff0	@ 000d4c28 48f7e2f9
.org 0xd4c2c
	ldrb r0, [r4, #16]	@ 000d4c2c 207c
.org 0xd4c2e
	cmp r0, #0	@ 000d4c2e 0028
.org 0xd4c30
	beq.n 0xd4c44	@ 000d4c30 08d0
.org 0xd4c32
	ldr r2, [r4, #40]	@ 000d4c32 a26a
.org 0xd4c34
	ldr r0, [r2, #0]	@ 000d4c34 1068
.org 0xd4c36
	ldr r1, [r4, #100]	@ 000d4c36 616e
.org 0xd4c38
	adds r0, r0, r1	@ 000d4c38 4018
.org 0xd4c3a
	str r0, [r4, #84]	@ 000d4c3a 6065
.org 0xd4c3c
	ldr r0, [r2, #4]	@ 000d4c3c 5068
.org 0xd4c3e
	ldr r1, [r4, #104]	@ 000d4c3e a16e
.org 0xd4c40
	adds r0, r0, r1	@ 000d4c40 4018
.org 0xd4c42
	str r0, [r4, #88]	@ 000d4c42 a065
.org 0xd4c44
	ldrb r0, [r4, #18]	@ 000d4c44 a07c
.org 0xd4c46
	subs r0, #1	@ 000d4c46 0138
.org 0xd4c48
	strb r0, [r4, #18]	@ 000d4c48 a074
.org 0xd4c4a
	lsls r0, r0, #24	@ 000d4c4a 0006
.org 0xd4c4c
	cmp r0, #0	@ 000d4c4c 0028
.org 0xd4c4e
	bne.n 0xd4c62	@ 000d4c4e 08d1
.org 0xd4c50
	ldr r1, [pc, #20]	@ 000d4c50 0549
.org 0xd4c52
	ldrb r0, [r4, #9]	@ 000d4c52 607a
.org 0xd4c54
	lsls r0, r0, #2	@ 000d4c54 8000
.org 0xd4c56
	adds r0, r0, r1	@ 000d4c56 4018
.org 0xd4c58
	movs r1, #2	@ 000d4c58 0221
.org 0xd4c5a
	str r1, [r4, #12]	@ 000d4c5a e160
.org 0xd4c5c
	ldr r0, [r0, #0]	@ 000d4c5c 0068
.org 0xd4c5e
	ldr r0, [r0, #8]	@ 000d4c5e 8068
.org 0xd4c60
	str r0, [r4, #20]	@ 000d4c60 6061
.org 0xd4c62
	pop {r4}	@ 000d4c62 10bc
.org 0xd4c64
	pop {r0}	@ 000d4c64 01bc
.org 0xd4c66
	bx r0	@ 000d4c66 0047

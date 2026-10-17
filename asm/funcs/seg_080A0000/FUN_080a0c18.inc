@ FUN_080a0c18  entry 0x080a0c18  size 60
.thumb
.org 0xa0c18
FUN_080a0c18:
	push {r4, r5, r6, r7, lr}	@ 000a0c18 f0b5
.org 0xa0c1a
	sub sp, #8	@ 000a0c1a 82b0
.org 0xa0c1c
	ldrb r1, [r0, #10]	@ 000a0c1c 817a
.org 0xa0c1e
	lsrs r1, r1, #4	@ 000a0c1e 0909
.org 0xa0c20
	movs r2, #1	@ 000a0c20 0122
.org 0xa0c22
	ands r1, r2	@ 000a0c22 1140
.org 0xa0c24
	ldr r2, [r0, #84]	@ 000a0c24 426d
.org 0xa0c26
	str r2, [sp, #0]	@ 000a0c26 0092
.org 0xa0c28
	ldr r0, [r0, #88]	@ 000a0c28 806d
.org 0xa0c2a
	str r0, [sp, #4]	@ 000a0c2a 0190
.org 0xa0c2c
	lsls r0, r1, #4	@ 000a0c2c 0801
.org 0xa0c2e
	orrs r1, r0	@ 000a0c2e 0143
.org 0xa0c30
	lsls r6, r1, #24	@ 000a0c30 0e06
.org 0xa0c32
	movs r5, #0	@ 000a0c32 0025
.org 0xa0c34
	ldr r7, [pc, #28]	@ 000a0c34 074f
.org 0xa0c36
	movs r4, #1	@ 000a0c36 0124
.org 0xa0c38
	adds r1, r5, r7	@ 000a0c38 e919
.org 0xa0c3a
	mov r0, sp	@ 000a0c3a 6846
.org 0xa0c3c
	movs r2, #0	@ 000a0c3c 0022
.org 0xa0c3e
	lsrs r3, r6, #24	@ 000a0c3e 330e
.org 0xa0c40
	bl 0xd4c8c	@ 000a0c40 34f024f8
.org 0xa0c44
	adds r5, #28	@ 000a0c44 1c35
.org 0xa0c46
	subs r4, #1	@ 000a0c46 013c
.org 0xa0c48
	cmp r4, #0	@ 000a0c48 002c
.org 0xa0c4a
	bge.n 0xa0c38	@ 000a0c4a f5da
.org 0xa0c4c
	add sp, #8	@ 000a0c4c 02b0
.org 0xa0c4e
	pop {r4, r5, r6, r7}	@ 000a0c4e f0bc
.org 0xa0c50
	pop {r0}	@ 000a0c50 01bc
.org 0xa0c52
	bx r0	@ 000a0c52 0047

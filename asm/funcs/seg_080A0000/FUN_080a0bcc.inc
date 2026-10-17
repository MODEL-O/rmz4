@ FUN_080a0bcc  entry 0x080a0bcc  size 70
.thumb
.org 0xa0bcc
FUN_080a0bcc:
	push {r4, r5, r6, r7, lr}	@ 000a0bcc f0b5
.org 0xa0bce
	ldrb r1, [r0, #10]	@ 000a0bce 817a
.org 0xa0bd0
	lsrs r1, r1, #4	@ 000a0bd0 0909
.org 0xa0bd2
	movs r2, #1	@ 000a0bd2 0122
.org 0xa0bd4
	ands r1, r2	@ 000a0bd4 1140
.org 0xa0bd6
	lsls r1, r1, #1	@ 000a0bd6 4900
.org 0xa0bd8
	subs r1, #1	@ 000a0bd8 0139
.org 0xa0bda
	lsls r2, r1, #2	@ 000a0bda 8a00
.org 0xa0bdc
	adds r2, r2, r1	@ 000a0bdc 5218
.org 0xa0bde
	lsls r2, r2, #10	@ 000a0bde 9202
.org 0xa0be0
	ldr r1, [r0, #84]	@ 000a0be0 416d
.org 0xa0be2
	adds r5, r1, r2	@ 000a0be2 8d18
.org 0xa0be4
	ldr r4, [r0, #88]	@ 000a0be4 846d
.org 0xa0be6
	adds r7, r4, #0	@ 000a0be6 271c
.org 0xa0be8
	adds r0, r5, #0	@ 000a0be8 281c
.org 0xa0bea
	adds r1, r4, #0	@ 000a0bea 211c
.org 0xa0bec
	bl 0x7c7c	@ 000a0bec 67f746f8
.org 0xa0bf0
	lsls r0, r0, #16	@ 000a0bf0 0004
.org 0xa0bf2
	cmp r0, #0	@ 000a0bf2 0028
.org 0xa0bf4
	beq.n 0xa0c10	@ 000a0bf4 0cd0
.org 0xa0bf6
	adds r0, r5, #0	@ 000a0bf6 281c
.org 0xa0bf8
	adds r1, r4, #0	@ 000a0bf8 211c
.org 0xa0bfa
	bl 0x8534	@ 000a0bfa 67f79bfc
.org 0xa0bfe
	ldr r2, [pc, #12]	@ 000a0bfe 034a
.org 0xa0c00
	adds r1, r7, r2	@ 000a0c00 b918
.org 0xa0c02
	cmp r0, r1	@ 000a0c02 8842
.org 0xa0c04
	bge.n 0xa0c10	@ 000a0c04 04da
.org 0xa0c06
	movs r0, #1	@ 000a0c06 0120
.org 0xa0c08
	b.n 0xa0c12	@ 000a0c08 03e0
.org 0xa0c0a
	.byte 0x00	@ 000a0c0a data
.org 0xa0c0b
	.byte 0x00	@ 000a0c0b data
.org 0xa0c0c
	.byte 0x00,0xde,0xff,0xff	@ 000a0c0c data
.org 0xa0c10
	movs r0, #0	@ 000a0c10 0020

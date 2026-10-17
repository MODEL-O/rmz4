@ FUN_08102d60  entry 0x08102d60  size 46
.thumb
.org 0x102d60
FUN_08102d60:
	push {lr}	@ 00102d60 00b5
.org 0x102d62
	adds r1, r0, #0	@ 00102d62 011c
.org 0x102d64
	movs r3, #0	@ 00102d64 0023
.org 0x102d66
	adds r1, #188	@ 00102d66 bc31
.org 0x102d68
	ldrh r2, [r1, #0]	@ 00102d68 0a88
.org 0x102d6a
	ldr r1, [pc, #36]	@ 00102d6a 0949
.org 0x102d6c
	cmp r2, r1	@ 00102d6c 8a42
.org 0x102d6e
	bne.n 0x102d80	@ 00102d6e 07d1
.org 0x102d70
	ldr r1, [pc, #32]	@ 00102d70 0849
.org 0x102d72
	ldr r1, [r1, #0]	@ 00102d72 0968
.org 0x102d74
	ldrb r2, [r1, #5]	@ 00102d74 4a79
.org 0x102d76
	movs r1, #1	@ 00102d76 0121
.org 0x102d78
	ands r1, r2	@ 00102d78 1140
.org 0x102d7a
	cmp r1, #0	@ 00102d7a 0029
.org 0x102d7c
	bne.n 0x102d80	@ 00102d7c 00d1
.org 0x102d7e
	movs r3, #20	@ 00102d7e 1423
.org 0x102d80
	cmp r3, #0	@ 00102d80 002b
.org 0x102d82
	beq.n 0x102d8a	@ 00102d82 02d0
.org 0x102d84
	adds r0, r3, #0	@ 00102d84 181c
.org 0x102d86
	bl 0x10901c	@ 00102d86 06f049f9
.org 0x102d8a
	pop {r1}	@ 00102d8a 02bc
.org 0x102d8c
	bx r1	@ 00102d8c 0847

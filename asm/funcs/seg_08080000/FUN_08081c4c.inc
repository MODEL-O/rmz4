@ FUN_08081c4c  entry 0x08081c4c  size 66
.thumb
.org 0x81c4c
FUN_08081c4c:
	push {r4, lr}	@ 00081c4c 10b5
.org 0x81c4e
	adds r1, r0, #0	@ 00081c4e 011c
.org 0x81c50
	ldr r2, [r1, #20]	@ 00081c50 4a69
.org 0x81c52
	movs r0, #1	@ 00081c52 0120
.org 0x81c54
	ands r0, r2	@ 00081c54 1040
.org 0x81c56
	cmp r0, #0	@ 00081c56 0028
.org 0x81c58
	beq.n 0x81c88	@ 00081c58 16d0
.org 0x81c5a
	ldr r4, [r1, #44]	@ 00081c5a cc6a
.org 0x81c5c
	ldr r0, [pc, #48]	@ 00081c5c 0c48
.org 0x81c5e
	ldr r1, [r0, #0]	@ 00081c5e 0168
.org 0x81c60
	movs r0, #128	@ 00081c60 8020
.org 0x81c62
	lsls r0, r0, #2	@ 00081c62 8000
.org 0x81c64
	ands r0, r2	@ 00081c64 1040
.org 0x81c66
	cmp r0, #0	@ 00081c66 0028
.org 0x81c68
	beq.n 0x81c88	@ 00081c68 0ed0
.org 0x81c6a
	movs r0, #128	@ 00081c6a 8020
.org 0x81c6c
	lsls r0, r0, #10	@ 00081c6c 8002
.org 0x81c6e
	ands r2, r0	@ 00081c6e 0240
.org 0x81c70
	cmp r2, #0	@ 00081c70 002a
.org 0x81c72
	beq.n 0x81c88	@ 00081c72 09d0
.org 0x81c74
	cmp r1, #0	@ 00081c74 0029
.org 0x81c76
	beq.n 0x81c88	@ 00081c76 07d0
.org 0x81c78
	adds r0, r1, #0	@ 00081c78 081c
.org 0x81c7a
	movs r1, #3	@ 00081c7a 0321
.org 0x81c7c
	movs r2, #2	@ 00081c7c 0222
.org 0x81c7e
	bl 0x3a578	@ 00081c7e b8f77bfc
.org 0x81c82
	adds r1, r4, #0	@ 00081c82 211c
.org 0x81c84
	adds r1, #182	@ 00081c84 b631
.org 0x81c86
	strb r0, [r1, #0]	@ 00081c86 0870
.org 0x81c88
	pop {r4}	@ 00081c88 10bc
.org 0x81c8a
	pop {r0}	@ 00081c8a 01bc
.org 0x81c8c
	bx r0	@ 00081c8c 0047

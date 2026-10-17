@ FUN_0801687c  entry 0x0801687c  size 28
.thumb
.org 0x1687c
FUN_0801687c:
	push {r4, lr}	@ 0001687c 10b5
.org 0x1687e
	adds r4, r0, #0	@ 0001687e 041c
.org 0x16880
	ldrb r0, [r4, #14]	@ 00016880 a07b
.org 0x16882
	cmp r0, #11	@ 00016882 0b28
.org 0x16884
	bls.n 0x16888	@ 00016884 00d9
.org 0x16886
	b.n 0x16a84	@ 00016886 fde0
.org 0x16888
	lsls r0, r0, #2	@ 00016888 8000
.org 0x1688a
	ldr r1, [pc, #8]	@ 0001688a 0249
.org 0x1688c
	adds r0, r0, r1	@ 0001688c 4018
.org 0x1688e
	ldr r0, [r0, #0]	@ 0001688e 0068
.org 0x16890
	mov pc, r0	@ 00016890 8746
.org 0x16892
	.byte 0x00	@ 00016892 data
.org 0x16893
	.byte 0x00	@ 00016893 data
.org 0x16894
	.byte 0x98,0x68,0x01,0x08	@ 00016894 data

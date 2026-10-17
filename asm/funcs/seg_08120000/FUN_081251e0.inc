@ FUN_081251e0  entry 0x081251e0  size 62
.thumb
.org 0x1251e0
FUN_081251e0:
	push {r4, r5, lr}	@ 001251e0 30b5
.org 0x1251e2
	adds r5, r0, #0	@ 001251e2 051c
.org 0x1251e4
	ldr r1, [pc, #32]	@ 001251e4 0849
.org 0x1251e6
	adds r0, r5, r1	@ 001251e6 6818
.org 0x1251e8
	ldr r1, [r0, #0]	@ 001251e8 0168
.org 0x1251ea
	movs r2, #149	@ 001251ea 9522
.org 0x1251ec
	lsls r2, r2, #2	@ 001251ec 9200
.org 0x1251ee
	adds r1, r1, r2	@ 001251ee 8918
.org 0x1251f0
	movs r2, #2	@ 001251f0 0222
.org 0x1251f2
	strb r2, [r1, #0]	@ 001251f2 0a70
.org 0x1251f4
	ldrb r0, [r0, #25]	@ 001251f4 407e
.org 0x1251f6
	cmp r0, #5	@ 001251f6 0528
.org 0x1251f8
	bls.n 0x1251fc	@ 001251f8 00d9
.org 0x1251fa
	b.n 0x1252f8	@ 001251fa 7de0
.org 0x1251fc
	lsls r0, r0, #2	@ 001251fc 8000
.org 0x1251fe
	ldr r1, [pc, #12]	@ 001251fe 0349
.org 0x125200
	adds r0, r0, r1	@ 00125200 4018
.org 0x125202
	ldr r0, [r0, #0]	@ 00125202 0068
.org 0x125204
	mov pc, r0	@ 00125204 8746
.org 0x125206
	.byte 0x00	@ 00125206 data
.org 0x125207
	.byte 0x00	@ 00125207 data
.org 0x125208
	.byte 0xcc,0x0d,0x00,0x00	@ 00125208 data
.org 0x12520c
	.byte 0x10,0x52,0x12,0x08	@ 0012520c data
.org 0x125210
	.byte 0x28,0x52,0x12,0x08	@ 00125210 data
.org 0x125214
	.byte 0x3a,0x52,0x12,0x08	@ 00125214 data
.org 0x125218
	.byte 0x54,0x52,0x12,0x08	@ 00125218 data
.org 0x12521c
	.byte 0xb0,0x52,0x12,0x08	@ 0012521c data

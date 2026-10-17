@ FUN_08112ad8  entry 0x08112ad8  size 110
.thumb
.org 0x112ad8
FUN_08112ad8:
	push {r4, r5, lr}	@ 00112ad8 30b5
.org 0x112ada
	adds r5, r0, #0	@ 00112ada 051c
.org 0x112adc
	bl 0x6d80	@ 00112adc f4f650f9
.org 0x112ae0
	movs r1, #247	@ 00112ae0 f721
.org 0x112ae2
	lsls r1, r1, #5	@ 00112ae2 4901
.org 0x112ae4
	adds r0, r5, r1	@ 00112ae4 6818
.org 0x112ae6
	ldr r4, [pc, #96]	@ 00112ae6 184c
.org 0x112ae8
	adds r1, r4, #0	@ 00112ae8 211c
.org 0x112aea
	movs r2, #0	@ 00112aea 0022
.org 0x112aec
	bl 0x128be0	@ 00112aec 16f078f8
.org 0x112af0
	movs r1, #247	@ 00112af0 f721
.org 0x112af2
	lsls r1, r1, #5	@ 00112af2 4901
.org 0x112af4
	adds r0, r5, r1	@ 00112af4 6818
.org 0x112af6
	ldr r2, [pc, #84]	@ 00112af6 154a
.org 0x112af8
	adds r1, r4, #0	@ 00112af8 211c
.org 0x112afa
	bl 0x128be4	@ 00112afa 16f073f8
.org 0x112afe
	ldr r1, [pc, #80]	@ 00112afe 1449
.org 0x112b00
	adds r0, r5, r1	@ 00112b00 6818
.org 0x112b02
	ldr r4, [pc, #80]	@ 00112b02 144c
.org 0x112b04
	adds r1, r4, #0	@ 00112b04 211c
.org 0x112b06
	movs r2, #0	@ 00112b06 0022
.org 0x112b08
	bl 0x128be0	@ 00112b08 16f06af8
.org 0x112b0c
	ldr r1, [pc, #64]	@ 00112b0c 1049
.org 0x112b0e
	adds r0, r5, r1	@ 00112b0e 6818
.org 0x112b10
	ldr r2, [pc, #68]	@ 00112b10 114a
.org 0x112b12
	adds r1, r4, #0	@ 00112b12 211c
.org 0x112b14
	bl 0x128be4	@ 00112b14 16f066f8
.org 0x112b18
	ldr r1, [pc, #64]	@ 00112b18 1049
.org 0x112b1a
	adds r0, r5, r1	@ 00112b1a 6818
.org 0x112b1c
	ldr r1, [pc, #64]	@ 00112b1c 1049
.org 0x112b1e
	movs r2, #128	@ 00112b1e 8022
.org 0x112b20
	lsls r2, r2, #5	@ 00112b20 5201
.org 0x112b22
	bl 0x128be0	@ 00112b22 16f05df8
.org 0x112b26
	ldr r1, [pc, #60]	@ 00112b26 0f49
.org 0x112b28
	adds r0, r5, r1	@ 00112b28 6818
.org 0x112b2a
	ldr r4, [pc, #60]	@ 00112b2a 0f4c
.org 0x112b2c
	adds r1, r4, #0	@ 00112b2c 211c
.org 0x112b2e
	movs r2, #128	@ 00112b2e 8022
.org 0x112b30
	bl 0x128be0	@ 00112b30 16f056f8
.org 0x112b34
	ldr r0, [pc, #52]	@ 00112b34 0d48
.org 0x112b36
	adds r4, r4, r0	@ 00112b36 2418
.org 0x112b38
	ldr r1, [pc, #52]	@ 00112b38 0d49
.org 0x112b3a
	adds r5, r5, r1	@ 00112b3a 6d18
.org 0x112b3c
	ldr r0, [r5, #0]	@ 00112b3c 2868
.org 0x112b3e
	strh r0, [r4, #0]	@ 00112b3e 2080
.org 0x112b40
	pop {r4, r5}	@ 00112b40 30bc
.org 0x112b42
	pop {r0}	@ 00112b42 01bc
.org 0x112b44
	bx r0	@ 00112b44 0047

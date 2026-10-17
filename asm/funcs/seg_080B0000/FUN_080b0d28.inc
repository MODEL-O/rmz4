@ FUN_080b0d28  entry 0x080b0d28  size 46
.thumb
.org 0xb0d28
FUN_080b0d28:
	push {lr}	@ 000b0d28 00b5
.org 0xb0d2a
	adds r2, r0, #0	@ 000b0d2a 021c
.org 0xb0d2c
	ldr r0, [pc, #40]	@ 000b0d2c 0a48
.org 0xb0d2e
	ldr r3, [r0, #0]	@ 000b0d2e 0368
.org 0xb0d30
	ldr r0, [r3, #84]	@ 000b0d30 586d
.org 0xb0d32
	ldr r1, [r2, #84]	@ 000b0d32 516d
.org 0xb0d34
	subs r0, r0, r1	@ 000b0d34 401a
.org 0xb0d36
	ldr r2, [r2, #88]	@ 000b0d36 926d
.org 0xb0d38
	movs r1, #240	@ 000b0d38 f021
.org 0xb0d3a
	lsls r1, r1, #4	@ 000b0d3a 0901
.org 0xb0d3c
	adds r2, r2, r1	@ 000b0d3c 5218
.org 0xb0d3e
	ldr r1, [r3, #88]	@ 000b0d3e 996d
.org 0xb0d40
	subs r1, r1, r2	@ 000b0d40 891a
.org 0xb0d42
	lsls r0, r0, #8	@ 000b0d42 0002
.org 0xb0d44
	asrs r0, r0, #16	@ 000b0d44 0014
.org 0xb0d46
	lsls r1, r1, #8	@ 000b0d46 0902
.org 0xb0d48
	asrs r1, r1, #16	@ 000b0d48 0914
.org 0xb0d4a
	bl 0x128bdc	@ 000b0d4a 77f047ff
.org 0xb0d4e
	lsls r0, r0, #16	@ 000b0d4e 0004
.org 0xb0d50
	lsrs r0, r0, #24	@ 000b0d50 000e
.org 0xb0d52
	pop {r1}	@ 000b0d52 02bc
.org 0xb0d54
	bx r1	@ 000b0d54 0847

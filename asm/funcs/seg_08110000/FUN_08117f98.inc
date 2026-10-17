@ FUN_08117f98  entry 0x08117f98  size 72
.thumb
.org 0x117f98
FUN_08117f98:
	push {r4, r5, r6, lr}	@ 00117f98 70b5
.org 0x117f9a
	adds r5, r0, #0	@ 00117f9a 051c
.org 0x117f9c
	ldr r0, [pc, #64]	@ 00117f9c 1048
.org 0x117f9e
	adds r1, r5, r0	@ 00117f9e 2918
.org 0x117fa0
	movs r0, #240	@ 00117fa0 f020
.org 0x117fa2
	lsls r0, r0, #7	@ 00117fa2 c001
.org 0x117fa4
	str r0, [r1, #0]	@ 00117fa4 0860
.org 0x117fa6
	movs r0, #160	@ 00117fa6 a020
.org 0x117fa8
	lsls r0, r0, #7	@ 00117fa8 c001
.org 0x117faa
	str r0, [r1, #4]	@ 00117faa 4860
.org 0x117fac
	ldr r0, [pc, #52]	@ 00117fac 0d48
.org 0x117fae
	adds r6, r5, r0	@ 00117fae 2e18
.org 0x117fb0
	adds r0, r6, #0	@ 00117fb0 301c
.org 0x117fb2
	movs r2, #0	@ 00117fb2 0022
.org 0x117fb4
	movs r3, #0	@ 00117fb4 0023
.org 0x117fb6
	bl 0x2c0c	@ 00117fb6 eaf629fe
.org 0x117fba
	ldr r0, [pc, #44]	@ 00117fba 0b48
.org 0x117fbc
	adds r4, r5, r0	@ 00117fbc 2c18
.org 0x117fbe
	adds r0, r4, #0	@ 00117fbe 201c
.org 0x117fc0
	bl 0x3384	@ 00117fc0 ebf6e0f9
.org 0x117fc4
	adds r0, r4, #0	@ 00117fc4 201c
.org 0x117fc6
	adds r1, r6, #0	@ 00117fc6 311c
.org 0x117fc8
	bl 0x33bc	@ 00117fc8 ebf6f8f9
.org 0x117fcc
	ldr r0, [pc, #28]	@ 00117fcc 0748
.org 0x117fce
	adds r5, r5, r0	@ 00117fce 2d18
.org 0x117fd0
	ldr r1, [pc, #28]	@ 00117fd0 0749
.org 0x117fd2
	adds r0, r5, #0	@ 00117fd2 281c
.org 0x117fd4
	movs r2, #64	@ 00117fd4 4022
.org 0x117fd6
	bl 0x10a1b4	@ 00117fd6 f2f7edf8
.org 0x117fda
	pop {r4, r5, r6}	@ 00117fda 70bc
.org 0x117fdc
	pop {r0}	@ 00117fdc 01bc
.org 0x117fde
	bx r0	@ 00117fde 0047

@ FUN_08128f3c  entry 0x08128f3c  size 62
.thumb
.org 0x128f3c
FUN_08128f3c:
	push {r4, r5, r6, lr}	@ 00128f3c 70b5
.org 0x128f3e
	adds r5, r1, #0	@ 00128f3e 0d1c
.org 0x128f40
	lsls r0, r0, #16	@ 00128f40 0004
.org 0x128f42
	lsrs r4, r0, #16	@ 00128f42 040c
.org 0x128f44
	movs r6, #0	@ 00128f44 0026
.org 0x128f46
	b.n 0x128f4e	@ 00128f46 02e0
.org 0x128f48
	adds r0, r6, #1	@ 00128f48 701c
.org 0x128f4a
	lsls r0, r0, #24	@ 00128f4a 0006
.org 0x128f4c
	lsrs r6, r0, #24	@ 00128f4c 060e
.org 0x128f4e
	cmp r6, #2	@ 00128f4e 022e
.org 0x128f50
	bhi.n 0x128f72	@ 00128f50 0fd8
.org 0x128f52
	adds r0, r4, #0	@ 00128f52 201c
.org 0x128f54
	adds r1, r5, #0	@ 00128f54 291c
.org 0x128f56
	bl 0x128d70	@ 00128f56 fff70bff
.org 0x128f5a
	lsls r0, r0, #16	@ 00128f5a 0004
.org 0x128f5c
	lsrs r2, r0, #16	@ 00128f5c 020c
.org 0x128f5e
	cmp r2, #0	@ 00128f5e 002a
.org 0x128f60
	bne.n 0x128f48	@ 00128f60 f2d1
.org 0x128f62
	adds r0, r4, #0	@ 00128f62 201c
.org 0x128f64
	adds r1, r5, #0	@ 00128f64 291c
.org 0x128f66
	bl 0x128ee4	@ 00128f66 fff7bdff
.org 0x128f6a
	lsls r0, r0, #16	@ 00128f6a 0004
.org 0x128f6c
	lsrs r2, r0, #16	@ 00128f6c 020c
.org 0x128f6e
	cmp r2, #0	@ 00128f6e 002a
.org 0x128f70
	bne.n 0x128f48	@ 00128f70 ead1
.org 0x128f72
	adds r0, r2, #0	@ 00128f72 101c
.org 0x128f74
	pop {r4, r5, r6}	@ 00128f74 70bc
.org 0x128f76
	pop {r1}	@ 00128f76 02bc
.org 0x128f78
	bx r1	@ 00128f78 0847

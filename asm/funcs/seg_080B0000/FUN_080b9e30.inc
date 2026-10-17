@ FUN_080b9e30  entry 0x080b9e30  size 38
.thumb
.org 0xb9e30
FUN_080b9e30:
	push {lr}	@ 000b9e30 00b5
.org 0xb9e32
	adds r2, r0, #0	@ 000b9e32 021c
.org 0xb9e34
	ldr r3, [r2, #40]	@ 000b9e34 936a
.org 0xb9e36
	ldr r0, [r3, #0]	@ 000b9e36 1868
.org 0xb9e38
	ldr r1, [r2, #84]	@ 000b9e38 516d
.org 0xb9e3a
	subs r0, r0, r1	@ 000b9e3a 401a
.org 0xb9e3c
	ldr r1, [r3, #4]	@ 000b9e3c 5968
.org 0xb9e3e
	ldr r2, [r2, #88]	@ 000b9e3e 926d
.org 0xb9e40
	subs r1, r1, r2	@ 000b9e40 891a
.org 0xb9e42
	lsls r0, r0, #8	@ 000b9e42 0002
.org 0xb9e44
	asrs r0, r0, #16	@ 000b9e44 0014
.org 0xb9e46
	lsls r1, r1, #8	@ 000b9e46 0902
.org 0xb9e48
	asrs r1, r1, #16	@ 000b9e48 0914
.org 0xb9e4a
	bl 0x128bdc	@ 000b9e4a 6ef0c7fe
.org 0xb9e4e
	lsls r0, r0, #16	@ 000b9e4e 0004
.org 0xb9e50
	lsrs r0, r0, #24	@ 000b9e50 000e
.org 0xb9e52
	pop {r1}	@ 000b9e52 02bc
.org 0xb9e54
	bx r1	@ 000b9e54 0847

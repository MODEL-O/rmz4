@ FUN_080b3eac  entry 0x080b3eac  size 46
.thumb
.org 0xb3eac
FUN_080b3eac:
	push {lr}	@ 000b3eac 00b5
.org 0xb3eae
	adds r1, r0, #0	@ 000b3eae 011c
.org 0xb3eb0
	adds r1, #184	@ 000b3eb0 b831
.org 0xb3eb2
	ldr r0, [r0, #84]	@ 000b3eb2 406d
.org 0xb3eb4
	ldr r1, [r1, #0]	@ 000b3eb4 0968
.org 0xb3eb6
	subs r2, r0, r1	@ 000b3eb6 421a
.org 0xb3eb8
	cmp r2, #0	@ 000b3eb8 002a
.org 0xb3eba
	blt.n 0xb3ec6	@ 000b3eba 04db
.org 0xb3ebc
	movs r0, #160	@ 000b3ebc a020
.org 0xb3ebe
	lsls r0, r0, #6	@ 000b3ebe 8001
.org 0xb3ec0
	cmp r2, r0	@ 000b3ec0 8242
.org 0xb3ec2
	bgt.n 0xb3ed0	@ 000b3ec2 05dc
.org 0xb3ec4
	b.n 0xb3ed4	@ 000b3ec4 06e0
.org 0xb3ec6
	subs r1, r1, r0	@ 000b3ec6 091a
.org 0xb3ec8
	movs r0, #160	@ 000b3ec8 a020
.org 0xb3eca
	lsls r0, r0, #6	@ 000b3eca 8001
.org 0xb3ecc
	cmp r1, r0	@ 000b3ecc 8142
.org 0xb3ece
	ble.n 0xb3ed4	@ 000b3ece 01dd
.org 0xb3ed0
	movs r0, #1	@ 000b3ed0 0120
.org 0xb3ed2
	b.n 0xb3ed6	@ 000b3ed2 00e0
.org 0xb3ed4
	movs r0, #0	@ 000b3ed4 0020
.org 0xb3ed6
	pop {r1}	@ 000b3ed6 02bc
.org 0xb3ed8
	bx r1	@ 000b3ed8 0847

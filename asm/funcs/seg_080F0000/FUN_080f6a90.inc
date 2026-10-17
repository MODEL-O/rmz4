@ FUN_080f6a90  entry 0x080f6a90  size 40
.thumb
.org 0xf6a90
FUN_080f6a90:
	push {r4, lr}	@ 000f6a90 10b5
.org 0xf6a92
	adds r3, r0, #0	@ 000f6a92 031c
.org 0xf6a94
	movs r0, #1	@ 000f6a94 0120
.org 0xf6a96
	movs r2, #0	@ 000f6a96 0022
.org 0xf6a98
	movs r1, #0	@ 000f6a98 0021
.org 0xf6a9a
	movs r4, #192	@ 000f6a9a c024
.org 0xf6a9c
	lsls r4, r4, #2	@ 000f6a9c a400
.org 0xf6a9e
	b.n 0xf6aa2	@ 000f6a9e 00e0
.org 0xf6aa0
	adds r0, #1	@ 000f6aa0 0130
.org 0xf6aa2
	adds r1, #16	@ 000f6aa2 1031
.org 0xf6aa4
	cmp r1, r4	@ 000f6aa4 a142
.org 0xf6aa6
	ble.n 0xf6aac	@ 000f6aa6 01dd
.org 0xf6aa8
	movs r1, #192	@ 000f6aa8 c021
.org 0xf6aaa
	lsls r1, r1, #2	@ 000f6aaa 8900
.org 0xf6aac
	adds r2, r2, r1	@ 000f6aac 5218
.org 0xf6aae
	cmp r2, r3	@ 000f6aae 9a42
.org 0xf6ab0
	blt.n 0xf6aa0	@ 000f6ab0 f6db
.org 0xf6ab2
	pop {r4}	@ 000f6ab2 10bc
.org 0xf6ab4
	pop {r1}	@ 000f6ab4 02bc
.org 0xf6ab6
	bx r1	@ 000f6ab6 0847

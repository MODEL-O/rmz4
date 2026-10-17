@ FUN_0802f0b4  entry 0x0802f0b4  size 50
.thumb
.org 0x2f0b4
FUN_0802f0b4:
	push {r4, lr}	@ 0002f0b4 10b5
.org 0x2f0b6
	adds r2, r0, #0	@ 0002f0b6 021c
.org 0x2f0b8
	movs r1, #0	@ 0002f0b8 0021
.org 0x2f0ba
	movs r3, #0	@ 0002f0ba 0023
.org 0x2f0bc
	movs r4, #232	@ 0002f0bc e824
.org 0x2f0be
	lsls r4, r4, #1	@ 0002f0be 6400
.org 0x2f0c0
	adds r0, r2, r4	@ 0002f0c0 1019
.org 0x2f0c2
	strh r3, [r0, #0]	@ 0002f0c2 0380
.org 0x2f0c4
	adds r0, #2	@ 0002f0c4 0230
.org 0x2f0c6
	adds r1, #1	@ 0002f0c6 0131
.org 0x2f0c8
	cmp r1, #63	@ 0002f0c8 3f29
.org 0x2f0ca
	bls.n 0x2f0c2	@ 0002f0ca fad9
.org 0x2f0cc
	adds r0, r2, #0	@ 0002f0cc 101c
.org 0x2f0ce
	adds r0, #180	@ 0002f0ce b430
.org 0x2f0d0
	ldrb r0, [r0, #19]	@ 0002f0d0 c07c
.org 0x2f0d2
	cmp r0, #3	@ 0002f0d2 0328
.org 0x2f0d4
	bls.n 0x2f0e0	@ 0002f0d4 04d9
.org 0x2f0d6
	movs r0, #149	@ 0002f0d6 9520
.org 0x2f0d8
	lsls r0, r0, #2	@ 0002f0d8 8000
.org 0x2f0da
	adds r1, r2, r0	@ 0002f0da 1118
.org 0x2f0dc
	movs r0, #1	@ 0002f0dc 0120
.org 0x2f0de
	strb r0, [r1, #0]	@ 0002f0de 0870
.org 0x2f0e0
	pop {r4}	@ 0002f0e0 10bc
.org 0x2f0e2
	pop {r0}	@ 0002f0e2 01bc
.org 0x2f0e4
	bx r0	@ 0002f0e4 0047

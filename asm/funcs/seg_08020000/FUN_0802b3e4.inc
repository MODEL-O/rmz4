@ FUN_0802b3e4  entry 0x0802b3e4  size 26
.thumb
.org 0x2b3e4
FUN_0802b3e4:
	push {lr}	@ 0002b3e4 00b5
.org 0x2b3e6
	cmp r0, #0	@ 0002b3e6 0028
.org 0x2b3e8
	beq.n 0x2b3f8	@ 0002b3e8 06d0
.org 0x2b3ea
	movs r1, #0	@ 0002b3ea 0021
.org 0x2b3ec
	ldrb r0, [r0, #12]	@ 0002b3ec 007b
.org 0x2b3ee
	cmp r0, #1	@ 0002b3ee 0128
.org 0x2b3f0
	bls.n 0x2b3f4	@ 0002b3f0 00d9
.org 0x2b3f2
	movs r1, #1	@ 0002b3f2 0121
.org 0x2b3f4
	adds r0, r1, #0	@ 0002b3f4 081c
.org 0x2b3f6
	b.n 0x2b3fa	@ 0002b3f6 00e0
.org 0x2b3f8
	movs r0, #1	@ 0002b3f8 0120
.org 0x2b3fa
	pop {r1}	@ 0002b3fa 02bc
.org 0x2b3fc
	bx r1	@ 0002b3fc 0847

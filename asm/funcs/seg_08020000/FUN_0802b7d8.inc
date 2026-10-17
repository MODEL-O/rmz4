@ FUN_0802b7d8  entry 0x0802b7d8  size 22
.thumb
.org 0x2b7d8
FUN_0802b7d8:
	push {lr}	@ 0002b7d8 00b5
.org 0x2b7da
	adds r0, #233	@ 0002b7da e930
.org 0x2b7dc
	ldrb r0, [r0, #0]	@ 0002b7dc 0078
.org 0x2b7de
	cmp r0, #0	@ 0002b7de 0028
.org 0x2b7e0
	bne.n 0x2b7e6	@ 0002b7e0 01d1
.org 0x2b7e2
	movs r0, #0	@ 0002b7e2 0020
.org 0x2b7e4
	b.n 0x2b7ea	@ 0002b7e4 01e0
.org 0x2b7e6
	movs r0, #128	@ 0002b7e6 8020
.org 0x2b7e8
	lsls r0, r0, #1	@ 0002b7e8 4000
.org 0x2b7ea
	pop {r1}	@ 0002b7ea 02bc
.org 0x2b7ec
	bx r1	@ 0002b7ec 0847

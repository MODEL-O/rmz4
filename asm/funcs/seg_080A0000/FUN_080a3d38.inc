@ FUN_080a3d38  entry 0x080a3d38  size 30
.thumb
.org 0xa3d38
FUN_080a3d38:
	push {lr}	@ 000a3d38 00b5
.org 0xa3d3a
	adds r2, r0, #0	@ 000a3d3a 021c
.org 0xa3d3c
	ldr r0, [r2, #40]	@ 000a3d3c 906a
.org 0xa3d3e
	adds r1, r0, #0	@ 000a3d3e 011c
.org 0xa3d40
	adds r1, #218	@ 000a3d40 da31
.org 0xa3d42
	ldrb r0, [r1, #0]	@ 000a3d42 0878
.org 0xa3d44
	cmp r0, #0	@ 000a3d44 0028
.org 0xa3d46
	beq.n 0xa3d4c	@ 000a3d46 01d0
.org 0xa3d48
	subs r0, #1	@ 000a3d48 0138
.org 0xa3d4a
	strb r0, [r1, #0]	@ 000a3d4a 0870
.org 0xa3d4c
	adds r0, r2, #0	@ 000a3d4c 101c
.org 0xa3d4e
	bl 0x7f8ec	@ 000a3d4e dbf7cdfd
.org 0xa3d52
	pop {r0}	@ 000a3d52 01bc
.org 0xa3d54
	bx r0	@ 000a3d54 0047

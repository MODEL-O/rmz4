@ FUN_0802b6d8  entry 0x0802b6d8  size 38
.thumb
.org 0x2b6d8
FUN_0802b6d8:
	push {lr}	@ 0002b6d8 00b5
.org 0x2b6da
	adds r3, r0, #0	@ 0002b6da 031c
.org 0x2b6dc
	lsls r1, r1, #24	@ 0002b6dc 0906
.org 0x2b6de
	lsrs r1, r1, #24	@ 0002b6de 090e
.org 0x2b6e0
	movs r0, #159	@ 0002b6e0 9f20
.org 0x2b6e2
	lsls r0, r0, #1	@ 0002b6e2 4000
.org 0x2b6e4
	adds r2, r3, r0	@ 0002b6e4 1a18
.org 0x2b6e6
	ldrb r0, [r2, #0]	@ 0002b6e6 1078
.org 0x2b6e8
	subs r0, r0, r1	@ 0002b6e8 401a
.org 0x2b6ea
	cmp r0, #0	@ 0002b6ea 0028
.org 0x2b6ec
	bge.n 0x2b6f0	@ 0002b6ec 00da
.org 0x2b6ee
	movs r0, #0	@ 0002b6ee 0020
.org 0x2b6f0
	strb r0, [r2, #0]	@ 0002b6f0 1070
.org 0x2b6f2
	movs r1, #159	@ 0002b6f2 9f21
.org 0x2b6f4
	lsls r1, r1, #1	@ 0002b6f4 4900
.org 0x2b6f6
	adds r0, r3, r1	@ 0002b6f6 5818
.org 0x2b6f8
	ldrb r0, [r0, #0]	@ 0002b6f8 0078
.org 0x2b6fa
	pop {r1}	@ 0002b6fa 02bc
.org 0x2b6fc
	bx r1	@ 0002b6fc 0847

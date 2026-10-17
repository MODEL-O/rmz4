@ FUN_0802b6b0  entry 0x0802b6b0  size 38
.thumb
.org 0x2b6b0
FUN_0802b6b0:
	push {lr}	@ 0002b6b0 00b5
.org 0x2b6b2
	mov ip, r0	@ 0002b6b2 8446
.org 0x2b6b4
	lsls r1, r1, #24	@ 0002b6b4 0906
.org 0x2b6b6
	lsrs r1, r1, #24	@ 0002b6b6 090e
.org 0x2b6b8
	movs r2, #159	@ 0002b6b8 9f22
.org 0x2b6ba
	lsls r2, r2, #1	@ 0002b6ba 5200
.org 0x2b6bc
	add r2, ip	@ 0002b6bc 6244
.org 0x2b6be
	ldrb r3, [r2, #0]	@ 0002b6be 1378
.org 0x2b6c0
	adds r0, r3, r1	@ 0002b6c0 5818
.org 0x2b6c2
	cmp r0, #255	@ 0002b6c2 ff28
.org 0x2b6c4
	ble.n 0x2b6c8	@ 0002b6c4 00dd
.org 0x2b6c6
	movs r0, #255	@ 0002b6c6 ff20
.org 0x2b6c8
	strb r0, [r2, #0]	@ 0002b6c8 1070
.org 0x2b6ca
	movs r0, #159	@ 0002b6ca 9f20
.org 0x2b6cc
	lsls r0, r0, #1	@ 0002b6cc 4000
.org 0x2b6ce
	add r0, ip	@ 0002b6ce 6044
.org 0x2b6d0
	ldrb r0, [r0, #0]	@ 0002b6d0 0078
.org 0x2b6d2
	pop {r1}	@ 0002b6d2 02bc
.org 0x2b6d4
	bx r1	@ 0002b6d4 0847

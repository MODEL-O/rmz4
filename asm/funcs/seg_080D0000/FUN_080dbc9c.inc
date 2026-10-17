@ FUN_080dbc9c  entry 0x080dbc9c  size 80
.thumb
.org 0xdbc9c
FUN_080dbc9c:
	push {r4, r5, r6, lr}	@ 000dbc9c 70b5
.org 0xdbc9e
	adds r6, r0, #0	@ 000dbc9e 061c
.org 0xdbca0
	lsls r1, r1, #24	@ 000dbca0 0906
.org 0xdbca2
	lsrs r5, r1, #24	@ 000dbca2 0d0e
.org 0xdbca4
	lsls r2, r2, #24	@ 000dbca4 1206
.org 0xdbca6
	lsrs r4, r2, #24	@ 000dbca6 140e
.org 0xdbca8
	ldr r0, [pc, #64]	@ 000dbca8 1048
.org 0xdbcaa
	ldr r0, [r0, #0]	@ 000dbcaa 0068
.org 0xdbcac
	bl 0x5500	@ 000dbcac 29f728fc
.org 0xdbcb0
	adds r3, r0, #0	@ 000dbcb0 031c
.org 0xdbcb2
	cmp r3, #0	@ 000dbcb2 002b
.org 0xdbcb4
	beq.n 0xdbce4	@ 000dbcb4 16d0
.org 0xdbcb6
	adds r1, r3, #0	@ 000dbcb6 191c
.org 0xdbcb8
	adds r1, #37	@ 000dbcb8 2531
.org 0xdbcba
	movs r2, #0	@ 000dbcba 0022
.org 0xdbcbc
	movs r0, #1	@ 000dbcbc 0120
.org 0xdbcbe
	strb r0, [r1, #0]	@ 000dbcbe 0870
.org 0xdbcc0
	ldr r0, [pc, #44]	@ 000dbcc0 0b48
.org 0xdbcc2
	movs r1, #42	@ 000dbcc2 2a21
.org 0xdbcc4
	strb r1, [r3, #9]	@ 000dbcc4 5972
.org 0xdbcc6
	adds r0, #168	@ 000dbcc6 a830
.org 0xdbcc8
	ldr r0, [r0, #0]	@ 000dbcc8 0068
.org 0xdbcca
	ldr r0, [r0, #0]	@ 000dbcca 0068
.org 0xdbccc
	str r0, [r3, #20]	@ 000dbccc 5861
.org 0xdbcce
	movs r0, #0	@ 000dbcce 0020
.org 0xdbcd0
	strh r2, [r3, #32]	@ 000dbcd0 1a84
.org 0xdbcd2
	adds r1, r3, #0	@ 000dbcd2 191c
.org 0xdbcd4
	adds r1, #34	@ 000dbcd4 2231
.org 0xdbcd6
	strb r0, [r1, #0]	@ 000dbcd6 0870
.org 0xdbcd8
	ldr r0, [r6, #0]	@ 000dbcd8 3068
.org 0xdbcda
	ldr r1, [r6, #4]	@ 000dbcda 7168
.org 0xdbcdc
	str r0, [r3, #84]	@ 000dbcdc 5865
.org 0xdbcde
	str r1, [r3, #88]	@ 000dbcde 9965
.org 0xdbce0
	strb r5, [r3, #16]	@ 000dbce0 1d74
.org 0xdbce2
	strb r4, [r3, #17]	@ 000dbce2 5c74
.org 0xdbce4
	adds r0, r3, #0	@ 000dbce4 181c
.org 0xdbce6
	pop {r4, r5, r6}	@ 000dbce6 70bc
.org 0xdbce8
	pop {r1}	@ 000dbce8 02bc
.org 0xdbcea
	bx r1	@ 000dbcea 0847

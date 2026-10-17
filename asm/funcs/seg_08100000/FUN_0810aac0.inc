@ FUN_0810aac0  entry 0x0810aac0  size 98
.thumb
.org 0x10aac0
FUN_0810aac0:
	push {r4, r5, lr}	@ 0010aac0 30b5
.org 0x10aac2
	adds r4, r0, #0	@ 0010aac2 041c
.org 0x10aac4
	ldr r0, [r4, #40]	@ 0010aac4 a06a
.org 0x10aac6
	ldr r1, [pc, #80]	@ 0010aac6 1449
.org 0x10aac8
	adds r0, r0, r1	@ 0010aac8 4018
.org 0x10aaca
	ldr r5, [r0, #0]	@ 0010aaca 0568
.org 0x10aacc
	ldr r1, [pc, #76]	@ 0010aacc 1349
.org 0x10aace
	adds r0, r4, #0	@ 0010aace 201c
.org 0x10aad0
	bl 0x1cf00	@ 0010aad0 12f716fa
.org 0x10aad4
	movs r2, #0	@ 0010aad4 0022
.org 0x10aad6
	movs r1, #0	@ 0010aad6 0021
.org 0x10aad8
	ldrb r0, [r4, #17]	@ 0010aad8 607c
.org 0x10aada
	cmp r2, r0	@ 0010aada 8242
.org 0x10aadc
	bcs.n 0x10aafa	@ 0010aadc 0dd2
.org 0x10aade
	adds r5, #188	@ 0010aade bc35
.org 0x10aae0
	adds r3, r0, #0	@ 0010aae0 031c
.org 0x10aae2
	adds r0, r5, r1	@ 0010aae2 6818
.org 0x10aae4
	ldrb r0, [r0, #0]	@ 0010aae4 0078
.org 0x10aae6
	cmp r0, #255	@ 0010aae6 ff28
.org 0x10aae8
	beq.n 0x10aaf0	@ 0010aae8 02d0
.org 0x10aaea
	adds r0, r2, #1	@ 0010aaea 501c
.org 0x10aaec
	lsls r0, r0, #24	@ 0010aaec 0006
.org 0x10aaee
	lsrs r2, r0, #24	@ 0010aaee 020e
.org 0x10aaf0
	adds r0, r1, #1	@ 0010aaf0 481c
.org 0x10aaf2
	lsls r0, r0, #24	@ 0010aaf2 0006
.org 0x10aaf4
	lsrs r1, r0, #24	@ 0010aaf4 010e
.org 0x10aaf6
	cmp r1, r3	@ 0010aaf6 9942
.org 0x10aaf8
	bcc.n 0x10aae2	@ 0010aaf8 f3d3
.org 0x10aafa
	lsls r0, r2, #1	@ 0010aafa 5000
.org 0x10aafc
	adds r0, r0, r2	@ 0010aafc 8018
.org 0x10aafe
	lsls r0, r0, #11	@ 0010aafe c002
.org 0x10ab00
	movs r1, #128	@ 0010ab00 8021
.org 0x10ab02
	lsls r1, r1, #8	@ 0010ab02 0902
.org 0x10ab04
	adds r0, r0, r1	@ 0010ab04 4018
.org 0x10ab06
	str r0, [r4, #84]	@ 0010ab06 6065
.org 0x10ab08
	movs r0, #1	@ 0010ab08 0120
.org 0x10ab0a
	ands r2, r0	@ 0010ab0a 0240
.org 0x10ab0c
	cmp r2, #0	@ 0010ab0c 002a
.org 0x10ab0e
	beq.n 0x10ab20	@ 0010ab0e 07d0
.org 0x10ab10
	movs r0, #176	@ 0010ab10 b020
.org 0x10ab12
	lsls r0, r0, #7	@ 0010ab12 c001
.org 0x10ab14
	b.n 0x10ab24	@ 0010ab14 06e0
.org 0x10ab16
	.byte 0x00	@ 0010ab16 data
.org 0x10ab17
	.byte 0x00	@ 0010ab17 data
.org 0x10ab18
	.byte 0xa8,0x63,0x00,0x00	@ 0010ab18 data
.org 0x10ab1c
	.byte 0x2c,0x34,0x00,0x00	@ 0010ab1c data
.org 0x10ab20
	movs r0, #192	@ 0010ab20 c020

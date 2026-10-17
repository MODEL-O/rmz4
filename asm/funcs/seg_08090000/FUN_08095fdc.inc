@ FUN_08095fdc  entry 0x08095fdc  size 50
.thumb
.org 0x95fdc
FUN_08095fdc:
	push {lr}	@ 00095fdc 00b5
.org 0x95fde
	adds r2, r0, #0	@ 00095fde 021c
.org 0x95fe0
	adds r0, #181	@ 00095fe0 b530
.org 0x95fe2
	ldrb r0, [r0, #0]	@ 00095fe2 0078
.org 0x95fe4
	cmp r0, #0	@ 00095fe4 0028
.org 0x95fe6
	beq.n 0x9600a	@ 00095fe6 10d0
.org 0x95fe8
	adds r0, r2, #0	@ 00095fe8 101c
.org 0x95fea
	adds r0, #180	@ 00095fea b430
.org 0x95fec
	ldrb r0, [r0, #0]	@ 00095fec 0078
.org 0x95fee
	cmp r0, #0	@ 00095fee 0028
.org 0x95ff0
	bne.n 0x9600a	@ 00095ff0 0bd1
.org 0x95ff2
	ldr r1, [pc, #28]	@ 00095ff2 0749
.org 0x95ff4
	ldrb r0, [r2, #9]	@ 00095ff4 507a
.org 0x95ff6
	lsls r0, r0, #2	@ 00095ff6 8000
.org 0x95ff8
	adds r0, r0, r1	@ 00095ff8 4018
.org 0x95ffa
	movs r1, #2	@ 00095ffa 0221
.org 0x95ffc
	str r1, [r2, #12]	@ 00095ffc d160
.org 0x95ffe
	ldr r0, [r0, #0]	@ 00095ffe 0068
.org 0x96000
	ldr r0, [r0, #8]	@ 00096000 8068
.org 0x96002
	str r0, [r2, #20]	@ 00096002 5061
.org 0x96004
	adds r0, r2, #0	@ 00096004 101c
.org 0x96006
	bl 0x96224	@ 00096006 00f00df9
.org 0x9600a
	pop {r0}	@ 0009600a 01bc
.org 0x9600c
	bx r0	@ 0009600c 0047

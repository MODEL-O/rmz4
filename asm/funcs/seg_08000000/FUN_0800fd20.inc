@ FUN_0800fd20  entry 0x0800fd20  size 18
.thumb
.org 0xfd20
FUN_0800fd20:
	push {lr}	@ 0000fd20 00b5
.org 0xfd22
	adds r1, r0, #0	@ 0000fd22 011c
.org 0xfd24
	ldrb r0, [r1, #14]	@ 0000fd24 887b
.org 0xfd26
	cmp r0, #0	@ 0000fd26 0028
.org 0xfd28
	bne.n 0xfd2e	@ 0000fd28 01d1
.org 0xfd2a
	adds r0, #1	@ 0000fd2a 0130
.org 0xfd2c
	strb r0, [r1, #14]	@ 0000fd2c 8873
.org 0xfd2e
	pop {r0}	@ 0000fd2e 01bc
.org 0xfd30
	bx r0	@ 0000fd30 0047

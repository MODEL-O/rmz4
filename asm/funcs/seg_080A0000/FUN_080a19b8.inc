@ FUN_080a19b8  entry 0x080a19b8  size 10
.thumb
.org 0xa19b8
FUN_080a19b8:
	push {lr}	@ 000a19b8 00b5
.org 0xa19ba
	bl 0x7f8ec	@ 000a19ba ddf797ff
.org 0xa19be
	pop {r0}	@ 000a19be 01bc
.org 0xa19c0
	bx r0	@ 000a19c0 0047

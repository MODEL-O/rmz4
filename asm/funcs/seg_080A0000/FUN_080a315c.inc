@ FUN_080a315c  entry 0x080a315c  size 10
.thumb
.org 0xa315c
FUN_080a315c:
	push {lr}	@ 000a315c 00b5
.org 0xa315e
	bl 0x7f8ec	@ 000a315e dcf7c5fb
.org 0xa3162
	pop {r0}	@ 000a3162 01bc
.org 0xa3164
	bx r0	@ 000a3164 0047

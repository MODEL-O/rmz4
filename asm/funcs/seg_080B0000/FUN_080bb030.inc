@ FUN_080bb030  entry 0x080bb030  size 10
.thumb
.org 0xbb030
FUN_080bb030:
	push {lr}	@ 000bb030 00b5
.org 0xbb032
	bl 0x7f8ec	@ 000bb032 c4f75bfc
.org 0xbb036
	pop {r0}	@ 000bb036 01bc
.org 0xbb038
	bx r0	@ 000bb038 0047

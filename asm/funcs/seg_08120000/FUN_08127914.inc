@ FUN_08127914  entry 0x08127914  size 10
.thumb
.org 0x127914
FUN_08127914:
	push {lr}	@ 00127914 00b5
.org 0x127916
	bl 0x1276f4	@ 00127916 fff7edfe
.org 0x12791a
	pop {r0}	@ 0012791a 01bc
.org 0x12791c
	bx r0	@ 0012791c 0047

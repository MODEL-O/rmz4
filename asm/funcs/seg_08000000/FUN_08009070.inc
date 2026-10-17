@ FUN_08009070  entry 0x08009070  size 24
.thumb
.org 0x9070
FUN_08009070:
	push {lr}	@ 00009070 00b5
.org 0x9072
	asrs r0, r0, #2	@ 00009072 8010
.org 0x9074
	movs r2, #192	@ 00009074 c022
.org 0x9076
	lsls r2, r2, #4	@ 00009076 1201
.org 0x9078
	adds r0, r0, r2	@ 00009078 8018
.org 0x907a
	cmp r1, r0	@ 0000907a 8142
.org 0x907c
	blt.n 0x9082	@ 0000907c 01db
.org 0x907e
	movs r0, #0	@ 0000907e 0020
.org 0x9080
	b.n 0x9084	@ 00009080 00e0
.org 0x9082
	mvns r0, r1	@ 00009082 c843
.org 0x9084
	pop {r1}	@ 00009084 02bc
.org 0x9086
	bx r1	@ 00009086 0847

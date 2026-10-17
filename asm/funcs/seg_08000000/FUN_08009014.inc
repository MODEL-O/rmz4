@ FUN_08009014  entry 0x08009014  size 24
.thumb
.org 0x9014
FUN_08009014:
	push {lr}	@ 00009014 00b5
.org 0x9016
	asrs r0, r0, #1	@ 00009016 4010
.org 0x9018
	movs r2, #128	@ 00009018 8022
.org 0x901a
	lsls r2, r2, #4	@ 0000901a 1201
.org 0x901c
	adds r0, r0, r2	@ 0000901c 8018
.org 0x901e
	cmp r1, r0	@ 0000901e 8142
.org 0x9020
	blt.n 0x9026	@ 00009020 01db
.org 0x9022
	movs r0, #0	@ 00009022 0020
.org 0x9024
	b.n 0x9028	@ 00009024 00e0
.org 0x9026
	mvns r0, r1	@ 00009026 c843
.org 0x9028
	pop {r1}	@ 00009028 02bc
.org 0x902a
	bx r1	@ 0000902a 0847

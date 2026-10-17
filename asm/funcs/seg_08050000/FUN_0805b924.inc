@ FUN_0805b924  entry 0x0805b924  size 20
.thumb
.org 0x5b924
FUN_0805b924:
	push {lr}	@ 0005b924 00b5
.org 0x5b926
	ldr r2, [pc, #16]	@ 0005b926 044a
.org 0x5b928
	ldrb r1, [r0, #13]	@ 0005b928 417b
.org 0x5b92a
	lsls r1, r1, #2	@ 0005b92a 8900
.org 0x5b92c
	adds r1, r1, r2	@ 0005b92c 8918
.org 0x5b92e
	ldr r1, [r1, #0]	@ 0005b92e 0968
.org 0x5b930
	bl 0x128f80	@ 0005b930 cdf026fb
.org 0x5b934
	pop {r0}	@ 0005b934 01bc
.org 0x5b936
	bx r0	@ 0005b936 0047

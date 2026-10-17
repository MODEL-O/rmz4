@ FUN_080b8880  entry 0x080b8880  size 20
.thumb
.org 0xb8880
FUN_080b8880:
	push {lr}	@ 000b8880 00b5
.org 0xb8882
	ldr r2, [pc, #16]	@ 000b8882 044a
.org 0xb8884
	ldrb r1, [r0, #13]	@ 000b8884 417b
.org 0xb8886
	lsls r1, r1, #2	@ 000b8886 8900
.org 0xb8888
	adds r1, r1, r2	@ 000b8888 8918
.org 0xb888a
	ldr r1, [r1, #0]	@ 000b888a 0968
.org 0xb888c
	bl 0x128f80	@ 000b888c 70f078fb
.org 0xb8890
	pop {r0}	@ 000b8890 01bc
.org 0xb8892
	bx r0	@ 000b8892 0047

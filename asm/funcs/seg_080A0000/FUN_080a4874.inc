@ FUN_080a4874  entry 0x080a4874  size 20
.thumb
.org 0xa4874
FUN_080a4874:
	push {lr}	@ 000a4874 00b5
.org 0xa4876
	ldr r2, [pc, #16]	@ 000a4876 044a
.org 0xa4878
	ldrb r1, [r0, #16]	@ 000a4878 017c
.org 0xa487a
	lsls r1, r1, #2	@ 000a487a 8900
.org 0xa487c
	adds r1, r1, r2	@ 000a487c 8918
.org 0xa487e
	ldr r1, [r1, #0]	@ 000a487e 0968
.org 0xa4880
	bl 0x128f80	@ 000a4880 84f07efb
.org 0xa4884
	pop {r0}	@ 000a4884 01bc
.org 0xa4886
	bx r0	@ 000a4886 0047

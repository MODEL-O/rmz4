@ FUN_080a8954  entry 0x080a8954  size 20
.thumb
.org 0xa8954
FUN_080a8954:
	push {lr}	@ 000a8954 00b5
.org 0xa8956
	ldr r2, [pc, #16]	@ 000a8956 044a
.org 0xa8958
	ldrb r1, [r0, #16]	@ 000a8958 017c
.org 0xa895a
	lsls r1, r1, #2	@ 000a895a 8900
.org 0xa895c
	adds r1, r1, r2	@ 000a895c 8918
.org 0xa895e
	ldr r1, [r1, #0]	@ 000a895e 0968
.org 0xa8960
	bl 0x128f80	@ 000a8960 80f00efb
.org 0xa8964
	pop {r0}	@ 000a8964 01bc
.org 0xa8966
	bx r0	@ 000a8966 0047

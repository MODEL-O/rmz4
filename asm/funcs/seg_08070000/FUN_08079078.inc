@ FUN_08079078  entry 0x08079078  size 20
.thumb
.org 0x79078
FUN_08079078:
	push {lr}	@ 00079078 00b5
.org 0x7907a
	lsls r1, r1, #24	@ 0007907a 0906
.org 0x7907c
	ldr r2, [pc, #12]	@ 0007907c 034a
.org 0x7907e
	lsrs r1, r1, #22	@ 0007907e 890d
.org 0x79080
	adds r1, r1, r2	@ 00079080 8918
.org 0x79082
	ldr r1, [r1, #0]	@ 00079082 0968
.org 0x79084
	bl 0x128f80	@ 00079084 aff07cff
.org 0x79088
	pop {r1}	@ 00079088 02bc
.org 0x7908a
	bx r1	@ 0007908a 0847

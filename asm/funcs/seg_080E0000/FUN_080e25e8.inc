@ FUN_080e25e8  entry 0x080e25e8  size 24
.thumb
.org 0xe25e8
FUN_080e25e8:
	push {lr}	@ 000e25e8 00b5
.org 0xe25ea
	adds r1, r0, #0	@ 000e25ea 011c
.org 0xe25ec
	ldrb r0, [r1, #18]	@ 000e25ec 887c
.org 0xe25ee
	cmp r0, #0	@ 000e25ee 0028
.org 0xe25f0
	beq.n 0xe25fa	@ 000e25f0 03d0
.org 0xe25f2
	subs r0, #1	@ 000e25f2 0138
.org 0xe25f4
	strb r0, [r1, #18]	@ 000e25f4 8874
.org 0xe25f6
	movs r0, #0	@ 000e25f6 0020
.org 0xe25f8
	b.n 0xe25fc	@ 000e25f8 00e0
.org 0xe25fa
	movs r0, #1	@ 000e25fa 0120
.org 0xe25fc
	pop {r1}	@ 000e25fc 02bc
.org 0xe25fe
	bx r1	@ 000e25fe 0847

@ FUN_080dece0  entry 0x080dece0  size 20
.thumb
.org 0xdece0
FUN_080dece0:
	push {lr}	@ 000dece0 00b5
.org 0xdece2
	ldr r2, [pc, #16]	@ 000dece2 044a
.org 0xdece4
	ldrb r1, [r0, #16]	@ 000dece4 017c
.org 0xdece6
	lsls r1, r1, #2	@ 000dece6 8900
.org 0xdece8
	adds r1, r1, r2	@ 000dece8 8918
.org 0xdecea
	ldr r1, [r1, #0]	@ 000decea 0968
.org 0xdecec
	bl 0x128f80	@ 000decec 4af048f9
.org 0xdecf0
	pop {r0}	@ 000decf0 01bc
.org 0xdecf2
	bx r0	@ 000decf2 0047

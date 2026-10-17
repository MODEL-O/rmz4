@ FUN_0807b6e0  entry 0x0807b6e0  size 50
.thumb
.org 0x7b6e0
FUN_0807b6e0:
	push {r4, lr}	@ 0007b6e0 10b5
.org 0x7b6e2
	adds r4, r0, #0	@ 0007b6e2 041c
.org 0x7b6e4
	ldr r0, [r4, #84]	@ 0007b6e4 606d
.org 0x7b6e6
	ldr r1, [r4, #88]	@ 0007b6e6 a16d
.org 0x7b6e8
	bl 0x8534	@ 0007b6e8 8cf724ff
.org 0x7b6ec
	ldr r1, [pc, #36]	@ 0007b6ec 0949
.org 0x7b6ee
	adds r0, r0, r1	@ 0007b6ee 4018
.org 0x7b6f0
	str r0, [r4, #88]	@ 0007b6f0 a065
.org 0x7b6f2
	ldrb r0, [r4, #14]	@ 0007b6f2 a07b
.org 0x7b6f4
	adds r0, #1	@ 0007b6f4 0130
.org 0x7b6f6
	movs r1, #0	@ 0007b6f6 0021
.org 0x7b6f8
	strb r0, [r4, #14]	@ 0007b6f8 a073
.org 0x7b6fa
	strb r1, [r4, #15]	@ 0007b6fa e173
.org 0x7b6fc
	ldr r1, [pc, #24]	@ 0007b6fc 0649
.org 0x7b6fe
	ldrb r0, [r4, #13]	@ 0007b6fe 607b
.org 0x7b700
	lsls r0, r0, #2	@ 0007b700 8000
.org 0x7b702
	adds r0, r0, r1	@ 0007b702 4018
.org 0x7b704
	ldr r1, [r0, #0]	@ 0007b704 0168
.org 0x7b706
	adds r0, r4, #0	@ 0007b706 201c
.org 0x7b708
	bl 0x128f80	@ 0007b708 adf03afc
.org 0x7b70c
	pop {r4}	@ 0007b70c 10bc
.org 0x7b70e
	pop {r0}	@ 0007b70e 01bc
.org 0x7b710
	bx r0	@ 0007b710 0047

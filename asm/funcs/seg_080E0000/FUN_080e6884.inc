@ FUN_080e6884  entry 0x080e6884  size 32
.thumb
.org 0xe6884
FUN_080e6884:
	push {r4, lr}	@ 000e6884 10b5
.org 0xe6886
	adds r4, r0, #0	@ 000e6886 041c
.org 0xe6888
	ldr r1, [pc, #24]	@ 000e6888 0649
.org 0xe688a
	ldrb r0, [r4, #13]	@ 000e688a 607b
.org 0xe688c
	lsls r0, r0, #2	@ 000e688c 8000
.org 0xe688e
	adds r0, r0, r1	@ 000e688e 4018
.org 0xe6890
	ldr r1, [r0, #0]	@ 000e6890 0168
.org 0xe6892
	adds r0, r4, #0	@ 000e6892 201c
.org 0xe6894
	bl 0x128f80	@ 000e6894 42f074fb
.org 0xe6898
	adds r0, r4, #0	@ 000e6898 201c
.org 0xe689a
	bl 0x1cff0	@ 000e689a 36f7a9fb
.org 0xe689e
	pop {r4}	@ 000e689e 10bc
.org 0xe68a0
	pop {r0}	@ 000e68a0 01bc
.org 0xe68a2
	bx r0	@ 000e68a2 0047

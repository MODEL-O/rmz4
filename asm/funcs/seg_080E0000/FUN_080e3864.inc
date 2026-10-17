@ FUN_080e3864  entry 0x080e3864  size 32
.thumb
.org 0xe3864
FUN_080e3864:
	push {r4, lr}	@ 000e3864 10b5
.org 0xe3866
	adds r4, r0, #0	@ 000e3866 041c
.org 0xe3868
	ldr r1, [pc, #24]	@ 000e3868 0649
.org 0xe386a
	ldrb r0, [r4, #13]	@ 000e386a 607b
.org 0xe386c
	lsls r0, r0, #2	@ 000e386c 8000
.org 0xe386e
	adds r0, r0, r1	@ 000e386e 4018
.org 0xe3870
	ldr r1, [r0, #0]	@ 000e3870 0168
.org 0xe3872
	adds r0, r4, #0	@ 000e3872 201c
.org 0xe3874
	bl 0x128f80	@ 000e3874 45f084fb
.org 0xe3878
	adds r0, r4, #0	@ 000e3878 201c
.org 0xe387a
	bl 0x1cff0	@ 000e387a 39f7b9fb
.org 0xe387e
	pop {r4}	@ 000e387e 10bc
.org 0xe3880
	pop {r0}	@ 000e3880 01bc
.org 0xe3882
	bx r0	@ 000e3882 0047

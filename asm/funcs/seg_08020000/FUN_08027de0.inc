@ FUN_08027de0  entry 0x08027de0  size 24
.thumb
.org 0x27de0
FUN_08027de0:
	push {lr}	@ 00027de0 00b5
.org 0x27de2
	adds r2, r0, #0	@ 00027de2 021c
.org 0x27de4
	ldr r1, [r2, #12]	@ 00027de4 d168
.org 0x27de6
	ldrb r0, [r1, #1]	@ 00027de6 4878
.org 0x27de8
	cmp r0, #0	@ 00027de8 0028
.org 0x27dea
	bne.n 0x27df2	@ 00027dea 02d1
.org 0x27dec
	ldr r0, [r1, #4]	@ 00027dec 4868
.org 0x27dee
	subs r0, #8	@ 00027dee 0838
.org 0x27df0
	str r0, [r2, #12]	@ 00027df0 d060
.org 0x27df2
	movs r0, #0	@ 00027df2 0020
.org 0x27df4
	pop {r1}	@ 00027df4 02bc
.org 0x27df6
	bx r1	@ 00027df6 0847
